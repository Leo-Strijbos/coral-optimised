# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
"""Functional checks of the two designs (run with ./run_checks.sh, or python3 checks.py [--n N]).

  A. BEFORE against Coral's original RTL in BF16 mode, bit for bit, by input class.
  B. AFTER against the Python model (model.py), bit for bit.
  C. AFTER's error against the exact result, within the proven bound (model.bound).
  D. The zero-product vector 0*2^62 + (-2^-126) through Coral, BEFORE and AFTER.
"""
import random
import sys
from fractions import Fraction

import model
from sim import Sim

ROOT = "../rtl"
N = 20000                      # vectors per class
for i, arg in enumerate(sys.argv):
    if arg == "--n":
        N = int(sys.argv[i + 1])

# ---------------------------------------------------------------- input generators

def bf_normal(rng, lo=-30, hi=30):
    return (rng.getrandbits(1) << 15) | ((127 + rng.randint(lo, hi)) << 7) | rng.getrandbits(7)


def bf_any_normal(rng):
    return (rng.getrandbits(1) << 15) | (rng.randint(1, 254) << 7) | rng.getrandbits(7)


def bf_sub(rng):
    return (rng.getrandbits(1) << 15) | rng.randint(1, 127)


def bf_zero(rng):
    return rng.getrandbits(1) << 15


def bf_special(rng):
    return rng.choice([0x7F80, 0xFF80, 0x7FC0, 0xFFC1])


def f32_normal(rng, lo=-30, hi=30):
    return (rng.getrandbits(1) << 31) | ((127 + rng.randint(lo, hi)) << 23) | rng.getrandbits(23)


def f32_sub(rng):
    return (rng.getrandbits(1) << 31) | rng.randint(1, (1 << 23) - 1)


def bf_exp(x):
    return ((x >> 7) & 0xFF) - 127


def neg16(x):
    return x ^ 0x8000


# ---------------------------------------------------------------- A. BEFORE vs Coral original

def pair_classes(rng):
    def normal():
        return [bf_normal(rng) for _ in range(4)]

    def wide():
        return [bf_any_normal(rng) for _ in range(4)]

    def gap():
        a0, b0 = bf_normal(rng, -5, 5), bf_normal(rng, -5, 5)
        d = rng.randint(10, 40)
        a1 = (rng.getrandbits(1) << 15) | ((127 - d) << 7) | rng.getrandbits(7)
        return [a0, a1, b0, bf_normal(rng, -5, 5)]

    def cancel():
        a0, b0 = bf_normal(rng), bf_normal(rng)
        a1, b1 = a0, neg16(b0)
        if rng.random() < 0.7:          # near cancellation: nudge one mantissa
            b1 = (b1 & ~0x7F) | ((b1 + rng.choice([-1, 1])) & 0x7F)
        return [a0, a1, b0, b1]

    def subnormal():
        v = [bf_normal(rng, -100, 100) for _ in range(4)]
        v[rng.randrange(4)] = bf_sub(rng)
        return v

    def zero():
        v = [bf_normal(rng, -60, 60) for _ in range(4)]
        v[rng.randrange(4)] = bf_zero(rng)
        return v

    def special():
        v = [bf_normal(rng) for _ in range(4)]
        v[rng.randrange(4)] = bf_special(rng)
        return v

    return {"normal": normal, "full exponent range": wide, "exponent gap 10-40": gap,
            "cancellation": cancel, "one subnormal input": subnormal, "one zero operand": zero,
            "one NaN/Inf input": special}


def add_classes(rng):
    def normal():
        return [f32_normal(rng), f32_normal(rng)]

    def gap():
        x = f32_normal(rng, -3, 3)
        d = rng.randint(20, 60)
        return [x, (rng.getrandbits(1) << 31) | ((127 - d) << 23) | rng.getrandbits(23)]

    def cancel():
        x = f32_normal(rng)
        y = x ^ 0x80000000
        if rng.random() < 0.7:
            y = (y & ~0x7FFFFF) | ((y + rng.choice([-1, 1, 2])) & 0x7FFFFF)
        return [x, y]

    def subnormal():
        return [f32_sub(rng), rng.choice([f32_sub(rng), f32_normal(rng, -126, -120)])]

    def zero():
        return [rng.choice([0, 0x80000000]), f32_normal(rng)]

    def special():
        return [rng.choice([0x7F800000, 0xFF800000, 0x7FC00000]), f32_normal(rng)]

    return {"normal": normal, "exponent gap 20-60": gap, "cancellation": cancel,
            "subnormal": subnormal, "zero operand": zero, "NaN/Inf operand": special}


def run_coral(sim, ops, extra):
    """Drive a Coral lane with one operation per cycle; return results in input order."""
    vecs = [dict(rst_n=0, reg_enable=1, up_valid=0, operands=0, **{k: 0 for k in extra}) for _ in range(3)]
    for op in ops:
        vecs.append(dict(rst_n=1, reg_enable=1, up_valid=1, operands=op, **extra))
    vecs += [dict(rst_n=1, reg_enable=1, up_valid=0, operands=0, **extra) for _ in range(8)]
    out = sim.run(vecs)
    first = next(i for i, r in enumerate(out) if r["down_valid"])     # the lane holds down_valid high once
    res = [r["result"] for r in out[first:first + len(ops)]]           # its pipeline has filled
    assert len(res) == len(ops) and all(r["down_valid"] for r in out[first:first + len(ops)])
    return res


def run_ours(sim, vecs, latency, pad):
    out = sim.run(vecs + [pad] * (latency + 2))
    return [out[i + latency]["y"] for i in range(len(vecs))]


def check_a(rng):
    print("A. BEFORE against Coral's original RTL (BF16 mode), bit for bit")
    coral_mul = Sim("zvt_pe_mulbulk_fp_lane", [f"{ROOT}/coral-original/zvt_pe_mulbulk_fp_lane_flat.v"],
                    [("rst_n", 1), ("reg_enable", 1), ("up_valid", 1), ("operands", 64), ("rnd_mode", 3),
                     ("mask", 4), ("src_fmt", 3), ("dst_fmt", 3)], [("result", 32), ("down_valid", 1)])
    pair = Sim("coral_bf16_pair", [f"{ROOT}/before/coral_bf16_pair.v"],
               [("a0", 16), ("a1", 16), ("b0", 16), ("b1", 16)], [("y", 32)])
    total = {}
    for name, gen in pair_classes(rng).items():
        vs = [gen() for _ in range(N)]
        ops = [v[0] | (v[1] << 16) | (v[2] << 32) | (v[3] << 48) for v in vs]   # {b1, b0, a1, a0}
        ref = run_coral(coral_mul, ops, dict(rnd_mode=0, mask=0xF, src_fmt=4, dst_fmt=0))
        got = run_ours(pair, [dict(a0=v[0], a1=v[1], b0=v[2], b1=v[3]) for v in vs], 1, dict(a0=0, a1=0, b0=0, b1=0))
        bad = sum(r != g for r, g in zip(ref, got))
        total["multiply lane: " + name] = (bad, N)
    coral_add = Sim("zvt_pe_adder_fp_lane", [f"{ROOT}/coral-original/zvt_pe_adder_fp_lane_flat.v"],
                    [("rst_n", 1), ("reg_enable", 1), ("up_valid", 1), ("operands", 64), ("do_subtract", 1),
                     ("rnd_mode", 3)], [("result", 32), ("down_valid", 1)])
    tadd = Sim("coral_bf16_tile_add", [f"{ROOT}/before/coral_bf16_tile_add.v"], [("x0", 32), ("x1", 32)], [("y", 32)])
    for name, gen in add_classes(rng).items():
        vs = [gen() for _ in range(N)]
        ref = run_coral(coral_add, [v[0] | (v[1] << 32) for v in vs], dict(do_subtract=0, rnd_mode=0))
        got = run_ours(tadd, [dict(x0=v[0], x1=v[1]) for v in vs], 1, dict(x0=0, x1=0))
        bad = [(v, r, g) for v, r, g in zip(vs, ref, got) if r != g]
        note = ""
        if bad and all(r == 0x80000000 and g == 0 for _, r, g in bad):
            note = "  (all: Coral returns -0, BEFORE +0, for an exactly zero sum)"
        total["tile adder: " + name] = (len(bad), N, note)
    for k, v in total.items():
        print(f"   {k:42s} {v[0]:5d} / {v[1]} differ{v[2] if len(v) > 2 else ''}")
    return total


# ---------------------------------------------------------------- B and C. AFTER

def block_classes(rng):
    def mk(gen_ab, gen_c):
        return [gen_ab() for _ in range(16)], [gen_ab() for _ in range(16)], gen_c()

    def c_any():
        return rng.choice([0, 0x80000000, f32_normal(rng, -40, 40), f32_normal(rng, -5, 5), f32_sub(rng)])

    def normal():
        return mk(lambda: bf_normal(rng, -20, 20), c_any)

    def wide():
        return mk(lambda: bf_normal(rng, -60, 60), lambda: f32_normal(rng, -120, 120))

    def gap():
        a, b, c = mk(lambda: bf_normal(rng, -3, 3), c_any)
        for k in rng.sample(range(16), 8):
            a[k] = (rng.getrandbits(1) << 15) | ((127 - rng.randint(10, 40)) << 7) | rng.getrandbits(7)
        return a, b, c

    def cancel():
        a = [bf_normal(rng) for _ in range(8)]
        b = [bf_normal(rng) for _ in range(8)]
        a2, b2 = list(a), [neg16(x) for x in b]
        for k in range(8):
            if rng.random() < 0.5:
                b2[k] = (b2[k] & ~0x7F) | ((b2[k] + rng.choice([-1, 1])) & 0x7F)
        return a + a2, b + b2, rng.choice([0, f32_normal(rng, -20, -10)])

    def dominant_c():
        a, b, _ = mk(lambda: bf_normal(rng, -10, 10), lambda: 0)
        return a, b, f32_normal(rng, 20, 40)

    def tiny():
        return mk(lambda: rng.choice([bf_sub(rng), bf_normal(rng, -126, -100), bf_zero(rng)]),
                  lambda: rng.choice([0, f32_sub(rng), f32_normal(rng, -126, -110)]))

    def zeros():
        a, b, c = mk(lambda: bf_normal(rng), c_any)
        for k in rng.sample(range(16), rng.randint(1, 16)):
            a[k] = bf_zero(rng)
        return a, b, c

    def overflow():
        return mk(lambda: bf_normal(rng, 60, 64), lambda: f32_normal(rng, 120, 127))

    def special():
        a, b, c = mk(lambda: bf_normal(rng), c_any)
        k = rng.randrange(17)
        if k == 16:
            c = rng.choice([0x7F800000, 0xFF800000, 0x7FC00000])
        else:
            a[k] = bf_special(rng)
            if rng.random() < 0.3:
                b[k] = bf_zero(rng)
        return a, b, c

    # Directed: c sets the anchor and loses its 5 low bits; every product sits 12 binades lower with
    # a significand whose dropped bits are just under half a step, so all errors add up.
    worst_pairs = [(x, y) for x in range(128, 256) for y in range(128, 256) if (x * y) % 256 == 127]

    def directed():
        ma, mb = rng.choice(worst_pairs)
        s = rng.getrandbits(1)
        e = rng.randint(-40, 40)
        a = [(s << 15) | ((127 + e - 6) << 7) | (ma & 0x7F)] * 16
        b = [((127 - 6) << 7) | (mb & 0x7F)] * 16
        c = (s << 31) | ((127 + e) << 23) | (rng.getrandbits(18) << 5) | 0x1F
        return a, b, c

    return {"normal": normal, "wide exponents": wide, "exponent gap 10-40": gap,
            "cancellation": cancel, "dominant c": dominant_c, "subnormal/tiny": tiny,
            "zero products": zeros, "overflow": overflow, "NaN/Inf": special,
            "directed near-worst-case": directed}


def block_sim():
    ins = [(f"a{k}", 16) for k in range(16)] + [(f"b{k}", 16) for k in range(16)] + [("c", 32)]
    return Sim("bf16_block16", [f"{ROOT}/after/bf16_block16.v"], ins, [("y", 32)])


def to_vec(a, b, c):
    v = {f"a{k}": a[k] for k in range(16)}
    v.update({f"b{k}": b[k] for k in range(16)})
    v["c"] = c
    return v


PAD = to_vec([0] * 16, [0] * 16, 0)


def check_bc(rng):
    print("B. AFTER against the Python model, bit for bit")
    print("C. AFTER's error against the exact result, as a fraction of the proven bound")
    blk = block_sim()
    worst = Fraction(0)
    worst_vec = None
    nb = nc = violations = 0
    for name, gen in block_classes(rng).items():
        vs = [gen() for _ in range(N)]
        got = run_ours(blk, [to_vec(*v) for v in vs], 3, PAD)
        bad = 0
        cls_worst = Fraction(0)
        checked = 0
        for (a, b, c), y in zip(vs, got):
            if model.bf16_block16(a, b, c) != y:
                bad += 1
            ky = model.fp32(y)[0]
            if ky != "fin" and ky != "zero":
                continue                              # NaN/Inf/overflow: outside the bound's scope
            if any(model.bf16(x)[0] in ("nan", "inf") for x in a + b) or model.fp32(c)[0] in ("nan", "inf"):
                continue
            err = abs(model.value(y, "fp32") - model.exact(a, b, c))
            B = model.bound(a, b, c, y)
            r = err / B if B else (Fraction(0) if err == 0 else Fraction(10 ** 9))
            checked += 1
            if r > 1:
                violations += 1
            if r > cls_worst:
                cls_worst = r
            if r > worst:
                worst, worst_vec = r, (name, a, b, c, y)
        nb += bad
        nc += checked
        print(f"   {name:26s} model mismatches {bad:4d} / {N}    bound checked on {checked:5d}, "
              f"largest error / bound = {float(cls_worst):.3f}")
    print(f"   total: {nb} model mismatches; {violations} bound violations in {nc} checked vectors; "
          f"largest error / bound = {float(worst):.3f} ({worst_vec[0] if worst_vec else '-'})")
    return nb, violations, worst


# ---------------------------------------------------------------- D. the zero-product vector

def check_d():
    print("D. 0 * 2^62 + (-2^-126) * 1   (exact answer -2^-126 = 0x80800000)")
    a0, b0, a1, b1 = 0x0000, 0x5E80, 0x8080, 0x3F80
    coral_mul = Sim("zvt_pe_mulbulk_fp_lane", [f"{ROOT}/coral-original/zvt_pe_mulbulk_fp_lane_flat.v"],
                    [("rst_n", 1), ("reg_enable", 1), ("up_valid", 1), ("operands", 64), ("rnd_mode", 3),
                     ("mask", 4), ("src_fmt", 3), ("dst_fmt", 3)], [("result", 32), ("down_valid", 1)])
    coral = run_coral(coral_mul, [a0 | (a1 << 16) | (b0 << 32) | (b1 << 48)], dict(rnd_mode=0, mask=0xF, src_fmt=4, dst_fmt=0))[0]
    pair = Sim("coral_bf16_pair", [f"{ROOT}/before/coral_bf16_pair.v"],
               [("a0", 16), ("a1", 16), ("b0", 16), ("b1", 16)], [("y", 32)])
    before = run_ours(pair, [dict(a0=a0, a1=a1, b0=b0, b1=b1)], 1, dict(a0=0, a1=0, b0=0, b1=0))[0]
    a = [a0, a1] + [0] * 14
    b = [b0, b1] + [0] * 14
    after = run_ours(block_sim(), [to_vec(a, b, 0)], 3, PAD)[0]
    for name, y in (("Coral original", coral), ("BEFORE", before), ("AFTER", after)):
        v = model.value(y, "fp32")
        e = v.denominator.bit_length() - 1 if v else 0
        print(f"   {name:15s} 0x{y:08x}  = {'-' if v < 0 else ''}2^-{e}")
    return coral, before, after


if __name__ == "__main__":
    rng = random.Random(2026)
    check_a(rng)
    check_bc(rng)
    check_d()
