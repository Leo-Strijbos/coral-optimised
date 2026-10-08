// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORAL_BF16_TILE_ADD__SYMS_H_
#define VERILATED_VCORAL_BF16_TILE_ADD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcoral_bf16_tile_add.h"

// INCLUDE MODULE CLASSES
#include "Vcoral_bf16_tile_add___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcoral_bf16_tile_add__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcoral_bf16_tile_add* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcoral_bf16_tile_add___024root TOP;

    // CONSTRUCTORS
    Vcoral_bf16_tile_add__Syms(VerilatedContext* contextp, const char* namep, Vcoral_bf16_tile_add* modelp);
    ~Vcoral_bf16_tile_add__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
