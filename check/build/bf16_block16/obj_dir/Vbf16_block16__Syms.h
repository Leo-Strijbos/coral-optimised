// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBF16_BLOCK16__SYMS_H_
#define VERILATED_VBF16_BLOCK16__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbf16_block16.h"

// INCLUDE MODULE CLASSES
#include "Vbf16_block16___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbf16_block16__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbf16_block16* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbf16_block16___024root        TOP;

    // CONSTRUCTORS
    Vbf16_block16__Syms(VerilatedContext* contextp, const char* namep, Vbf16_block16* modelp);
    ~Vbf16_block16__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
