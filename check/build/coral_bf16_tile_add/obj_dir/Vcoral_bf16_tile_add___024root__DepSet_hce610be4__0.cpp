// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoral_bf16_tile_add.h for the primary calling header

#include "Vcoral_bf16_tile_add__pch.h"
#include "Vcoral_bf16_tile_add___024root.h"

void Vcoral_bf16_tile_add___024root___ico_sequent__TOP__0(Vcoral_bf16_tile_add___024root* vlSelf);

void Vcoral_bf16_tile_add___024root___eval_ico(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_ico\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcoral_bf16_tile_add___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcoral_bf16_tile_add___024root___ico_sequent__TOP__0(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___ico_sequent__TOP__0\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ coral_bf16_tile_add__DOT__n17;
    coral_bf16_tile_add__DOT__n17 = 0;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n22;
    coral_bf16_tile_add__DOT__n22 = 0;
    // Body
    vlSelfRef.coral_bf16_tile_add__DOT__n37 = (((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelfRef.x0 
                                                     >> 0x17U))) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & vlSelfRef.x0));
    vlSelfRef.coral_bf16_tile_add__DOT__n52 = (((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelfRef.x1 
                                                     >> 0x17U))) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & vlSelfRef.x1));
    coral_bf16_tile_add__DOT__n17 = (IData)((0x7f800000U 
                                             == (0x7fffffffU 
                                                 & vlSelfRef.x0)));
    coral_bf16_tile_add__DOT__n22 = (IData)((0x7f800000U 
                                             == (0x7fffffffU 
                                                 & vlSelfRef.x1)));
    vlSelfRef.coral_bf16_tile_add__DOT__n30 = (((IData)(coral_bf16_tile_add__DOT__n17) 
                                                & (vlSelfRef.x0 
                                                   >> 0x1fU)) 
                                               | ((IData)(coral_bf16_tile_add__DOT__n22) 
                                                  & (vlSelfRef.x1 
                                                     >> 0x1fU)));
    vlSelfRef.coral_bf16_tile_add__DOT__n26 = (((~ 
                                                 (vlSelfRef.x0 
                                                  >> 0x1fU)) 
                                                & (IData)(coral_bf16_tile_add__DOT__n17)) 
                                               | ((~ 
                                                   (vlSelfRef.x1 
                                                    >> 0x1fU)) 
                                                  & (IData)(coral_bf16_tile_add__DOT__n22)));
}

void Vcoral_bf16_tile_add___024root___eval_triggers__ico(Vcoral_bf16_tile_add___024root* vlSelf);

bool Vcoral_bf16_tile_add___024root___eval_phase__ico(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_phase__ico\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcoral_bf16_tile_add___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcoral_bf16_tile_add___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcoral_bf16_tile_add___024root___eval_act(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_act\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcoral_bf16_tile_add___024root___nba_sequent__TOP__0(Vcoral_bf16_tile_add___024root* vlSelf);

void Vcoral_bf16_tile_add___024root___eval_nba(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_nba\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcoral_bf16_tile_add___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcoral_bf16_tile_add___024root___nba_sequent__TOP__0(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___nba_sequent__TOP__0\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ coral_bf16_tile_add__DOT__n60;
    coral_bf16_tile_add__DOT__n60 = 0;
    SData/*10:0*/ coral_bf16_tile_add__DOT__n74;
    coral_bf16_tile_add__DOT__n74 = 0;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n91;
    coral_bf16_tile_add__DOT__n91 = 0;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n99;
    coral_bf16_tile_add__DOT__n99 = 0;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n107;
    coral_bf16_tile_add__DOT__n107 = 0;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n115;
    coral_bf16_tile_add__DOT__n115 = 0;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n123;
    coral_bf16_tile_add__DOT__n123 = 0;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n130;
    coral_bf16_tile_add__DOT__n130 = 0;
    SData/*10:0*/ coral_bf16_tile_add__DOT__n138;
    coral_bf16_tile_add__DOT__n138 = 0;
    IData/*30:0*/ coral_bf16_tile_add__DOT__n149;
    coral_bf16_tile_add__DOT__n149 = 0;
    IData/*24:0*/ coral_bf16_tile_add__DOT__n159;
    coral_bf16_tile_add__DOT__n159 = 0;
    SData/*10:0*/ coral_bf16_tile_add__DOT__n165;
    coral_bf16_tile_add__DOT__n165 = 0;
    IData/*24:0*/ coral_bf16_tile_add__DOT__n169;
    coral_bf16_tile_add__DOT__n169 = 0;
    // Body
    vlSelfRef.coral_bf16_tile_add__DOT__n37_q1 = vlSelfRef.coral_bf16_tile_add__DOT__n37;
    vlSelfRef.coral_bf16_tile_add__DOT__n52_q1 = vlSelfRef.coral_bf16_tile_add__DOT__n52;
    vlSelfRef.coral_bf16_tile_add__DOT__n30_q2 = vlSelfRef.coral_bf16_tile_add__DOT__n30_q1;
    vlSelfRef.coral_bf16_tile_add__DOT__n26_q2 = vlSelfRef.coral_bf16_tile_add__DOT__n26_q1;
    vlSelfRef.coral_bf16_tile_add__DOT__n32_q2 = vlSelfRef.coral_bf16_tile_add__DOT__n32_q1;
    vlSelfRef.coral_bf16_tile_add__DOT__n49_q1 = ((0U 
                                                   == vlSelfRef.coral_bf16_tile_add__DOT__n37)
                                                   ? 0x702U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelfRef.x0 
                                                        >> 0x17U)))
                                                    ? 0x782U
                                                    : 
                                                   (0x7ffU 
                                                    & ((0xffU 
                                                        & (vlSelfRef.x0 
                                                           >> 0x17U)) 
                                                       - (IData)(0x7fU)))));
    vlSelfRef.coral_bf16_tile_add__DOT__n57_q1 = ((0U 
                                                   == vlSelfRef.coral_bf16_tile_add__DOT__n52)
                                                   ? 0x702U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelfRef.x1 
                                                        >> 0x17U)))
                                                    ? 0x782U
                                                    : 
                                                   (0x7ffU 
                                                    & ((0xffU 
                                                        & (vlSelfRef.x1 
                                                           >> 0x17U)) 
                                                       - (IData)(0x7fU)))));
    vlSelfRef.coral_bf16_tile_add__DOT__n59_q1 = vlSelfRef.coral_bf16_tile_add__DOT__n59;
    vlSelfRef.coral_bf16_tile_add__DOT__n85_q1 = (0x7fffffffU 
                                                  & (((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n18_q1)
                                                       ? 
                                                      (- vlSelfRef.coral_bf16_tile_add__DOT__n69)
                                                       : vlSelfRef.coral_bf16_tile_add__DOT__n69) 
                                                     + 
                                                     ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n23_q1)
                                                       ? 
                                                      (- vlSelfRef.coral_bf16_tile_add__DOT__n82)
                                                       : vlSelfRef.coral_bf16_tile_add__DOT__n82)));
    vlSelfRef.coral_bf16_tile_add__DOT__n30_q1 = vlSelfRef.coral_bf16_tile_add__DOT__n30;
    vlSelfRef.coral_bf16_tile_add__DOT__n26_q1 = vlSelfRef.coral_bf16_tile_add__DOT__n26;
    vlSelfRef.coral_bf16_tile_add__DOT__n32_q1 = ((IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & vlSelfRef.x0)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & vlSelfRef.x0)))) 
                                                  | ((IData)(
                                                             ((0x7f800000U 
                                                               == 
                                                               (0x7f800000U 
                                                                & vlSelfRef.x1)) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & vlSelfRef.x1)))) 
                                                     | ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n26) 
                                                        & (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n30))));
    vlSelfRef.coral_bf16_tile_add__DOT__n59 = (VL_LTS_III(11, (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n49_q1), (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n57_q1))
                                                ? (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n57_q1)
                                                : (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n49_q1));
    vlSelfRef.coral_bf16_tile_add__DOT__n18_q1 = (vlSelfRef.x0 
                                                  >> 0x1fU);
    vlSelfRef.coral_bf16_tile_add__DOT__n23_q1 = (vlSelfRef.x1 
                                                  >> 0x1fU);
    coral_bf16_tile_add__DOT__n91 = (0x7fffffffU & 
                                     ((0x40000000U 
                                       & vlSelfRef.coral_bf16_tile_add__DOT__n85_q1)
                                       ? (- vlSelfRef.coral_bf16_tile_add__DOT__n85_q1)
                                       : vlSelfRef.coral_bf16_tile_add__DOT__n85_q1));
    coral_bf16_tile_add__DOT__n60 = (0x7ffU & ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n59) 
                                               - (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n49_q1)));
    coral_bf16_tile_add__DOT__n74 = (0x7ffU & ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n59) 
                                               - (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n57_q1)));
    coral_bf16_tile_add__DOT__n99 = (0x7fffffffU & 
                                     ((0U != (0xffffU 
                                              & (coral_bf16_tile_add__DOT__n91 
                                                 >> 0xfU)))
                                       ? coral_bf16_tile_add__DOT__n91
                                       : (coral_bf16_tile_add__DOT__n91 
                                          << 0x10U)));
    vlSelfRef.coral_bf16_tile_add__DOT__n69 = (0xfffffffU 
                                               & (VL_SHIFTR_III(28,28,11, 
                                                                (vlSelfRef.coral_bf16_tile_add__DOT__n37_q1 
                                                                 << 3U), (IData)(coral_bf16_tile_add__DOT__n60)) 
                                                  | (0U 
                                                     != 
                                                     ((~ 
                                                       VL_SHIFTL_III(28,28,11, (IData)(0xfffffffU), (IData)(coral_bf16_tile_add__DOT__n60))) 
                                                      & (vlSelfRef.coral_bf16_tile_add__DOT__n37_q1 
                                                         << 3U)))));
    vlSelfRef.coral_bf16_tile_add__DOT__n82 = (0xfffffffU 
                                               & (VL_SHIFTR_III(28,28,11, 
                                                                (vlSelfRef.coral_bf16_tile_add__DOT__n52_q1 
                                                                 << 3U), (IData)(coral_bf16_tile_add__DOT__n74)) 
                                                  | (0U 
                                                     != 
                                                     ((~ 
                                                       VL_SHIFTL_III(28,28,11, (IData)(0xfffffffU), (IData)(coral_bf16_tile_add__DOT__n74))) 
                                                      & (vlSelfRef.coral_bf16_tile_add__DOT__n52_q1 
                                                         << 3U)))));
    coral_bf16_tile_add__DOT__n107 = (0x7fffffffU & 
                                      ((0U != (0xffU 
                                               & (coral_bf16_tile_add__DOT__n99 
                                                  >> 0x17U)))
                                        ? coral_bf16_tile_add__DOT__n99
                                        : (coral_bf16_tile_add__DOT__n99 
                                           << 8U)));
    coral_bf16_tile_add__DOT__n115 = (0x7fffffffU & 
                                      ((0U != (0xfU 
                                               & (coral_bf16_tile_add__DOT__n107 
                                                  >> 0x1bU)))
                                        ? coral_bf16_tile_add__DOT__n107
                                        : (coral_bf16_tile_add__DOT__n107 
                                           << 4U)));
    coral_bf16_tile_add__DOT__n123 = (0x7fffffffU & 
                                      ((0U != (3U & 
                                               (coral_bf16_tile_add__DOT__n115 
                                                >> 0x1dU)))
                                        ? coral_bf16_tile_add__DOT__n115
                                        : (coral_bf16_tile_add__DOT__n115 
                                           << 2U)));
    coral_bf16_tile_add__DOT__n130 = (0x7fffffffU & 
                                      ((0x40000000U 
                                        & coral_bf16_tile_add__DOT__n123)
                                        ? coral_bf16_tile_add__DOT__n123
                                        : (coral_bf16_tile_add__DOT__n123 
                                           << 1U)));
    coral_bf16_tile_add__DOT__n138 = (0x7ffU & ((IData)(4U) 
                                                + ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n59_q1) 
                                                   - 
                                                   (0x3fU 
                                                    & (((0U 
                                                         != 
                                                         (0xffffU 
                                                          & (coral_bf16_tile_add__DOT__n91 
                                                             >> 0xfU)))
                                                         ? 0U
                                                         : 0x10U) 
                                                       + 
                                                       (((0U 
                                                          != 
                                                          (0xffU 
                                                           & (coral_bf16_tile_add__DOT__n99 
                                                              >> 0x17U)))
                                                          ? 0U
                                                          : 8U) 
                                                        + 
                                                        (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (coral_bf16_tile_add__DOT__n107 
                                                               >> 0x1bU)))
                                                           ? 0U
                                                           : 4U) 
                                                         + 
                                                         (((0U 
                                                            != 
                                                            (3U 
                                                             & (coral_bf16_tile_add__DOT__n115 
                                                                >> 0x1dU)))
                                                            ? 0U
                                                            : 2U) 
                                                          + 
                                                          (((0x40000000U 
                                                             & coral_bf16_tile_add__DOT__n123)
                                                             ? 0U
                                                             : 1U) 
                                                           + 
                                                           ((0x40000000U 
                                                             & coral_bf16_tile_add__DOT__n130)
                                                             ? 0U
                                                             : 1U))))))))));
    coral_bf16_tile_add__DOT__n149 = (0x7fffffffU & 
                                      (VL_GTS_III(11, 0x782U, (IData)(coral_bf16_tile_add__DOT__n138))
                                        ? (VL_SHIFTR_III(31,31,11, coral_bf16_tile_add__DOT__n130, 
                                                         (0x7ffU 
                                                          & ((IData)(0x782U) 
                                                             - (IData)(coral_bf16_tile_add__DOT__n138)))) 
                                           | (0U != 
                                              ((~ VL_SHIFTL_III(31,31,11, (IData)(0x7fffffffU), 
                                                                (0x7ffU 
                                                                 & ((IData)(0x782U) 
                                                                    - (IData)(coral_bf16_tile_add__DOT__n138))))) 
                                               & coral_bf16_tile_add__DOT__n130)))
                                        : coral_bf16_tile_add__DOT__n130));
    coral_bf16_tile_add__DOT__n159 = (0x1ffffffU & 
                                      ((0xffffffU & 
                                        (coral_bf16_tile_add__DOT__n149 
                                         >> 7U)) + 
                                       (1U & ((coral_bf16_tile_add__DOT__n149 
                                               >> 6U) 
                                              & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xbfU 
                                                          & coral_bf16_tile_add__DOT__n149)))))));
    coral_bf16_tile_add__DOT__n169 = (0x1ffffffU & 
                                      ((0x1000000U 
                                        & coral_bf16_tile_add__DOT__n159)
                                        ? (coral_bf16_tile_add__DOT__n159 
                                           >> 1U) : coral_bf16_tile_add__DOT__n159));
    coral_bf16_tile_add__DOT__n165 = (0x7ffU & ((IData)(0x7fU) 
                                                + (
                                                   (VL_GTS_III(11, 0x782U, (IData)(coral_bf16_tile_add__DOT__n138))
                                                     ? 0x782U
                                                     : (IData)(coral_bf16_tile_add__DOT__n138)) 
                                                   + 
                                                   (1U 
                                                    & (coral_bf16_tile_add__DOT__n159 
                                                       >> 0x18U)))));
    vlSelfRef.y = ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n32_q2)
                    ? 0x7fc00000U : ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n26_q2)
                                      ? 0x7f800000U
                                      : ((IData)(vlSelfRef.coral_bf16_tile_add__DOT__n30_q2)
                                          ? 0xff800000U
                                          : ((0U == vlSelfRef.coral_bf16_tile_add__DOT__n85_q1)
                                              ? 0U : 
                                             ((0x80000000U 
                                               & (vlSelfRef.coral_bf16_tile_add__DOT__n85_q1 
                                                  << 1U)) 
                                              | (((VL_LTES_III(11, 0xffU, (IData)(coral_bf16_tile_add__DOT__n165))
                                                    ? 0xffU
                                                    : 
                                                   ((0x800000U 
                                                     & coral_bf16_tile_add__DOT__n169)
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(coral_bf16_tile_add__DOT__n165))
                                                     : 0U)) 
                                                  << 0x17U) 
                                                 | (VL_LTES_III(11, 0xffU, (IData)(coral_bf16_tile_add__DOT__n165))
                                                     ? 0U
                                                     : 
                                                    (0x7fffffU 
                                                     & coral_bf16_tile_add__DOT__n169))))))));
}

void Vcoral_bf16_tile_add___024root___eval_triggers__act(Vcoral_bf16_tile_add___024root* vlSelf);

bool Vcoral_bf16_tile_add___024root___eval_phase__act(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_phase__act\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcoral_bf16_tile_add___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcoral_bf16_tile_add___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcoral_bf16_tile_add___024root___eval_phase__nba(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_phase__nba\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcoral_bf16_tile_add___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__ico(Vcoral_bf16_tile_add___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__nba(Vcoral_bf16_tile_add___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__act(Vcoral_bf16_tile_add___024root* vlSelf);
#endif  // VL_DEBUG

void Vcoral_bf16_tile_add___024root___eval(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcoral_bf16_tile_add___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_tile_add.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcoral_bf16_tile_add___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcoral_bf16_tile_add___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_tile_add.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcoral_bf16_tile_add___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_tile_add.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcoral_bf16_tile_add___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcoral_bf16_tile_add___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcoral_bf16_tile_add___024root___eval_debug_assertions(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_debug_assertions\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
