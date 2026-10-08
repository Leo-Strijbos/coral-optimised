// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vzvt_pe_mulbulk_fp_lane__pch.h"
#include "Vzvt_pe_mulbulk_fp_lane.h"
#include "Vzvt_pe_mulbulk_fp_lane___024root.h"

// FUNCTIONS
Vzvt_pe_mulbulk_fp_lane__Syms::~Vzvt_pe_mulbulk_fp_lane__Syms()
{
}

Vzvt_pe_mulbulk_fp_lane__Syms::Vzvt_pe_mulbulk_fp_lane__Syms(VerilatedContext* contextp, const char* namep, Vzvt_pe_mulbulk_fp_lane* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1743);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
