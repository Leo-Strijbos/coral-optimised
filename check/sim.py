# Copyright (c) 2026 Leo Strijbos and Tom de Vrieze. Provided to Rebellions for evaluation only; not for redistribution.
"""Minimal Verilator driver: build a module once, apply one input vector per clock cycle, read
the outputs after every rising edge. Standard library only; needs `verilator` on PATH."""
import os
import pathlib
import subprocess

HERE = pathlib.Path(__file__).resolve().parent
BUILD = HERE / "build"


def _ctype(width):
    return "unsigned long long" if width > 32 else "unsigned int"


class Sim:
    def __init__(self, top, sources, inputs, outputs):
        """top: module name; sources: Verilog files; inputs/outputs: [(port, width)] (no clk)."""
        self.top, self.inputs, self.outputs = top, inputs, outputs
        self.dir = BUILD / top
        self.dir.mkdir(parents=True, exist_ok=True)
        reads = " ".join(f'{{ unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.{p} = ({_ctype(w)})v; }}'
                         for p, w in inputs)
        prints = ' printf(" ");'.join(f' printf("%llx", (unsigned long long)m.{p});' for p, _ in outputs)
        tb = f"""#include "V{top}.h"
#include <cstdio>
int main(int argc, char** argv) {{
  V{top} m; FILE* f = fopen(argv[1], "r");
  m.clk = 0; m.eval();
  while (true) {{
    {reads}
    m.clk = 0; m.eval(); m.clk = 1; m.eval();
   {prints} printf("\\n");
  }}
}}
"""
        (self.dir / "tb.cpp").write_text(tb)
        exe = self.dir / "obj_dir" / "sim"
        stamp = self.dir / "sources.txt"
        key = "\n".join(str(pathlib.Path(s).resolve()) + " " + str(os.path.getmtime(s)) for s in sources) + tb
        if not exe.exists() or not stamp.exists() or stamp.read_text() != key:
            cmd = ["verilator", "--cc", "--exe", "--build", "-O2", "-Wno-fatal", "-Wno-lint", "-Wno-style",
                   "--top-module", top, "-o", "sim", "tb.cpp"] + [str(pathlib.Path(s).resolve()) for s in sources]
            r = subprocess.run(cmd, cwd=self.dir, capture_output=True, text=True)
            if r.returncode:
                raise RuntimeError(f"verilator failed for {top}:\n{r.stderr[-3000:]}")
            stamp.write_text(key)
        self.exe = exe

    def run(self, vectors):
        """vectors: list of dicts {port: int}. Returns one dict of outputs per cycle."""
        stim = self.dir / "stim.txt"
        stim.write_text("\n".join(" ".join(f"{v[p]:x}" for p, _ in self.inputs) for v in vectors) + "\n")
        out = subprocess.run([str(self.exe), str(stim)], capture_output=True, text=True, check=True).stdout.split("\n")
        rows = []
        for line in out[:len(vectors)]:
            vals = line.split()
            rows.append({p: int(x, 16) for (p, _), x in zip(self.outputs, vals)})
        return rows
