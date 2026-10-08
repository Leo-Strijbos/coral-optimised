# Coral NPU BF16 multiply-accumulate: before and after

Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only;
not for redistribution. Coral NPU's own files in `rtl/coral-original/` keep their Apache-2.0 and
Solderpad 0.51 licences.

This package contains the RTL of two designs that compute the same BF16 dot product, and
everything needed to check them and reproduce our area, timing and power figures with open
tools.

- **BEFORE**: the BF16 multiply-accumulate path of Google's open-source
  [Coral NPU](https://github.com/google-coral/coralnpu) matrix core.
- **AFTER**: our replacement for it.

Per product, at 400 MHz, on the ASAP7 predictive 7 nm library, after place and route:

| | BEFORE | AFTER | change |
|---|---|---|---|
| area per product | 356.2 µm² | 139.0 µm² | **−61 %** |
| energy per product | 1.00 pJ | 0.51 pJ | **−49 %** |

## What is different

| | BEFORE (Coral) | AFTER |
|---|---|---|
| products per unit | 2 per multiply lane, then an FP32 tile adder adds the pair's sum to the running sum | 16 per block; the running sum `c` enters the block as a 17th term |
| alignment | per pair, to the larger of the two product exponents | once per block, to the largest exponent of the 16 products and `c` |
| bits kept after alignment | 25 fraction bits, the shifted-out bits jammed into the last one | 18 fraction bits, rounded to nearest |
| roundings per 16 products | 16 (8 pair results round to odd, 8 tile adds round to nearest) | 1 (round to nearest even) |
| pipeline | 3 stages per module (2 register ranks) | 5 stages (4 register ranks) |
| loop the running sum goes round | 2 cycles (the tile adder) | 4 cycles (the block) |
| modules | `rtl/before/coral_bf16_pair.v`, `rtl/before/coral_bf16_tile_add.v` | `rtl/after/bf16_block16.v` |

Sharing one alignment, normaliser and rounding across 16 products is a known structure (NVIDIA's
tensor cores use it). The 18-bit width after alignment was chosen by our tooling against the
accuracy requirement below.

## Accuracy

- **BEFORE is Coral's arithmetic.** On normal finite inputs its multiply lane equals Coral's bit
  for bit (we proved the arithmetic it implements equal to Coral's lane with an SMT solver; check A
  confirms the RTL itself by simulation), and its tile adder equals Coral's on all finite inputs
  except the sign of an exactly zero sum. The multiply lane differs from Coral in two input
  classes, both through Coral's choice of alignment exponent rather than any loss of accuracy in
  BEFORE:
  - a subnormal input: Coral normalises it before choosing the alignment exponent, BEFORE does not
    (1.4 % of random vectors with one subnormal input give a different result);
  - a zero operand: in Coral a zero product still sets the alignment exponent, so a tiny product
    next to it is flushed. `0·2^62 + (−2^−126)·1` returns −2^−89 in Coral; BEFORE and AFTER return
    the exact −2^−126 (check D). 0.7 % of random vectors with one zero operand differ.
- **AFTER does not give the same bits as BEFORE**; it is a different, cheaper arithmetic. For one
  block its error has a proven bound:

  |y − (Σ a_k·b_k + c)| ≤ 2^(M−15) + 31·2^(Ec−23) + 2^(Eout−24)

  where M is the largest exponent among the 16 products (e_a + e_b) and `c`, Ec is `c`'s exponent
  (term absent when c = 0) and Eout the output's exponent (−126 when the output is subnormal or
  zero). The bound holds for finite inputs whose result does not overflow. Check C tests it on
  166,657 vectors with no violation; directed vectors reach 99 % of it, so it is tight.
- Over a whole dot product this keeps AFTER's error within a third of the error that rounding the
  inputs to BF16 already introduces (proven worst case for dot products of 896 to 4,864 terms).
  At Coral's full 25-bit width the 16-product structure is no less accurate than Coral in the
  worst case, on inputs where the running sum does not shrink within a block; the 18-bit width
  spends part of that margin.
- On Qwen2.5-0.5B (wikitext-2, 16,384 tokens) the perplexity change against exact BF16 arithmetic
  was +0.004 % (95 % interval −0.011 % to +0.019 %). That harness is not included; the Python
  model in `check/model.py` can be dropped into your own.

## What is where

```
rtl/before/      coral_bf16_pair.v, coral_bf16_tile_add.v   BEFORE (Coral's BF16 path)
rtl/after/       bf16_block16.v                             AFTER
rtl/coral-original/                                         Coral's own lanes, for check A only (README, licences)
check/           run_checks.sh, checks.py, sim.py           functional checks A-D (Verilator)
                 model.py                                   bit-accurate Python model of AFTER + its error bound
flow/            run_all.sh, run_layout.sh, run_power.sh    place and route, power (OpenROAD-flow-scripts in Docker)
                 summarise.py, vectors/                     per-product summary; power stimulus
results/         our_results.md, our_results.json           our measured numbers
```

All three modules have a clock `clk`, no reset, BF16 inputs as 16-bit codes and an FP32 output
`y`. `bf16_block16` takes `a0..a15`, `b0..b15` and the FP32 running sum `c`, and returns
`y = Σ a_k·b_k + c`, one block per cycle. Inputs captured at clock edge t give their result on
`y` after edge t+3 (BEFORE's modules: after edge t+1).

## Reproducing

### 1. Functional checks (any machine, about a minute)

Needs Python 3.8+ and Verilator 5.

```
check/run_checks.sh            # 20,000 random vectors per input class; --n N to change
```

Expected output (the seed is fixed, so yours should match):

```
A. BEFORE against Coral's original RTL (BF16 mode), bit for bit
   multiply lane: normal                          0 / 20000 differ
   multiply lane: full exponent range             0 / 20000 differ
   multiply lane: exponent gap 10-40              0 / 20000 differ
   multiply lane: cancellation                    0 / 20000 differ
   multiply lane: one subnormal input           286 / 20000 differ
   multiply lane: one zero operand              134 / 20000 differ
   multiply lane: one NaN/Inf input               0 / 20000 differ
   tile adder: normal                             0 / 20000 differ
   tile adder: exponent gap 20-60                 0 / 20000 differ
   tile adder: cancellation                       0 / 20000 differ
   tile adder: subnormal                          0 / 20000 differ
   tile adder: zero operand                       0 / 20000 differ
   tile adder: NaN/Inf operand                    0 / 20000 differ
B. AFTER against the Python model, bit for bit
C. AFTER's error against the exact result, as a fraction of the proven bound
   normal                     model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.358
   wide exponents             model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.245
   exponent gap 10-40         model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.419
   cancellation               model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.235
   dominant c                 model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.397
   subnormal/tiny             model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.108
   zero products              model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.289
   overflow                   model mismatches    0 / 20000    bound checked on  6657, largest error / bound = 0.327
   NaN/Inf                    model mismatches    0 / 20000    bound checked on     0, largest error / bound = 0.000
   directed near-worst-case   model mismatches    0 / 20000    bound checked on 20000, largest error / bound = 0.991
   total: 0 model mismatches; 0 bound violations in 166657 checked vectors; largest error / bound = 0.991 (directed near-worst-case)
D. 0 * 2^62 + (-2^-126) * 1   (exact answer -2^-126 = 0x80800000)
   Coral original  0x93000000  = -2^-89
   BEFORE          0x80800000  = -2^-126
   AFTER           0x80800000  = -2^-126
```

### 2. Area, timing and power (x86-64 host with Docker)

Needs Docker, Python 3 and Icarus Verilog (`iverilog`, `vvp`; version 11 or newer) on PATH. The
flow image is pinned by digest (`openroad/orfs@sha256:73d4aed8…`, about 6.5 GB; pulled on first
use).

```
JOBS=9 CORES=4 flow/run_all.sh     # 3 modules x 3 seeds, then power; about 12 minutes on 48 cores
```

or one step at a time:

```
flow/run_layout.sh bf16_block16 42     # one layout: prints area, worst slack, cell count
flow/run_power.sh  bf16_block16 42     # power of that layout on flow/vectors/bf16_block16.txt
python3 flow/summarise.py              # per-product table, yours next to ours
```

Settings: ASAP7, clock 2,500 ps, 40 % core utilisation, platform-default placement density,
seeds 42, 7 and 123, input and output delays 20 % of the clock. Results land in `flow/out/`; work
files (about 300 MB per run) in `flow/work/`.

What we measured is in `results/our_results.md`. A clean run of this package on a fresh machine
reproduced it exactly (same area, slack and power for every layout). One layout takes about 2.5
minutes for each BEFORE module and 8 minutes for AFTER; every layout closes timing with 67–135 ps
of slack.

## Caveats

- **Per product.** Coral's lane forms 2 products per cycle, AFTER 16, so the comparison is per
  product: BEFORE = (pair + tile adder) / 2, AFTER = block / 16, i.e. eight Coral lanes against
  one block at the same throughput.
- **BEFORE is Coral's BF16 path, extracted.** Coral's shipped multiply lane is multi-format: it
  also carries an FP32 multiply (a 24×24 multiplier) and format muxes, which dominate its area.
  Measuring it whole would overstate the saving for a BF16 workload, so we measure only its BF16
  function, built as a separate module and checked against the original (check A).
- **Pipeline.** AFTER has 5 pipeline stages (4 register ranks) against 3 (2 register ranks) in
  each BEFORE module. Throughput is unchanged, but the running sum's loop is 4 cycles instead of
  2, so 4 independent dot products must be interleaved instead of 2 to keep the unit busy (a
  matrix multiply provides them).
- **Not bit-compatible.** AFTER does not reproduce Coral's bits; its error is bounded as above.
- **Library and tools.** ASAP7 is a predictive academic library, not a foundry process, and the
  flow is open-source. Compare BEFORE against AFTER; absolute numbers will differ in a commercial
  flow.
- **Power stimulus is synthetic:** 2,000 cycles, the first half with same-sign inputs
  (|N(0,1)|), the second half with zero-mean inputs (N(0,1)), and running sums of plausible size
  for `c` and the tile adder; the same distribution for both designs.
- **Special values.** AFTER returns the canonical NaN for any NaN input, Inf·0 or infinities of
  both signs, otherwise the infinity; an exactly zero sum gives +0; overflow gives ±Inf.
