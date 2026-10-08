// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoral_bf16_tile_add.h for the primary calling header

#include "Vcoral_bf16_tile_add__pch.h"
#include "Vcoral_bf16_tile_add___024root.h"

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___eval_static(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_static\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___eval_initial(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_initial\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___eval_final(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_final\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__stl(Vcoral_bf16_tile_add___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcoral_bf16_tile_add___024root___eval_phase__stl(Vcoral_bf16_tile_add___024root* vlSelf);

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___eval_settle(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_settle\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcoral_bf16_tile_add___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/before/coral_bf16_tile_add.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcoral_bf16_tile_add___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__stl(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___dump_triggers__stl\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___stl_sequent__TOP__0(Vcoral_bf16_tile_add___024root* vlSelf);

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___eval_stl(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_stl\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcoral_bf16_tile_add___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___stl_sequent__TOP__0(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___stl_sequent__TOP__0\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ coral_bf16_tile_add__DOT__n17;
    coral_bf16_tile_add__DOT__n17 = 0;
    CData/*0:0*/ coral_bf16_tile_add__DOT__n22;
    coral_bf16_tile_add__DOT__n22 = 0;
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
    vlSelfRef.coral_bf16_tile_add__DOT__n59 = (VL_LTS_III(11, (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n49_q1), (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n57_q1))
                                                ? (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n57_q1)
                                                : (IData)(vlSelfRef.coral_bf16_tile_add__DOT__n49_q1));
    coral_bf16_tile_add__DOT__n91 = (0x7fffffffU & 
                                     ((0x40000000U 
                                       & vlSelfRef.coral_bf16_tile_add__DOT__n85_q1)
                                       ? (- vlSelfRef.coral_bf16_tile_add__DOT__n85_q1)
                                       : vlSelfRef.coral_bf16_tile_add__DOT__n85_q1));
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

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___eval_triggers__stl(Vcoral_bf16_tile_add___024root* vlSelf);

VL_ATTR_COLD bool Vcoral_bf16_tile_add___024root___eval_phase__stl(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___eval_phase__stl\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcoral_bf16_tile_add___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcoral_bf16_tile_add___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__ico(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___dump_triggers__ico\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__act(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___dump_triggers__act\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___dump_triggers__nba(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___dump_triggers__nba\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcoral_bf16_tile_add___024root___ctor_var_reset(Vcoral_bf16_tile_add___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoral_bf16_tile_add___024root___ctor_var_reset\n"); );
    Vcoral_bf16_tile_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->x0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17061989026830937363ull);
    vlSelf->x1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11988938384518227409ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11123243248953317070ull);
    vlSelf->coral_bf16_tile_add__DOT__n26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8761700012623562438ull);
    vlSelf->coral_bf16_tile_add__DOT__n30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16453148560681949604ull);
    vlSelf->coral_bf16_tile_add__DOT__n37 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4829890135559937298ull);
    vlSelf->coral_bf16_tile_add__DOT__n37_q1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10625882743162637084ull);
    vlSelf->coral_bf16_tile_add__DOT__n52 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16935702850131815248ull);
    vlSelf->coral_bf16_tile_add__DOT__n49_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4392380611076811104ull);
    vlSelf->coral_bf16_tile_add__DOT__n57_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16307271260135698348ull);
    vlSelf->coral_bf16_tile_add__DOT__n59 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4400543967360097070ull);
    vlSelf->coral_bf16_tile_add__DOT__n69 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 9222783895659902933ull);
    vlSelf->coral_bf16_tile_add__DOT__n18_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17864534187520546341ull);
    vlSelf->coral_bf16_tile_add__DOT__n52_q1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12285180379030429275ull);
    vlSelf->coral_bf16_tile_add__DOT__n82 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 3780332885385076046ull);
    vlSelf->coral_bf16_tile_add__DOT__n23_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5619759984521479133ull);
    vlSelf->coral_bf16_tile_add__DOT__n85_q1 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 17143030121644575666ull);
    vlSelf->coral_bf16_tile_add__DOT__n59_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 954875047186226474ull);
    vlSelf->coral_bf16_tile_add__DOT__n30_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837664221084376344ull);
    vlSelf->coral_bf16_tile_add__DOT__n30_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 188096406684813335ull);
    vlSelf->coral_bf16_tile_add__DOT__n26_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2932175716342649381ull);
    vlSelf->coral_bf16_tile_add__DOT__n26_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5034450825715035491ull);
    vlSelf->coral_bf16_tile_add__DOT__n32_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9181398440590676296ull);
    vlSelf->coral_bf16_tile_add__DOT__n32_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3439073572705355576ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
}
