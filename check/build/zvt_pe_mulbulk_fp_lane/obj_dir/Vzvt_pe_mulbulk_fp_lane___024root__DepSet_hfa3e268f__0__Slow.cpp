// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzvt_pe_mulbulk_fp_lane.h for the primary calling header

#include "Vzvt_pe_mulbulk_fp_lane__pch.h"
#include "Vzvt_pe_mulbulk_fp_lane__Syms.h"
#include "Vzvt_pe_mulbulk_fp_lane___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__stl(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__stl(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__stl\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus__0)));
    vlSelfRef.__VstlTriggered.setBit(2U, (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0129_ 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0129___0));
    vlSelfRef.__VstlTriggered.setBit(3U, (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_ 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0127___0));
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus__0 
        = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus;
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0129___0 
        = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0129_;
    vlSelfRef.__Vtrigprevexpr___TOP__zvt_pe_mulbulk_fp_lane__DOT___0127___0 
        = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
        vlSelfRef.__VstlTriggered.setBit(2U, 1U);
        vlSelfRef.__VstlTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
