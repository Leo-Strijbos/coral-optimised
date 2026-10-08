// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VZVT_PE_ADDER_FP_LANE__SYMS_H_
#define VERILATED_VZVT_PE_ADDER_FP_LANE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vzvt_pe_adder_fp_lane.h"

// INCLUDE MODULE CLASSES
#include "Vzvt_pe_adder_fp_lane___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vzvt_pe_adder_fp_lane__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vzvt_pe_adder_fp_lane* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vzvt_pe_adder_fp_lane___024root TOP;

    // CONSTRUCTORS
    Vzvt_pe_adder_fp_lane__Syms(VerilatedContext* contextp, const char* namep, Vzvt_pe_adder_fp_lane* modelp);
    ~Vzvt_pe_adder_fp_lane__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
