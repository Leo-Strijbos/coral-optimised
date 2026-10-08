#include "Vzvt_pe_mulbulk_fp_lane.h"
#include <cstdio>
int main(int argc, char** argv) {
  Vzvt_pe_mulbulk_fp_lane m; FILE* f = fopen(argv[1], "r");
  m.clk = 0; m.eval();
  while (true) {
    { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.rst_n = (unsigned int)v; } { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.reg_enable = (unsigned int)v; } { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.up_valid = (unsigned int)v; } { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.operands = (unsigned long long)v; } { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.rnd_mode = (unsigned int)v; } { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.mask = (unsigned int)v; } { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.src_fmt = (unsigned int)v; } { unsigned long long v; if (fscanf(f, "%llx", &v) != 1) return 0; m.dst_fmt = (unsigned int)v; }
    m.clk = 0; m.eval(); m.clk = 1; m.eval();
    printf("%llx", (unsigned long long)m.result); printf(" "); printf("%llx", (unsigned long long)m.down_valid); printf("\n");
  }
}
