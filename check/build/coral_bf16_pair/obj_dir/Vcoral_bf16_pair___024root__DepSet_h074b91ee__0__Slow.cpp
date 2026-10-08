// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoral_bf16_pair.h for the primary calling header

#include "Vcoral_bf16_pair__pch.h"
#include "Vcoral_bf16_pair___024root.h"

VL_ATTR_COLD void Vcoral_bf16_pair___024root___eval_static(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_static\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vcoral_bf16_pair___024root___eval_initial(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_initial\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcoral_bf16_pair___024root___eval_final(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_final\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__stl(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcoral_bf16_pair___024root___eval_phase__stl(Vcoral_bf16_pair___024root* vlSelf);

VL_ATTR_COLD void Vcoral_bf16_pair___024root___eval_settle(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_settle\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcoral_bf16_pair___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_pair.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcoral_bf16_pair___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__stl(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___dump_triggers__stl\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcoral_bf16_pair___024root___stl_sequent__TOP__0(Vcoral_bf16_pair___024root* vlSelf);

VL_ATTR_COLD void Vcoral_bf16_pair___024root___eval_stl(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_stl\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcoral_bf16_pair___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcoral_bf16_pair___024root___stl_sequent__TOP__0(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___stl_sequent__TOP__0\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ coral_bf16_pair__DOT__n17;
    coral_bf16_pair__DOT__n17 = 0;
    CData/*0:0*/ coral_bf16_pair__DOT__n22;
    coral_bf16_pair__DOT__n22 = 0;
    CData/*0:0*/ coral_bf16_pair__DOT__n42;
    coral_bf16_pair__DOT__n42 = 0;
    CData/*0:0*/ coral_bf16_pair__DOT__n46;
    coral_bf16_pair__DOT__n46 = 0;
    CData/*0:0*/ coral_bf16_pair__DOT__n52;
    coral_bf16_pair__DOT__n52 = 0;
    CData/*0:0*/ coral_bf16_pair__DOT__n59;
    coral_bf16_pair__DOT__n59 = 0;
    SData/*10:0*/ coral_bf16_pair__DOT__n121;
    coral_bf16_pair__DOT__n121 = 0;
    SData/*10:0*/ coral_bf16_pair__DOT__n134;
    coral_bf16_pair__DOT__n134 = 0;
    IData/*29:0*/ coral_bf16_pair__DOT__n151;
    coral_bf16_pair__DOT__n151 = 0;
    IData/*29:0*/ coral_bf16_pair__DOT__n159;
    coral_bf16_pair__DOT__n159 = 0;
    IData/*29:0*/ coral_bf16_pair__DOT__n167;
    coral_bf16_pair__DOT__n167 = 0;
    IData/*29:0*/ coral_bf16_pair__DOT__n175;
    coral_bf16_pair__DOT__n175 = 0;
    IData/*29:0*/ coral_bf16_pair__DOT__n183;
    coral_bf16_pair__DOT__n183 = 0;
    IData/*29:0*/ coral_bf16_pair__DOT__n190;
    coral_bf16_pair__DOT__n190 = 0;
    SData/*10:0*/ coral_bf16_pair__DOT__n198;
    coral_bf16_pair__DOT__n198 = 0;
    IData/*29:0*/ coral_bf16_pair__DOT__n209;
    coral_bf16_pair__DOT__n209 = 0;
    IData/*24:0*/ coral_bf16_pair__DOT__n217;
    coral_bf16_pair__DOT__n217 = 0;
    SData/*10:0*/ coral_bf16_pair__DOT__n223;
    coral_bf16_pair__DOT__n223 = 0;
    IData/*24:0*/ coral_bf16_pair__DOT__n227;
    coral_bf16_pair__DOT__n227 = 0;
    // Body
    vlSelfRef.coral_bf16_pair__DOT__n74 = (((0U != 
                                             (0xffU 
                                              & ((IData)(vlSelfRef.a0) 
                                                 >> 7U))) 
                                            << 7U) 
                                           | (0x7fU 
                                              & (IData)(vlSelfRef.a0)));
    vlSelfRef.coral_bf16_pair__DOT__n77 = (((0U != 
                                             (0xffU 
                                              & ((IData)(vlSelfRef.b0) 
                                                 >> 7U))) 
                                            << 7U) 
                                           | (0x7fU 
                                              & (IData)(vlSelfRef.b0)));
    vlSelfRef.coral_bf16_pair__DOT__n100 = (((0U != 
                                              (0xffU 
                                               & ((IData)(vlSelfRef.a1) 
                                                  >> 7U))) 
                                             << 7U) 
                                            | (0x7fU 
                                               & (IData)(vlSelfRef.a1)));
    vlSelfRef.coral_bf16_pair__DOT__n103 = (((0U != 
                                              (0xffU 
                                               & ((IData)(vlSelfRef.b1) 
                                                  >> 7U))) 
                                             << 7U) 
                                            | (0x7fU 
                                               & (IData)(vlSelfRef.b1)));
    vlSelfRef.coral_bf16_pair__DOT__n120 = (VL_LTS_III(11, (IData)(vlSelfRef.coral_bf16_pair__DOT__n98_q1), (IData)(vlSelfRef.coral_bf16_pair__DOT__n118_q1))
                                             ? (IData)(vlSelfRef.coral_bf16_pair__DOT__n118_q1)
                                             : (IData)(vlSelfRef.coral_bf16_pair__DOT__n98_q1));
    vlSelfRef.coral_bf16_pair__DOT__n55 = (1U & (((IData)(vlSelfRef.a0) 
                                                  ^ (IData)(vlSelfRef.b0)) 
                                                 >> 0xfU));
    vlSelfRef.coral_bf16_pair__DOT__n62 = (1U & (((IData)(vlSelfRef.a1) 
                                                  ^ (IData)(vlSelfRef.b1)) 
                                                 >> 0xfU));
    coral_bf16_pair__DOT__n17 = (IData)((0x7f80U == 
                                         (0x7fffU & (IData)(vlSelfRef.a0))));
    coral_bf16_pair__DOT__n22 = (IData)((0x7f80U == 
                                         (0x7fffU & (IData)(vlSelfRef.b0))));
    coral_bf16_pair__DOT__n42 = (IData)((0x7f80U == 
                                         (0x7fffU & (IData)(vlSelfRef.a1))));
    coral_bf16_pair__DOT__n46 = (IData)((0x7f80U == 
                                         (0x7fffU & (IData)(vlSelfRef.b1))));
    coral_bf16_pair__DOT__n151 = (0x3fffffffU & ((0x20000000U 
                                                  & vlSelfRef.coral_bf16_pair__DOT__n145_q1)
                                                  ? 
                                                 (- vlSelfRef.coral_bf16_pair__DOT__n145_q1)
                                                  : vlSelfRef.coral_bf16_pair__DOT__n145_q1));
    vlSelfRef.coral_bf16_pair__DOT__n79 = (0xffffU 
                                           & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n74) 
                                              * (IData)(vlSelfRef.coral_bf16_pair__DOT__n77)));
    vlSelfRef.coral_bf16_pair__DOT__n105 = (0xffffU 
                                            & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n100) 
                                               * (IData)(vlSelfRef.coral_bf16_pair__DOT__n103)));
    coral_bf16_pair__DOT__n121 = (0x7ffU & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n120) 
                                            - (IData)(vlSelfRef.coral_bf16_pair__DOT__n98_q1)));
    coral_bf16_pair__DOT__n134 = (0x7ffU & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n120) 
                                            - (IData)(vlSelfRef.coral_bf16_pair__DOT__n118_q1)));
    coral_bf16_pair__DOT__n52 = ((IData)(coral_bf16_pair__DOT__n17) 
                                 | (IData)(coral_bf16_pair__DOT__n22));
    coral_bf16_pair__DOT__n59 = ((IData)(coral_bf16_pair__DOT__n42) 
                                 | (IData)(coral_bf16_pair__DOT__n46));
    coral_bf16_pair__DOT__n159 = (0x3fffffffU & ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & (coral_bf16_pair__DOT__n151 
                                                      >> 0xeU)))
                                                  ? coral_bf16_pair__DOT__n151
                                                  : 
                                                 (coral_bf16_pair__DOT__n151 
                                                  << 0x10U)));
    vlSelfRef.coral_bf16_pair__DOT__n130 = (0x7ffffffU 
                                            & (VL_SHIFTR_III(27,27,11, 
                                                             ((IData)(vlSelfRef.coral_bf16_pair__DOT__n79_q1) 
                                                              << 0xbU), (IData)(coral_bf16_pair__DOT__n121)) 
                                               | (0U 
                                                  != 
                                                  ((~ 
                                                    VL_SHIFTL_III(27,27,11, (IData)(0x7ffffffU), (IData)(coral_bf16_pair__DOT__n121))) 
                                                   & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n79_q1) 
                                                      << 0xbU)))));
    vlSelfRef.coral_bf16_pair__DOT__n142 = (0x7ffffffU 
                                            & (VL_SHIFTR_III(27,27,11, 
                                                             ((IData)(vlSelfRef.coral_bf16_pair__DOT__n105_q1) 
                                                              << 0xbU), (IData)(coral_bf16_pair__DOT__n134)) 
                                               | (0U 
                                                  != 
                                                  ((~ 
                                                    VL_SHIFTL_III(27,27,11, (IData)(0x7ffffffU), (IData)(coral_bf16_pair__DOT__n134))) 
                                                   & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n105_q1) 
                                                      << 0xbU)))));
    vlSelfRef.coral_bf16_pair__DOT__n69 = (((IData)(coral_bf16_pair__DOT__n52) 
                                            & (IData)(vlSelfRef.coral_bf16_pair__DOT__n55)) 
                                           | ((IData)(coral_bf16_pair__DOT__n59) 
                                              & (IData)(vlSelfRef.coral_bf16_pair__DOT__n62)));
    vlSelfRef.coral_bf16_pair__DOT__n65 = (((~ (IData)(vlSelfRef.coral_bf16_pair__DOT__n55)) 
                                            & (IData)(coral_bf16_pair__DOT__n52)) 
                                           | ((~ (IData)(vlSelfRef.coral_bf16_pair__DOT__n62)) 
                                              & (IData)(coral_bf16_pair__DOT__n59)));
    coral_bf16_pair__DOT__n167 = (0x3fffffffU & ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (coral_bf16_pair__DOT__n159 
                                                      >> 0x16U)))
                                                  ? coral_bf16_pair__DOT__n159
                                                  : 
                                                 (coral_bf16_pair__DOT__n159 
                                                  << 8U)));
    vlSelfRef.coral_bf16_pair__DOT__n71 = ((IData)(
                                                   ((0x7f80U 
                                                     == 
                                                     (0x7f80U 
                                                      & (IData)(vlSelfRef.a0))) 
                                                    & (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.a0))))) 
                                           | ((IData)(
                                                      ((0x7f80U 
                                                        == 
                                                        (0x7f80U 
                                                         & (IData)(vlSelfRef.b0))) 
                                                       & (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.b0))))) 
                                              | ((((IData)(coral_bf16_pair__DOT__n17) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x7fffU 
                                                               & (IData)(vlSelfRef.b0))))) 
                                                  | ((IData)(coral_bf16_pair__DOT__n22) 
                                                     & (IData)(
                                                               (0U 
                                                                == 
                                                                (0x7fffU 
                                                                 & (IData)(vlSelfRef.a0)))))) 
                                                 | (((IData)(
                                                             ((0x7f80U 
                                                               == 
                                                               (0x7f80U 
                                                                & (IData)(vlSelfRef.a1))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelfRef.a1))))) 
                                                     | (IData)(
                                                               ((0x7f80U 
                                                                 == 
                                                                 (0x7f80U 
                                                                  & (IData)(vlSelfRef.b1))) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelfRef.b1)))))) 
                                                    | (((IData)(coral_bf16_pair__DOT__n42) 
                                                        & (IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x7fffU 
                                                                    & (IData)(vlSelfRef.b1))))) 
                                                       | (((IData)(coral_bf16_pair__DOT__n46) 
                                                           & (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0x7fffU 
                                                                       & (IData)(vlSelfRef.a1))))) 
                                                          | ((IData)(vlSelfRef.coral_bf16_pair__DOT__n65) 
                                                             & (IData)(vlSelfRef.coral_bf16_pair__DOT__n69))))))));
    coral_bf16_pair__DOT__n175 = (0x3fffffffU & ((0U 
                                                  != 
                                                  (0xfU 
                                                   & (coral_bf16_pair__DOT__n167 
                                                      >> 0x1aU)))
                                                  ? coral_bf16_pair__DOT__n167
                                                  : 
                                                 (coral_bf16_pair__DOT__n167 
                                                  << 4U)));
    coral_bf16_pair__DOT__n183 = (0x3fffffffU & ((0U 
                                                  != 
                                                  (3U 
                                                   & (coral_bf16_pair__DOT__n175 
                                                      >> 0x1cU)))
                                                  ? coral_bf16_pair__DOT__n175
                                                  : 
                                                 (coral_bf16_pair__DOT__n175 
                                                  << 2U)));
    coral_bf16_pair__DOT__n190 = (0x3fffffffU & ((0x20000000U 
                                                  & coral_bf16_pair__DOT__n183)
                                                  ? coral_bf16_pair__DOT__n183
                                                  : 
                                                 (coral_bf16_pair__DOT__n183 
                                                  << 1U)));
    coral_bf16_pair__DOT__n198 = (0x7ffU & ((IData)(4U) 
                                            + ((IData)(vlSelfRef.coral_bf16_pair__DOT__n120_q1) 
                                               - (0x3fU 
                                                  & (((0U 
                                                       != 
                                                       (0xffffU 
                                                        & (coral_bf16_pair__DOT__n151 
                                                           >> 0xeU)))
                                                       ? 0U
                                                       : 0x10U) 
                                                     + 
                                                     (((0U 
                                                        != 
                                                        (0xffU 
                                                         & (coral_bf16_pair__DOT__n159 
                                                            >> 0x16U)))
                                                        ? 0U
                                                        : 8U) 
                                                      + 
                                                      (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (coral_bf16_pair__DOT__n167 
                                                             >> 0x1aU)))
                                                         ? 0U
                                                         : 4U) 
                                                       + 
                                                       (((0U 
                                                          != 
                                                          (3U 
                                                           & (coral_bf16_pair__DOT__n175 
                                                              >> 0x1cU)))
                                                          ? 0U
                                                          : 2U) 
                                                        + 
                                                        (((0x20000000U 
                                                           & coral_bf16_pair__DOT__n183)
                                                           ? 0U
                                                           : 1U) 
                                                         + 
                                                         ((0x20000000U 
                                                           & coral_bf16_pair__DOT__n190)
                                                           ? 0U
                                                           : 1U))))))))));
    coral_bf16_pair__DOT__n209 = (0x3fffffffU & (VL_GTS_III(11, 0x782U, (IData)(coral_bf16_pair__DOT__n198))
                                                  ? 
                                                 (VL_SHIFTR_III(30,30,11, coral_bf16_pair__DOT__n190, 
                                                                (0x7ffU 
                                                                 & ((IData)(0x782U) 
                                                                    - (IData)(coral_bf16_pair__DOT__n198)))) 
                                                  | (0U 
                                                     != 
                                                     ((~ 
                                                       VL_SHIFTL_III(30,30,11, (IData)(0x3fffffffU), 
                                                                     (0x7ffU 
                                                                      & ((IData)(0x782U) 
                                                                         - (IData)(coral_bf16_pair__DOT__n198))))) 
                                                      & coral_bf16_pair__DOT__n190)))
                                                  : coral_bf16_pair__DOT__n190));
    coral_bf16_pair__DOT__n217 = ((0xffffffU & (coral_bf16_pair__DOT__n209 
                                                >> 6U)) 
                                  | (IData)((0U != 
                                             (0x3fU 
                                              & coral_bf16_pair__DOT__n209))));
    coral_bf16_pair__DOT__n227 = (0x1ffffffU & ((0x1000000U 
                                                 & coral_bf16_pair__DOT__n217)
                                                 ? 
                                                (coral_bf16_pair__DOT__n217 
                                                 >> 1U)
                                                 : coral_bf16_pair__DOT__n217));
    coral_bf16_pair__DOT__n223 = (0x7ffU & ((IData)(0x7fU) 
                                            + ((VL_GTS_III(11, 0x782U, (IData)(coral_bf16_pair__DOT__n198))
                                                 ? 0x782U
                                                 : (IData)(coral_bf16_pair__DOT__n198)) 
                                               + (1U 
                                                  & (coral_bf16_pair__DOT__n217 
                                                     >> 0x18U)))));
    vlSelfRef.y = ((IData)(vlSelfRef.coral_bf16_pair__DOT__n71_q2)
                    ? 0x7fc00000U : ((IData)(vlSelfRef.coral_bf16_pair__DOT__n65_q2)
                                      ? 0x7f800000U
                                      : ((IData)(vlSelfRef.coral_bf16_pair__DOT__n69_q2)
                                          ? 0xff800000U
                                          : ((0U == vlSelfRef.coral_bf16_pair__DOT__n145_q1)
                                              ? 0U : 
                                             ((0x80000000U 
                                               & (vlSelfRef.coral_bf16_pair__DOT__n145_q1 
                                                  << 2U)) 
                                              | (((VL_LTES_III(11, 0xffU, (IData)(coral_bf16_pair__DOT__n223))
                                                    ? 0xffU
                                                    : 
                                                   ((0x800000U 
                                                     & coral_bf16_pair__DOT__n227)
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(coral_bf16_pair__DOT__n223))
                                                     : 0U)) 
                                                  << 0x17U) 
                                                 | (VL_LTES_III(11, 0xffU, (IData)(coral_bf16_pair__DOT__n223))
                                                     ? 0U
                                                     : 
                                                    (0x7fffffU 
                                                     & coral_bf16_pair__DOT__n227))))))));
}

VL_ATTR_COLD void Vcoral_bf16_pair___024root___eval_triggers__stl(Vcoral_bf16_pair___024root* vlSelf);

VL_ATTR_COLD bool Vcoral_bf16_pair___024root___eval_phase__stl(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_phase__stl\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcoral_bf16_pair___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcoral_bf16_pair___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__ico(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___dump_triggers__ico\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__act(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___dump_triggers__act\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__nba(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___dump_triggers__nba\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcoral_bf16_pair___024root___ctor_var_reset(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___ctor_var_reset\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->a0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17342812819118991936ull);
    vlSelf->a1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17885462169741112028ull);
    vlSelf->b0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15891990269507976644ull);
    vlSelf->b1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16050357274486017748ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11123243248953317070ull);
    vlSelf->coral_bf16_pair__DOT__n55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3204552052474386836ull);
    vlSelf->coral_bf16_pair__DOT__n62 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14131784669783756057ull);
    vlSelf->coral_bf16_pair__DOT__n65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15061910397314545671ull);
    vlSelf->coral_bf16_pair__DOT__n69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11413525754000085427ull);
    vlSelf->coral_bf16_pair__DOT__n71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11395858133145665021ull);
    vlSelf->coral_bf16_pair__DOT__n74 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11355712754332052130ull);
    vlSelf->coral_bf16_pair__DOT__n77 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11917976345984439338ull);
    vlSelf->coral_bf16_pair__DOT__n79 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8175529982126738677ull);
    vlSelf->coral_bf16_pair__DOT__n79_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1597999082615468516ull);
    vlSelf->coral_bf16_pair__DOT__n100 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7666092416953124061ull);
    vlSelf->coral_bf16_pair__DOT__n103 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4421020415082617885ull);
    vlSelf->coral_bf16_pair__DOT__n105 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7371093543714431643ull);
    vlSelf->coral_bf16_pair__DOT__n98_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11240648974168300235ull);
    vlSelf->coral_bf16_pair__DOT__n118_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11774115601609240794ull);
    vlSelf->coral_bf16_pair__DOT__n120 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6944659034772851066ull);
    vlSelf->coral_bf16_pair__DOT__n130 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 10083528349736484936ull);
    vlSelf->coral_bf16_pair__DOT__n55_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11083898457142382474ull);
    vlSelf->coral_bf16_pair__DOT__n105_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11271202619935668624ull);
    vlSelf->coral_bf16_pair__DOT__n142 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 15406569858289197289ull);
    vlSelf->coral_bf16_pair__DOT__n62_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12962132564663683072ull);
    vlSelf->coral_bf16_pair__DOT__n145_q1 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 16294199218137401857ull);
    vlSelf->coral_bf16_pair__DOT__n120_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1993235369482927984ull);
    vlSelf->coral_bf16_pair__DOT__n69_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16812811624562011336ull);
    vlSelf->coral_bf16_pair__DOT__n69_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11138818138257458357ull);
    vlSelf->coral_bf16_pair__DOT__n65_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6938637881006927453ull);
    vlSelf->coral_bf16_pair__DOT__n65_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9362169426114906638ull);
    vlSelf->coral_bf16_pair__DOT__n71_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10278896464810529543ull);
    vlSelf->coral_bf16_pair__DOT__n71_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 579376271521147241ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
}
