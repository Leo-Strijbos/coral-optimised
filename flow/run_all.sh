#!/usr/bin/env bash
# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
#
# run_all.sh -- lay out the three modules at three seeds, measure power at seed 42, and print
# the per-product comparison. Results go to flow/out/*.jsonl.
# Environment: JOBS (layouts in parallel, default 3), plus run_layout.sh's WORK/CORES/ORFS_IMAGE.
set -uo pipefail
HERE=$(cd "$(dirname "$0")" && pwd)
OUT="$HERE/out"; mkdir -p "$OUT"
JOBS=${JOBS:-3}
TOPS="coral_bf16_pair coral_bf16_tile_add bf16_block16"
: > "$OUT/layout.jsonl"; : > "$OUT/power.jsonl"
for seed in 42 7 123; do
  for top in $TOPS; do
    ( bash "$HERE/run_layout.sh" "$top" "$seed" >> "$OUT/layout.jsonl" 2>> "$OUT/layout.log" ) &
    while [ "$(jobs -r | wc -l)" -ge "$JOBS" ]; do sleep 5; done
  done
done
wait
for top in $TOPS; do
  bash "$HERE/run_power.sh" "$top" 42 >> "$OUT/power.jsonl" 2>> "$OUT/power.log" &
done
wait
python3 "$HERE/summarise.py" "$OUT"
