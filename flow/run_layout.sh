#!/usr/bin/env bash
# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
#
# run_layout.sh -- place and route one design with OpenROAD-flow-scripts (ASAP7) in Docker and
# print one JSON line with area, worst slack and cell count.
#
# Usage: flow/run_layout.sh <top> [seed]        (seed default 42; we used 42, 7 and 123)
#   <top>: coral_bf16_pair | coral_bf16_tile_add | bf16_block16
# Environment: WORK (default flow/work), CORES (default 4), ORFS_IMAGE (default: the pinned image).
# Needs: an x86-64 host with docker and python3.
set -euo pipefail
HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(cd "$HERE/.." && pwd)
TOP=${1:?usage: run_layout.sh <top> [seed]}
SEED=${2:-42}
CLK_PS=2500                     # 400 MHz
UTIL=40                         # CORE_UTILIZATION, percent
WORK=${WORK:-$HERE/work}
CORES=${CORES:-4}
IMAGE=${ORFS_IMAGE:-openroad/orfs@sha256:73d4aed887dc0552b2c8ad0581e10821ad4f9cf290a2436e54fb5c47ca132120}
case "$TOP" in
  coral_bf16_pair|coral_bf16_tile_add) SRC="$ROOT/rtl/before/$TOP.v";;
  bf16_block16) SRC="$ROOT/rtl/after/$TOP.v";;
  *) echo "unknown top $TOP" >&2; exit 2;;
esac
VARIANT="p${CLK_PS}_s${SEED}"
DKEY="${TOP}__${VARIANT}"
mkdir -p "$WORK/designs/$DKEY" "$WORK/logs/asap7/$TOP/$VARIANT"
WORK=$(cd "$WORK" && pwd)
DDIR="$WORK/designs/$DKEY"
cp "$SRC" "$DDIR/$TOP.v"

cat > "$DDIR/config.mk" <<CFG
export PLATFORM          = asap7
export DESIGN_NAME       = $TOP
export DESIGN_NICKNAME   = $TOP
export VERILOG_FILES     = /work/designs/$DKEY/$TOP.v
export SDC_FILE          = /work/designs/$DKEY/constraint.sdc
export CORE_UTILIZATION  = $UTIL
export CORE_ASPECT_RATIO = 1
export CORE_MARGIN       = 2
# PLACE_DENSITY: the platform default
export CORNER            = TC
export SYNTH_USE_SYN     = 0
export NUM_CORES         = $CORES
export GPL_RANDOM_SEED   = $SEED
export GRT_SEED          = $SEED
export OR_SEED           = $SEED
CFG

cat > "$DDIR/constraint.sdc" <<SDC
current_design $TOP
set clk_name  core_clock
set clk_port_name clk
set clk_period $CLK_PS
set clk_io_pct 0.2
set clk_port [get_ports \$clk_port_name]
create_clock -name \$clk_name -period \$clk_period \$clk_port
set non_clock_inputs [all_inputs -no_clocks]
set_input_delay  [expr \$clk_period * \$clk_io_pct] -clock \$clk_name \$non_clock_inputs
set_output_delay [expr \$clk_period * \$clk_io_pct] -clock \$clk_name [all_outputs]
SDC

LOGDIR="$WORK/logs/asap7/$TOP/$VARIANT"
MAKE="make DESIGN_CONFIG=/work/designs/$DKEY/config.mk FLOW_VARIANT=$VARIANT"
echo "[run_layout] $TOP seed=$SEED clock=${CLK_PS}ps image=$IMAGE" >&2
T0=$(date +%s)
set +e
docker run --rm -i -u "$(id -u):$(id -g)" -e HOME=/tmp \
  -e FLOW_HOME=/OpenROAD-flow-scripts/flow/ -e WORK_HOME=/work \
  -e YOSYS_EXE=/OpenROAD-flow-scripts/tools/install/yosys/bin/yosys \
  -e OPENROAD_EXE=/OpenROAD-flow-scripts/tools/install/OpenROAD/bin/openroad \
  -e KLAYOUT_CMD=/usr/bin/klayout \
  -v "$WORK:/work" "$IMAGE" \
  bash -c "cd /OpenROAD-flow-scripts/flow && . ../env.sh >/dev/null && $MAKE" > "$LOGDIR/flow_stdout.log" 2>&1
RC=$?
set -e
T1=$(date +%s)
if [ $RC -ne 0 ]; then
  echo "[run_layout] flow failed (rc=$RC); see $LOGDIR/flow_stdout.log" >&2
  tail -20 "$LOGDIR/flow_stdout.log" >&2
  echo "{\"top\":\"$TOP\",\"seed\":$SEED,\"status\":\"failed\"}"
  exit 1
fi
python3 - "$LOGDIR/6_report.json" "$TOP" "$SEED" "$CLK_PS" "$((T1-T0))" <<'PY'
import json, sys
path, top, seed, clk, rt = sys.argv[1:]
r = json.load(open(path))
def g(*ks):
    for k in ks:
        if k in r:
            return r[k]
print(json.dumps({"top": top, "seed": int(seed), "clock_period_ps": float(clk),
                  "area_um2": g("finish__design__instance__area__stdcell", "finish__design__instance__area"),
                  "worst_slack_ps": g("finish__timing__setup__ws"),
                  "cells": g("finish__design__instance__count__stdcell", "finish__design__instance__count"),
                  "runtime_s": int(rt), "status": "ok"}, separators=(",", ":")))
PY
