// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoral_bf16_pair.h for the primary calling header

#include "Vcoral_bf16_pair__pch.h"
#include "Vcoral_bf16_pair__Syms.h"
#include "Vcoral_bf16_pair___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__stl(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcoral_bf16_pair___024root___eval_triggers__stl(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_triggers__stl\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcoral_bf16_pair___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
