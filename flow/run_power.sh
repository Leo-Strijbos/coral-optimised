#!/usr/bin/env bash
# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
#
# run_power.sh -- activity-based power of a design laid out by run_layout.sh; prints one JSON line.
#
# Usage: flow/run_power.sh <top> [seed]         (seed of the layout run, default 42)
#
#   1. a testbench drives the routed netlist (6_final.v) with flow/vectors/<top>.txt, one input
#      vector per clock cycle (2,000 cycles, after 8 warm-up cycles), and dumps a VCD;
#   2. Icarus Verilog simulates it with the ASAP7 cell models from the ORFS image (zero delay);
#   3. OpenROAD loads the routed design and its parasitics (6_final.spef), reads the VCD and
#      reports power.
# Environment: WORK (default flow/work), ORFS_IMAGE (default: the pinned image).
# Needs: docker, python3, iverilog + vvp on PATH (Icarus Verilog 11 or newer).
set -euo pipefail
HERE=$(cd "$(dirname "$0")" && pwd)
TOP=${1:?usage: run_power.sh <top> [seed]}
SEED=${2:-42}
CLK_PS=2500
WARM=8
WORK=$(cd "${WORK:-$HERE/work}" && pwd)
IMAGE=${ORFS_IMAGE:-openroad/orfs@sha256:73d4aed887dc0552b2c8ad0581e10821ad4f9cf290a2436e54fb5c47ca132120}
VARIANT="p${CLK_PS}_s${SEED}"
DKEY="${TOP}__${VARIANT}"
RES="$WORK/results/asap7/$TOP/$VARIANT"
PW="$WORK/power/$TOP/$VARIANT"
MODELS="$WORK/power/cellmodels"
VEC="$HERE/vectors/$TOP"
for f in 6_final.v 6_final.odb 6_final.sdc 6_final.spef; do
  [ -f "$RES/$f" ] || { echo "missing $RES/$f: run run_layout.sh $TOP $SEED first" >&2; exit 1; }
done
command -v iverilog >/dev/null || { echo "iverilog not found on PATH" >&2; exit 1; }
if [ ! -f "$MODELS/asap7sc7p5t_SEQ_RVT_TT_220101.v" ]; then
  mkdir -p "$WORK/power"
  docker run --rm -u "$(id -u):$(id -g)" -v "$WORK:/work" "$IMAGE" \
    cp -r /OpenROAD-flow-scripts/flow/platforms/asap7/verilog/stdcell /work/power/cellmodels
fi
mkdir -p "$PW"

# ---- 1. testbench
python3 - "$TOP" "$CLK_PS" "$VEC" "$RES/6_final.v" "$PW" "$WARM" <<'PY'
import json, re, sys
top, clk, vecbase, netlist, pw, warm = sys.argv[1:]
clk, warm = int(clk), int(warm)
ports = [(n, int(w)) for n, w in json.load(open(vecbase + ".json"))["ports"]]
cycles = sum(1 for l in open(vecbase + ".txt") if l.strip())
src = open(netlist).read()
body = src[src.index("module " + top):]
outs = re.findall(r"output\s+(?:\[(\d+):0\]\s+)?(\w+)", body[:body.index("wire")])
outs = [(n, int(w) + 1 if w else 1) for w, n in outs]
NP = len(ports)
# the stimulus file holds one line of NP hex words per cycle; flatten it to one word per line
words = [w for l in open(vecbase + ".txt") if l.strip() for w in l.split()]
open(pw + "/stim.hex", "w").write("\n".join(words) + "\n")
decl = "\n".join(f"  reg  [{w-1}:0] {n};" for n, w in ports) + "\n" + "\n".join(f"  wire [{w-1}:0] {n};" for n, w in outs)
conn = ", ".join([".clk(clk)"] + [f".{n}({n})" for n, _ in ports] + [f".{n}({n})" for n, _ in outs])
apply = "\n".join(f"      {n} = vec[k*{NP}+{i}][{w-1}:0];" for i, (n, w) in enumerate(ports))
tb = f"""`timescale 1ps/1ps
module tb;
  localparam integer P = {clk};
  reg clk = 1'b0;
{decl}
  reg [31:0] vec [0:{cycles*NP-1}];
  {top} dut({conn});
  always #(P/2) clk = ~clk;
  task apply(input integer k);
    begin
{apply}
    end
  endtask
  integer i;
  initial begin
    $readmemh("{pw}/stim.hex", vec);
    apply(0);
    #({warm}*P);
    $dumpfile("{pw}/dut.vcd");
    $dumpvars(2, dut);
    for (i = 1; i < {cycles}; i = i + 1) begin
      #(P); apply(i);
    end
    #(P);
    $finish;
  end
endmodule
"""
open(pw + "/tb.v", "w").write(tb)
open(pw + "/cycles.txt", "w").write(str(cycles))
PY

# ---- 2. gate-level simulation
iverilog -g2012 -s tb -o "$PW/sim.vvp" "$PW/tb.v" "$RES/6_final.v" \
  "$MODELS"/asap7sc7p5t_AO_RVT_TT_*.v "$MODELS"/asap7sc7p5t_INVBUF_RVT_TT_*.v \
  "$MODELS"/asap7sc7p5t_OA_RVT_TT_*.v "$MODELS"/asap7sc7p5t_SEQ_RVT_TT_*.v \
  "$MODELS"/asap7sc7p5t_SIMPLE_RVT_TT_*.v > "$PW/iverilog.log" 2>&1 || { tail -20 "$PW/iverilog.log" >&2; exit 1; }
rm -f "$PW/dut.vcd"
vvp -n "$PW/sim.vvp" > "$PW/vvp.log" 2>&1 || { tail -20 "$PW/vvp.log" >&2; exit 1; }

# ---- 3. OpenROAD power from the VCD
cat > "$PW/power.tcl" <<TCL
source \$::env(SCRIPTS_DIR)/load.tcl
load_design 6_final.odb 6_final.sdc
read_spef \$::env(RESULTS_DIR)/6_final.spef
read_vcd -scope tb/dut /work/power/$TOP/$VARIANT/dut.vcd
report_activity_annotation > /work/power/$TOP/$VARIANT/annotation.txt
report_power > /work/power/$TOP/$VARIANT/power_vcd.txt
exit
TCL
docker run --rm -u "$(id -u):$(id -g)" -e HOME=/tmp \
  -e FLOW_HOME=/OpenROAD-flow-scripts/flow/ -e WORK_HOME=/work \
  -e YOSYS_EXE=/OpenROAD-flow-scripts/tools/install/yosys/bin/yosys \
  -e OPENROAD_EXE=/OpenROAD-flow-scripts/tools/install/OpenROAD/bin/openroad \
  -v "$WORK:/work" "$IMAGE" \
  bash -c "cd /OpenROAD-flow-scripts/flow && . ../env.sh >/dev/null && make DESIGN_CONFIG=/work/designs/$DKEY/config.mk FLOW_VARIANT=$VARIANT RUN_SCRIPT=/work/power/$TOP/$VARIANT/power.tcl RUN_LOG_NAME_STEM=power run" \
  > "$PW/openroad.log" 2>&1 || { tail -30 "$PW/openroad.log" >&2; exit 1; }
rm -f "$PW/dut.vcd" "$PW/sim.vvp"

python3 - "$PW" "$TOP" "$SEED" <<'PY'
import json, re, sys
pw, top, seed = sys.argv[1:]
txt = open(pw + "/power_vcd.txt").read()
m = re.search(r"^Total\s+([-\d.e+]+)\s+([-\d.e+]+)\s+([-\d.e+]+)\s+([-\d.e+]+)", txt, re.M)
tot = float(m.group(4)) * 1e3
print(json.dumps({"top": top, "seed": int(seed), "power_mW": round(tot, 5),
                  "cycles": int(open(pw + "/cycles.txt").read()), "status": "ok"}, separators=(",", ":")))
PY
