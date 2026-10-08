# Coral NPU's original lane RTL (reference only)

These two files are Coral NPU's own matrix-core lanes, used here only to check that
`rtl/before/` computes what Coral computes (check A in `check/`). They are not part of either
measured design.

| file | upstream module | upstream source |
|---|---|---|
| `zvt_pe_mulbulk_fp_lane_flat.v` | `zvt_pe_mulbulk_fp_lane` (the multiply lane: two BF16 products per cycle, or one FP32 product) | `hdl/verilog/rvv/design/Zvt/zvt_pe_mulbulk_fp_lane.sv` |
| `zvt_pe_adder_fp_lane_flat.v` | `zvt_pe_adder_fp_lane` (the FP32 tile adder) | `hdl/verilog/rvv/design/Zvt/zvt_pe_adder_fp_lane.sv` |

Source: https://github.com/google-coral/coralnpu at commit
`89a0bcbb037736efbb18f1bd94e4eea1ef893ec6` (Apache-2.0, Google LLC), with
`openhwgroup/cvfpu` at `bb65bdedd07711dfd41c621382f940a5cbb93046` (its `fpnew_pkg`, with the
coralnpu repository's `third_party/cvfpu` patches applied) and `pulp-platform/common_cells` at
`6aeee85d0a34fedc06c14f04fd6363c9f7b4eeea` (its `lzc` and `cf_math_pkg`), both Solderpad 0.51.

**Modification notice (Apache-2.0 §4(b)).** Each file is a flattened netlist produced by Yosys
0.69 with the yosys-slang front end; the logic is unmodified. Per top module:

```
read_slang --single-unit --libraries-inherit-macros --ignore-assertions \
  -DVLEN_128 -DZVE32F_ON -DZVT_ON -G NUM_PIPE_REGS=3 -G PIPE_CONFIG=fpnew_pkg::DISTRIBUTED \
  -G REMV_PIPE_BUBBLE=1 <coralnpu rvv include files, fpnew_pkg.sv, cf_math_pkg.sv, rvv/common,
  rvv/design and Zvt/fp_*.sv sources> --top <module>
hierarchy -top <module>; proc; flatten -noscopeinfo
write_verilog -noattr <module>_flat.v
```

The parameter values are the ones `zvt_pe_block.sv` uses. Licence texts are in `licenses/`.
