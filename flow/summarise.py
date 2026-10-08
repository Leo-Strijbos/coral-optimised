# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
"""Per-product area and energy from flow/out/{layout,power}.jsonl, next to our measurements.

Per product: BEFORE = (pair + tile adder) / 2 (Coral's lane forms 2 products per cycle and adds
them to the tile through the adder); AFTER = block / 16. Energy per product = power x 2.5 ns /
products per cycle."""
import json
import pathlib
import statistics
import sys

out = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else pathlib.Path(__file__).parent / "out")
ours = json.load(open(pathlib.Path(__file__).resolve().parents[1] / "results" / "our_results.json"))


def rows(name):
    p = out / name
    return [json.loads(l) for l in open(p) if l.startswith("{")] if p.exists() else []


area, slack, power = {}, {}, {}
for d in rows("layout.jsonl"):
    if d.get("status") == "ok":
        area.setdefault(d["top"], []).append(d["area_um2"])
        slack.setdefault(d["top"], []).append(d["worst_slack_ps"])
for d in rows("power.jsonl"):
    if d.get("status") == "ok":
        power[d["top"]] = d["power_mW"]

T = 2.5e-9


def mean(top):
    return statistics.mean(area[top]) if top in area else None


print("module                 seeds  area um2 (mean)   min slack ps   power mW (seed 42)")
for top in ("coral_bf16_pair", "coral_bf16_tile_add", "bf16_block16"):
    a = mean(top)
    print(f"{top:22s} {len(area.get(top, [])):5d}  {a if a is None else round(a, 1)!s:>14}   "
          f"{min(slack[top]) if top in slack else None!s:>12}   {power.get(top)!s:>10}")
try:
    a_before = (mean("coral_bf16_pair") + mean("coral_bf16_tile_add")) / 2
    a_after = mean("bf16_block16") / 16
    e_before = (power["coral_bf16_pair"] + power["coral_bf16_tile_add"]) * 1e-3 * T / 2 * 1e12
    e_after = power["bf16_block16"] * 1e-3 * T / 16 * 1e12
except (TypeError, KeyError):
    sys.exit("incomplete results: check flow/out/*.log")
o = ours["per_product"]
print()
print("per product                 yours        ours")
print(f"BEFORE area   um2      {a_before:10.1f}  {o['before']['area_um2']:10.1f}")
print(f"AFTER  area   um2      {a_after:10.1f}  {o['after']['area_um2']:10.1f}")
print(f"area saving            {100 * (1 - a_after / a_before):9.1f}%  {100 * (1 - o['after']['area_um2'] / o['before']['area_um2']):9.1f}%")
print(f"BEFORE energy pJ       {e_before:10.3f}  {o['before']['energy_pJ']:10.3f}")
print(f"AFTER  energy pJ       {e_after:10.3f}  {o['after']['energy_pJ']:10.3f}")
print(f"energy saving          {100 * (1 - e_after / e_before):9.1f}%  {100 * (1 - o['after']['energy_pJ'] / o['before']['energy_pJ']):9.1f}%")
