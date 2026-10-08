// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcoral_bf16_tile_add__pch.h"
#include "Vcoral_bf16_tile_add.h"
#include "Vcoral_bf16_tile_add___024root.h"

// FUNCTIONS
Vcoral_bf16_tile_add__Syms::~Vcoral_bf16_tile_add__Syms()
{
}

Vcoral_bf16_tile_add__Syms::Vcoral_bf16_tile_add__Syms(VerilatedContext* contextp, const char* namep, Vcoral_bf16_tile_add* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(209);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
