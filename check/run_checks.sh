#!/usr/bin/env bash
# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
# Functional checks A-D (see check/checks.py). Needs python3 (3.8+) and verilator (5.x) on PATH.
# Usage: check/run_checks.sh [--n VECTORS_PER_CLASS]      (default 20000; about a minute)
set -euo pipefail
cd "$(dirname "$0")"
command -v verilator >/dev/null || { echo "verilator not found on PATH" >&2; exit 1; }
python3 checks.py "$@"
