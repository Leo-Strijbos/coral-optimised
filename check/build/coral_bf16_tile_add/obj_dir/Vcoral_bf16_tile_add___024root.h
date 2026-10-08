// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcoral_bf16_tile_add.h for the primary calling header

#ifndef VERILATED_VCORAL_BF16_TILE_ADD___024ROOT_H_
#define VERILATED_VCORAL_BF16_TILE_ADD___024ROOT_H_  // guard

#include "verilated.h"


class Vcoral_bf16_tile_add__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcoral_bf16_tile_add___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ coral_bf16_tile_add__DOT__n26;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n30;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n18_q1;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n23_q1;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n30_q1;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n30_q2;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n26_q1;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n26_q2;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n32_q1;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n32_q2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ coral_bf16_tile_add__DOT__n49_q1;
    SData/*10:0*/ coral_bf16_tile_add__DOT__n57_q1;
    SData/*10:0*/ coral_bf16_tile_add__DOT__n59;
    SData/*10:0*/ coral_bf16_tile_add__DOT__n59_q1;
    VL_IN(x0,31,0);
    VL_IN(x1,31,0);
    VL_OUT(y,31,0);
    IData/*23:0*/ coral_bf16_tile_add__DOT__n37;
    IData/*23:0*/ coral_bf16_tile_add__DOT__n37_q1;
    IData/*23:0*/ coral_bf16_tile_add__DOT__n52;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n69;
    IData/*23:0*/ coral_bf16_tile_add__DOT__n52_q1;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n82;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n85_q1;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcoral_bf16_tile_add__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcoral_bf16_tile_add___024root(Vcoral_bf16_tile_add__Syms* symsp, const char* v__name);
    ~Vcoral_bf16_tile_add___024root();
    VL_UNCOPYABLE(Vcoral_bf16_tile_add___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
