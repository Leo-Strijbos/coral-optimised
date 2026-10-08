// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcoral_bf16_pair.h for the primary calling header

#ifndef VERILATED_VCORAL_BF16_PAIR___024ROOT_H_
#define VERILATED_VCORAL_BF16_PAIR___024ROOT_H_  // guard

#include "verilated.h"


class Vcoral_bf16_pair__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcoral_bf16_pair___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ coral_bf16_pair__DOT__n55;
    CData/*0:0*/ coral_bf16_pair__DOT__n62;
    CData/*0:0*/ coral_bf16_pair__DOT__n65;
    CData/*0:0*/ coral_bf16_pair__DOT__n69;
    CData/*0:0*/ coral_bf16_pair__DOT__n71;
    CData/*7:0*/ coral_bf16_pair__DOT__n74;
    CData/*7:0*/ coral_bf16_pair__DOT__n77;
    CData/*7:0*/ coral_bf16_pair__DOT__n100;
    CData/*7:0*/ coral_bf16_pair__DOT__n103;
    CData/*0:0*/ coral_bf16_pair__DOT__n55_q1;
    CData/*0:0*/ coral_bf16_pair__DOT__n62_q1;
    CData/*0:0*/ coral_bf16_pair__DOT__n69_q1;
    CData/*0:0*/ coral_bf16_pair__DOT__n69_q2;
    CData/*0:0*/ coral_bf16_pair__DOT__n65_q1;
    CData/*0:0*/ coral_bf16_pair__DOT__n65_q2;
    CData/*0:0*/ coral_bf16_pair__DOT__n71_q1;
    CData/*0:0*/ coral_bf16_pair__DOT__n71_q2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(a0,15,0);
    VL_IN16(a1,15,0);
    VL_IN16(b0,15,0);
    VL_IN16(b1,15,0);
    SData/*15:0*/ coral_bf16_pair__DOT__n79;
    SData/*15:0*/ coral_bf16_pair__DOT__n79_q1;
    SData/*15:0*/ coral_bf16_pair__DOT__n105;
    SData/*10:0*/ coral_bf16_pair__DOT__n98_q1;
    SData/*10:0*/ coral_bf16_pair__DOT__n118_q1;
    SData/*10:0*/ coral_bf16_pair__DOT__n120;
    SData/*15:0*/ coral_bf16_pair__DOT__n105_q1;
    SData/*10:0*/ coral_bf16_pair__DOT__n120_q1;
    VL_OUT(y,31,0);
    IData/*29:0*/ coral_bf16_pair__DOT__n130;
    IData/*29:0*/ coral_bf16_pair__DOT__n142;
    IData/*29:0*/ coral_bf16_pair__DOT__n145_q1;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcoral_bf16_pair__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcoral_bf16_pair___024root(Vcoral_bf16_pair__Syms* symsp, const char* v__name);
    ~Vcoral_bf16_pair___024root();
    VL_UNCOPYABLE(Vcoral_bf16_pair___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
