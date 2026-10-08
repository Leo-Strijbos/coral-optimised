# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
"""Bit-accurate Python model of rtl/after/bf16_block16.v (one 16-product block), plus the
proven worst-case error bound for that block and an exact reference.

    y = bf16_block16(a, b, c)

a, b: 16 BF16 codes each (ints, 16 bits); c: the FP32 running sum (int, 32 bits);
y: the FP32 result code (int, 32 bits). Standard library only (Python >= 3.8).

What the block computes, for finite inputs:
  1. Each input's exponent is read as the hardware decodes it: E - 127 for a normal number,
     -126 for a subnormal, none for a zero. A product's exponent is e_a + e_b; c's is its own.
  2. The anchor M is the largest exponent among the nonzero products and c.
  3. c is first cut to 18 fraction bits at its own exponent (truncation toward zero).
  4. Every product and c is placed on the grid 2^(M - 18), rounding each to nearest, ties to
     even (on the magnitude), and the integers are summed exactly.
  5. The sum is rounded once to FP32 (nearest even; subnormal outputs rounded at 2^-149;
     overflow gives +-Inf; an exactly zero sum gives +0).
Special values: any NaN input, Inf x 0, or infinities of both signs give the canonical NaN
0x7fc00000; otherwise any infinite term gives that infinity.
"""
from fractions import Fraction

F = 18                       # fraction bits kept after alignment
QNAN = 0x7FC00000
PINF, NINF = 0x7F800000, 0xFF800000


def _rne_shift_right(mag, s):
    """mag / 2^s rounded to nearest, ties to even (mag >= 0, s >= 0)."""
    if s <= 0:
        return mag << (-s)
    q, r = mag >> s, mag & ((1 << s) - 1)
    half = 1 << (s - 1)
    if r > half or (r == half and q & 1):
        q += 1
    return q


def _decode(code, exp_bits, man_bits):
    """(kind, sign, significand, exponent) with value = sig * 2^(exp - man_bits)."""
    sign = (code >> (exp_bits + man_bits)) & 1
    E = (code >> man_bits) & ((1 << exp_bits) - 1)
    m = code & ((1 << man_bits) - 1)
    bias = (1 << (exp_bits - 1)) - 1
    if E == (1 << exp_bits) - 1:
        return ("nan" if m else "inf"), sign, 0, 0
    if E == 0:
        return ("zero" if m == 0 else "fin"), sign, m, 1 - bias
    return "fin", sign, m | (1 << man_bits), E - bias


def bf16(code):
    return _decode(code, 8, 7)


def fp32(code):
    return _decode(code, 8, 23)


def value(code, fmt):
    """Exact value of a finite code as a Fraction (fmt: 'bf16' or 'fp32')."""
    kind, s, sig, e = bf16(code) if fmt == "bf16" else fp32(code)
    assert kind in ("fin", "zero")
    mb = 7 if fmt == "bf16" else 23
    v = Fraction(sig) * Fraction(2) ** (e - mb)
    return -v if s else v


def round_fp32(n, q):
    """FP32 code of the integer n times 2^q, rounded to nearest even (+0 for zero)."""
    if n == 0:
        return 0
    sign = 1 if n < 0 else 0
    mag = abs(n)
    e = mag.bit_length() - 1 + q              # exponent of the exact value
    qe = max(e - 23, -149)                     # the output quantum
    r = _rne_shift_right(mag, qe - q)
    if r >> 24:                                # rounding carried into a new binade
        r >>= 1
        qe += 1
    if r < (1 << 23):                          # subnormal
        return (sign << 31) | r
    biased = qe + 23 + 127
    if biased >= 255:
        return NINF if sign else PINF
    return (sign << 31) | (biased << 23) | (r - (1 << 23))


def _specials(a, b, c):
    nan = pinf = ninf = False
    for x, w in zip(a, b):
        kx, sx, _, _ = bf16(x)
        kw, sw, _, _ = bf16(w)
        if kx == "nan" or kw == "nan" or (kx == "inf" and kw == "zero") or (kw == "inf" and kx == "zero"):
            nan = True
        if kx == "inf" or kw == "inf":
            if sx ^ sw:
                ninf = True
            else:
                pinf = True
    kc, sc, _, _ = fp32(c)
    if kc == "nan":
        nan = True
    if kc == "inf":
        if sc:
            ninf = True
        else:
            pinf = True
    if nan or (pinf and ninf):
        return QNAN
    if pinf:
        return PINF
    if ninf:
        return NINF
    return None


def bf16_block16(a, b, c):
    """The FP32 code bf16_block16 returns for BF16 codes a[0..15], b[0..15] and FP32 code c."""
    sp = _specials(a, b, c)
    if sp is not None:
        return sp
    terms = []                                 # (signed significand, its exponent offset, anchor exponent)
    for x, w in zip(a, b):
        _, sx, mx, ex = bf16(x)
        _, sw, mw, ew = bf16(w)
        p = mx * mw
        if p:
            terms.append(((-p if sx ^ sw else p), ex + ew - 14, ex + ew))   # value = p * 2^(ex + ew - 14)
    kc, sc, mc, ec = fp32(c)
    if kc == "fin":
        ct = mc >> (23 - F)                    # cut to F fraction bits at c's own exponent
        if ct:
            terms.append(((-ct if sc else ct), ec - F, ec))
        cexp = ec
    else:
        cexp = None
    exps = [t[2] for t in terms]
    if cexp is not None:
        exps.append(cexp)
    if not terms:
        return 0
    M = max(exps)
    S = 0
    for v, q, _ in terms:                      # place v * 2^q on the grid 2^(M - F)
        mag = _rne_shift_right(abs(v), (M - F) - q)
        S += -mag if v < 0 else mag
    return round_fp32(S, M - F)


# --- the proven worst-case bound of one block (finite inputs, no overflow) -------------------

def bound(a, b, c, y):
    """Proven bound on |y - (sum a_k*b_k + c)| for one block, as a Fraction:

        2^(M - 15) + 31 * 2^(Ec - 23) + 2^(Eout - 24)

    M: the block's anchor (largest of e_a + e_b over nonzero products and c's exponent);
    Ec: c's exponent (term absent when c = 0); Eout: the output's exponent (-126 when the
    output is subnormal or zero). Exponents as the hardware decodes them (E - 127, -126 for
    subnormals)."""
    exps = []
    for x, w in zip(a, b):
        kx, _, mx, ex = bf16(x)
        kw, _, mw, ew = bf16(w)
        if mx * mw:
            exps.append(ex + ew)
    kc, _, mc, ec = fp32(c)
    if kc == "fin":
        exps.append(ec)
    two = Fraction(2)
    B = Fraction(0)
    if exps:
        B += two ** (max(exps) - 15)
    if kc == "fin":
        B += 31 * two ** (ec - 23)
    ky, _, my, ey = fp32(y)
    B += two ** ((ey if ky == "fin" else -126) - 24)
    return B


def exact(a, b, c):
    return sum((value(x, "bf16") * value(w, "bf16") for x, w in zip(a, b)), Fraction(0)) + value(c, "fp32")
