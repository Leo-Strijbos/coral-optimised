// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoral_bf16_pair.h for the primary calling header

#include "Vcoral_bf16_pair__pch.h"
#include "Vcoral_bf16_pair___024root.h"

void Vcoral_bf16_pair___024root___ico_sequent__TOP__0(Vcoral_bf16_pair___024root* vlSelf);

void Vcoral_bf16_pair___024root___eval_ico(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_ico\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcoral_bf16_pair___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcoral_bf16_pair___024root___ico_sequent__TOP__0(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.coral_bf16_pair__DOT__n79 = (0xffffU 
                                           & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n74) 
                                              * (IData)(vlSelfRef.coral_bf16_pair__DOT__n77)));
    vlSelfRef.coral_bf16_pair__DOT__n105 = (0xffffU 
                                            & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n100) 
                                               * (IData)(vlSelfRef.coral_bf16_pair__DOT__n103)));
    coral_bf16_pair__DOT__n52 = ((IData)(coral_bf16_pair__DOT__n17) 
                                 | (IData)(coral_bf16_pair__DOT__n22));
    coral_bf16_pair__DOT__n59 = ((IData)(coral_bf16_pair__DOT__n42) 
                                 | (IData)(coral_bf16_pair__DOT__n46));
    vlSelfRef.coral_bf16_pair__DOT__n69 = (((IData)(coral_bf16_pair__DOT__n52) 
                                            & (IData)(vlSelfRef.coral_bf16_pair__DOT__n55)) 
                                           | ((IData)(coral_bf16_pair__DOT__n59) 
                                              & (IData)(vlSelfRef.coral_bf16_pair__DOT__n62)));
    vlSelfRef.coral_bf16_pair__DOT__n65 = (((~ (IData)(vlSelfRef.coral_bf16_pair__DOT__n55)) 
                                            & (IData)(coral_bf16_pair__DOT__n52)) 
                                           | ((~ (IData)(vlSelfRef.coral_bf16_pair__DOT__n62)) 
                                              & (IData)(coral_bf16_pair__DOT__n59)));
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
}

void Vcoral_bf16_pair___024root___eval_triggers__ico(Vcoral_bf16_pair___024root* vlSelf);

bool Vcoral_bf16_pair___024root___eval_phase__ico(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_phase__ico\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcoral_bf16_pair___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcoral_bf16_pair___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcoral_bf16_pair___024root___eval_act(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_act\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcoral_bf16_pair___024root___nba_sequent__TOP__0(Vcoral_bf16_pair___024root* vlSelf);

void Vcoral_bf16_pair___024root___eval_nba(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_nba\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcoral_bf16_pair___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcoral_bf16_pair___024root___nba_sequent__TOP__0(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___nba_sequent__TOP__0\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    vlSelfRef.coral_bf16_pair__DOT__n79_q1 = vlSelfRef.coral_bf16_pair__DOT__n79;
    vlSelfRef.coral_bf16_pair__DOT__n105_q1 = vlSelfRef.coral_bf16_pair__DOT__n105;
    vlSelfRef.coral_bf16_pair__DOT__n71_q2 = vlSelfRef.coral_bf16_pair__DOT__n71_q1;
    vlSelfRef.coral_bf16_pair__DOT__n69_q2 = vlSelfRef.coral_bf16_pair__DOT__n69_q1;
    vlSelfRef.coral_bf16_pair__DOT__n65_q2 = vlSelfRef.coral_bf16_pair__DOT__n65_q1;
    vlSelfRef.coral_bf16_pair__DOT__n98_q1 = ((0U == (IData)(vlSelfRef.coral_bf16_pair__DOT__n79))
                                               ? 0x702U
                                               : (0x7ffU 
                                                  & (((0U 
                                                       == (IData)(vlSelfRef.coral_bf16_pair__DOT__n74))
                                                       ? 0x702U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelfRef.a0) 
                                                            >> 7U)))
                                                        ? 0x782U
                                                        : 
                                                       ((0xffU 
                                                         & ((IData)(vlSelfRef.a0) 
                                                            >> 7U)) 
                                                        - (IData)(0x7fU)))) 
                                                     + 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.coral_bf16_pair__DOT__n77))
                                                       ? 0x702U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelfRef.b0) 
                                                            >> 7U)))
                                                        ? 0x782U
                                                        : 
                                                       ((0xffU 
                                                         & ((IData)(vlSelfRef.b0) 
                                                            >> 7U)) 
                                                        - (IData)(0x7fU)))))));
    vlSelfRef.coral_bf16_pair__DOT__n118_q1 = ((0U 
                                                == (IData)(vlSelfRef.coral_bf16_pair__DOT__n105))
                                                ? 0x702U
                                                : (0x7ffU 
                                                   & (((0U 
                                                        == (IData)(vlSelfRef.coral_bf16_pair__DOT__n100))
                                                        ? 0x702U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlSelfRef.a1) 
                                                             >> 7U)))
                                                         ? 0x782U
                                                         : 
                                                        ((0xffU 
                                                          & ((IData)(vlSelfRef.a1) 
                                                             >> 7U)) 
                                                         - (IData)(0x7fU)))) 
                                                      + 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.coral_bf16_pair__DOT__n103))
                                                        ? 0x702U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlSelfRef.b1) 
                                                             >> 7U)))
                                                         ? 0x782U
                                                         : 
                                                        ((0xffU 
                                                          & ((IData)(vlSelfRef.b1) 
                                                             >> 7U)) 
                                                         - (IData)(0x7fU)))))));
    vlSelfRef.coral_bf16_pair__DOT__n120_q1 = vlSelfRef.coral_bf16_pair__DOT__n120;
    vlSelfRef.coral_bf16_pair__DOT__n145_q1 = (0x3fffffffU 
                                               & (((IData)(vlSelfRef.coral_bf16_pair__DOT__n55_q1)
                                                    ? 
                                                   (- vlSelfRef.coral_bf16_pair__DOT__n130)
                                                    : vlSelfRef.coral_bf16_pair__DOT__n130) 
                                                  + 
                                                  ((IData)(vlSelfRef.coral_bf16_pair__DOT__n62_q1)
                                                    ? 
                                                   (- vlSelfRef.coral_bf16_pair__DOT__n142)
                                                    : vlSelfRef.coral_bf16_pair__DOT__n142)));
    vlSelfRef.coral_bf16_pair__DOT__n71_q1 = vlSelfRef.coral_bf16_pair__DOT__n71;
    vlSelfRef.coral_bf16_pair__DOT__n69_q1 = vlSelfRef.coral_bf16_pair__DOT__n69;
    vlSelfRef.coral_bf16_pair__DOT__n65_q1 = vlSelfRef.coral_bf16_pair__DOT__n65;
    vlSelfRef.coral_bf16_pair__DOT__n120 = (VL_LTS_III(11, (IData)(vlSelfRef.coral_bf16_pair__DOT__n98_q1), (IData)(vlSelfRef.coral_bf16_pair__DOT__n118_q1))
                                             ? (IData)(vlSelfRef.coral_bf16_pair__DOT__n118_q1)
                                             : (IData)(vlSelfRef.coral_bf16_pair__DOT__n98_q1));
    vlSelfRef.coral_bf16_pair__DOT__n55_q1 = vlSelfRef.coral_bf16_pair__DOT__n55;
    vlSelfRef.coral_bf16_pair__DOT__n62_q1 = vlSelfRef.coral_bf16_pair__DOT__n62;
    coral_bf16_pair__DOT__n151 = (0x3fffffffU & ((0x20000000U 
                                                  & vlSelfRef.coral_bf16_pair__DOT__n145_q1)
                                                  ? 
                                                 (- vlSelfRef.coral_bf16_pair__DOT__n145_q1)
                                                  : vlSelfRef.coral_bf16_pair__DOT__n145_q1));
    coral_bf16_pair__DOT__n121 = (0x7ffU & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n120) 
                                            - (IData)(vlSelfRef.coral_bf16_pair__DOT__n98_q1)));
    coral_bf16_pair__DOT__n134 = (0x7ffU & ((IData)(vlSelfRef.coral_bf16_pair__DOT__n120) 
                                            - (IData)(vlSelfRef.coral_bf16_pair__DOT__n118_q1)));
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
    coral_bf16_pair__DOT__n167 = (0x3fffffffU & ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (coral_bf16_pair__DOT__n159 
                                                      >> 0x16U)))
                                                  ? coral_bf16_pair__DOT__n159
                                                  : 
                                                 (coral_bf16_pair__DOT__n159 
                                                  << 8U)));
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

void Vcoral_bf16_pair___024root___eval_triggers__act(Vcoral_bf16_pair___024root* vlSelf);

bool Vcoral_bf16_pair___024root___eval_phase__act(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_phase__act\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcoral_bf16_pair___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcoral_bf16_pair___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcoral_bf16_pair___024root___eval_phase__nba(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_phase__nba\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcoral_bf16_pair___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__ico(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__nba(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_pair___024root___dump_triggers__act(Vcoral_bf16_pair___024root* vlSelf);
#endif  // VL_DEBUG

void Vcoral_bf16_pair___024root___eval(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcoral_bf16_pair___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_pair.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcoral_bf16_pair___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcoral_bf16_pair___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_pair.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcoral_bf16_pair___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_pair.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcoral_bf16_pair___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcoral_bf16_pair___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcoral_bf16_pair___024root___eval_debug_assertions(Vcoral_bf16_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_pair___024root___eval_debug_assertions\n"); );
    Vcoral_bf16_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
