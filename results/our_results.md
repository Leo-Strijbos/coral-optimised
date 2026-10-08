# Our measurements

ASAP7, OpenROAD-flow-scripts (image pinned by digest in `flow/run_layout.sh`), 2.5 ns clock (400 MHz), 40 % core utilisation. Area after place and route; power from simulating the routed netlist on `flow/vectors/` (seed 42 layout).

| module | seed | area µm² | worst slack ps | power mW |
|---|---|---|---|---|
| `coral_bf16_pair` | 42 | 362.1 | 113 | 0.421 |
| `coral_bf16_pair` | 7 | 362.1 | 112 |  |
| `coral_bf16_pair` | 123 | 363.0 | 135 |  |
| `coral_bf16_tile_add` | 42 | 350.5 | 71 | 0.377 |
| `coral_bf16_tile_add` | 7 | 349.5 | 67 |  |
| `coral_bf16_tile_add` | 123 | 350.0 | 71 |  |
| `bf16_block16` | 42 | 2224.5 | 93 | 3.24 |
| `bf16_block16` | 7 | 2221.6 | 86 |  |
| `bf16_block16` | 123 | 2224.4 | 77 |  |

| per product | area µm² | energy pJ | pipeline stages |
|---|---|---|---|
| BEFORE: (pair + tile adder) / 2 | 356.2 | 0.998 | 3 |
| AFTER: block / 16 | 139.0 | 0.506 | 5 |
| saving | 61 % | 49 % | |
