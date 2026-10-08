// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoral_bf16_pair.h for the primary calling header

#include "Vcoral_bf16_pair__pch.h"
#include "Vcoral_bf16_pair__Syms.h"
#include "Vcoral_bf16_pair___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__ico(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG

void Vcoral_bf16_pair___024root___eval_triggers__ico(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_triggers__ico\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcoral_bf16_pair___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__act(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG

void Vcoral_bf16_pair___024root___eval_triggers__act(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_triggers__act\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcoral_bf16_pair___024root___dump_triggers__act(vlSelf);
    }
#endif
}
