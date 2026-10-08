// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbf16_block16.h for the primary calling header

#include "Vbf16_block16__pch.h"
#include "Vbf16_block16___024root.h"

VL_ATTR_COLD void Vbf16_block16___024root___eval_static(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_static\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vbf16_block16___024root___eval_initial(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_initial\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbf16_block16___024root___eval_final(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_final\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__stl(Vbf16_block16___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbf16_block16___024root___eval_phase__stl(Vbf16_block16___024root* vlSelf);

VL_ATTR_COLD void Vbf16_block16___024root___eval_settle(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_settle\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbf16_block16___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/after/bf16_block16.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbf16_block16___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__stl(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___dump_triggers__stl\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vbf16_block16___024root___stl_sequent__TOP__0(Vbf16_block16___024root* vlSelf);

VL_ATTR_COLD void Vbf16_block16___024root___eval_stl(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_stl\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbf16_block16___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbf16_block16___024root___stl_sequent__TOP__0(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___stl_sequent__TOP__0\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bf16_block16__DOT__n17;
    bf16_block16__DOT__n17 = 0;
    CData/*0:0*/ bf16_block16__DOT__n22;
    bf16_block16__DOT__n22 = 0;
    CData/*0:0*/ bf16_block16__DOT__n42;
    bf16_block16__DOT__n42 = 0;
    CData/*0:0*/ bf16_block16__DOT__n46;
    bf16_block16__DOT__n46 = 0;
    CData/*0:0*/ bf16_block16__DOT__n66;
    bf16_block16__DOT__n66 = 0;
    CData/*0:0*/ bf16_block16__DOT__n70;
    bf16_block16__DOT__n70 = 0;
    CData/*0:0*/ bf16_block16__DOT__n90;
    bf16_block16__DOT__n90 = 0;
    CData/*0:0*/ bf16_block16__DOT__n94;
    bf16_block16__DOT__n94 = 0;
    CData/*0:0*/ bf16_block16__DOT__n114;
    bf16_block16__DOT__n114 = 0;
    CData/*0:0*/ bf16_block16__DOT__n118;
    bf16_block16__DOT__n118 = 0;
    CData/*0:0*/ bf16_block16__DOT__n138;
    bf16_block16__DOT__n138 = 0;
    CData/*0:0*/ bf16_block16__DOT__n142;
    bf16_block16__DOT__n142 = 0;
    CData/*0:0*/ bf16_block16__DOT__n162;
    bf16_block16__DOT__n162 = 0;
    CData/*0:0*/ bf16_block16__DOT__n166;
    bf16_block16__DOT__n166 = 0;
    CData/*0:0*/ bf16_block16__DOT__n186;
    bf16_block16__DOT__n186 = 0;
    CData/*0:0*/ bf16_block16__DOT__n190;
    bf16_block16__DOT__n190 = 0;
    CData/*0:0*/ bf16_block16__DOT__n210;
    bf16_block16__DOT__n210 = 0;
    CData/*0:0*/ bf16_block16__DOT__n214;
    bf16_block16__DOT__n214 = 0;
    CData/*0:0*/ bf16_block16__DOT__n234;
    bf16_block16__DOT__n234 = 0;
    CData/*0:0*/ bf16_block16__DOT__n238;
    bf16_block16__DOT__n238 = 0;
    CData/*0:0*/ bf16_block16__DOT__n258;
    bf16_block16__DOT__n258 = 0;
    CData/*0:0*/ bf16_block16__DOT__n262;
    bf16_block16__DOT__n262 = 0;
    CData/*0:0*/ bf16_block16__DOT__n282;
    bf16_block16__DOT__n282 = 0;
    CData/*0:0*/ bf16_block16__DOT__n286;
    bf16_block16__DOT__n286 = 0;
    CData/*0:0*/ bf16_block16__DOT__n306;
    bf16_block16__DOT__n306 = 0;
    CData/*0:0*/ bf16_block16__DOT__n310;
    bf16_block16__DOT__n310 = 0;
    CData/*0:0*/ bf16_block16__DOT__n330;
    bf16_block16__DOT__n330 = 0;
    CData/*0:0*/ bf16_block16__DOT__n334;
    bf16_block16__DOT__n334 = 0;
    CData/*0:0*/ bf16_block16__DOT__n354;
    bf16_block16__DOT__n354 = 0;
    CData/*0:0*/ bf16_block16__DOT__n358;
    bf16_block16__DOT__n358 = 0;
    CData/*0:0*/ bf16_block16__DOT__n378;
    bf16_block16__DOT__n378 = 0;
    CData/*0:0*/ bf16_block16__DOT__n382;
    bf16_block16__DOT__n382 = 0;
    CData/*0:0*/ bf16_block16__DOT__n396;
    bf16_block16__DOT__n396 = 0;
    CData/*0:0*/ bf16_block16__DOT__n403;
    bf16_block16__DOT__n403 = 0;
    CData/*0:0*/ bf16_block16__DOT__n410;
    bf16_block16__DOT__n410 = 0;
    CData/*0:0*/ bf16_block16__DOT__n417;
    bf16_block16__DOT__n417 = 0;
    CData/*0:0*/ bf16_block16__DOT__n424;
    bf16_block16__DOT__n424 = 0;
    CData/*0:0*/ bf16_block16__DOT__n431;
    bf16_block16__DOT__n431 = 0;
    CData/*0:0*/ bf16_block16__DOT__n438;
    bf16_block16__DOT__n438 = 0;
    CData/*0:0*/ bf16_block16__DOT__n445;
    bf16_block16__DOT__n445 = 0;
    CData/*0:0*/ bf16_block16__DOT__n452;
    bf16_block16__DOT__n452 = 0;
    CData/*0:0*/ bf16_block16__DOT__n459;
    bf16_block16__DOT__n459 = 0;
    CData/*0:0*/ bf16_block16__DOT__n466;
    bf16_block16__DOT__n466 = 0;
    CData/*0:0*/ bf16_block16__DOT__n473;
    bf16_block16__DOT__n473 = 0;
    CData/*0:0*/ bf16_block16__DOT__n480;
    bf16_block16__DOT__n480 = 0;
    CData/*0:0*/ bf16_block16__DOT__n487;
    bf16_block16__DOT__n487 = 0;
    CData/*0:0*/ bf16_block16__DOT__n494;
    bf16_block16__DOT__n494 = 0;
    CData/*0:0*/ bf16_block16__DOT__n501;
    bf16_block16__DOT__n501 = 0;
    CData/*0:0*/ bf16_block16__DOT__n508;
    bf16_block16__DOT__n508 = 0;
    SData/*10:0*/ bf16_block16__DOT__n598;
    bf16_block16__DOT__n598 = 0;
    SData/*10:0*/ bf16_block16__DOT__n640;
    bf16_block16__DOT__n640 = 0;
    SData/*10:0*/ bf16_block16__DOT__n642;
    bf16_block16__DOT__n642 = 0;
    SData/*10:0*/ bf16_block16__DOT__n684;
    bf16_block16__DOT__n684 = 0;
    SData/*10:0*/ bf16_block16__DOT__n726;
    bf16_block16__DOT__n726 = 0;
    SData/*10:0*/ bf16_block16__DOT__n728;
    bf16_block16__DOT__n728 = 0;
    SData/*10:0*/ bf16_block16__DOT__n730;
    bf16_block16__DOT__n730 = 0;
    SData/*10:0*/ bf16_block16__DOT__n772;
    bf16_block16__DOT__n772 = 0;
    SData/*10:0*/ bf16_block16__DOT__n814;
    bf16_block16__DOT__n814 = 0;
    SData/*10:0*/ bf16_block16__DOT__n816;
    bf16_block16__DOT__n816 = 0;
    SData/*10:0*/ bf16_block16__DOT__n858;
    bf16_block16__DOT__n858 = 0;
    SData/*10:0*/ bf16_block16__DOT__n900;
    bf16_block16__DOT__n900 = 0;
    SData/*10:0*/ bf16_block16__DOT__n902;
    bf16_block16__DOT__n902 = 0;
    SData/*10:0*/ bf16_block16__DOT__n904;
    bf16_block16__DOT__n904 = 0;
    SData/*10:0*/ bf16_block16__DOT__n906;
    bf16_block16__DOT__n906 = 0;
    SData/*10:0*/ bf16_block16__DOT__n918;
    bf16_block16__DOT__n918 = 0;
    IData/*20:0*/ bf16_block16__DOT__n919;
    bf16_block16__DOT__n919 = 0;
    SData/*10:0*/ bf16_block16__DOT__n943;
    bf16_block16__DOT__n943 = 0;
    IData/*20:0*/ bf16_block16__DOT__n944;
    bf16_block16__DOT__n944 = 0;
    SData/*10:0*/ bf16_block16__DOT__n967;
    bf16_block16__DOT__n967 = 0;
    IData/*20:0*/ bf16_block16__DOT__n968;
    bf16_block16__DOT__n968 = 0;
    SData/*10:0*/ bf16_block16__DOT__n990;
    bf16_block16__DOT__n990 = 0;
    IData/*20:0*/ bf16_block16__DOT__n991;
    bf16_block16__DOT__n991 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1015;
    bf16_block16__DOT__n1015 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1016;
    bf16_block16__DOT__n1016 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1038;
    bf16_block16__DOT__n1038 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1039;
    bf16_block16__DOT__n1039 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1062;
    bf16_block16__DOT__n1062 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1063;
    bf16_block16__DOT__n1063 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1085;
    bf16_block16__DOT__n1085 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1086;
    bf16_block16__DOT__n1086 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1111;
    bf16_block16__DOT__n1111 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1112;
    bf16_block16__DOT__n1112 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1134;
    bf16_block16__DOT__n1134 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1135;
    bf16_block16__DOT__n1135 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1158;
    bf16_block16__DOT__n1158 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1159;
    bf16_block16__DOT__n1159 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1181;
    bf16_block16__DOT__n1181 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1182;
    bf16_block16__DOT__n1182 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1206;
    bf16_block16__DOT__n1206 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1207;
    bf16_block16__DOT__n1207 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1229;
    bf16_block16__DOT__n1229 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1230;
    bf16_block16__DOT__n1230 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1253;
    bf16_block16__DOT__n1253 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1254;
    bf16_block16__DOT__n1254 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1276;
    bf16_block16__DOT__n1276 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1277;
    bf16_block16__DOT__n1277 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1304;
    bf16_block16__DOT__n1304 = 0;
    IData/*20:0*/ bf16_block16__DOT__n1305;
    bf16_block16__DOT__n1305 = 0;
    IData/*25:0*/ bf16_block16__DOT__n1331;
    bf16_block16__DOT__n1331 = 0;
    IData/*25:0*/ bf16_block16__DOT__n1339;
    bf16_block16__DOT__n1339 = 0;
    IData/*25:0*/ bf16_block16__DOT__n1347;
    bf16_block16__DOT__n1347 = 0;
    IData/*25:0*/ bf16_block16__DOT__n1355;
    bf16_block16__DOT__n1355 = 0;
    IData/*25:0*/ bf16_block16__DOT__n1363;
    bf16_block16__DOT__n1363 = 0;
    IData/*24:0*/ bf16_block16__DOT__n1399;
    bf16_block16__DOT__n1399 = 0;
    SData/*10:0*/ bf16_block16__DOT__n1405;
    bf16_block16__DOT__n1405 = 0;
    IData/*24:0*/ bf16_block16__DOT__n1409;
    bf16_block16__DOT__n1409 = 0;
    // Body
    vlSelfRef.bf16_block16__DOT__n909 = (((0U != (0xffU 
                                                  & (vlSelfRef.c 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelfRef.c));
    vlSelfRef.bf16_block16__DOT__n551 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a0) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a0)));
    vlSelfRef.bf16_block16__DOT__n554 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b0) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b0)));
    vlSelfRef.bf16_block16__DOT__n578 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a1) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a1)));
    vlSelfRef.bf16_block16__DOT__n581 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b1) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b1)));
    vlSelfRef.bf16_block16__DOT__n600 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a2) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a2)));
    vlSelfRef.bf16_block16__DOT__n603 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b2) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b2)));
    vlSelfRef.bf16_block16__DOT__n620 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a3) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a3)));
    vlSelfRef.bf16_block16__DOT__n623 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b3) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b3)));
    vlSelfRef.bf16_block16__DOT__n644 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a4) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a4)));
    vlSelfRef.bf16_block16__DOT__n647 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b4) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b4)));
    vlSelfRef.bf16_block16__DOT__n664 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a5) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a5)));
    vlSelfRef.bf16_block16__DOT__n667 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b5) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b5)));
    vlSelfRef.bf16_block16__DOT__n686 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a6) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a6)));
    vlSelfRef.bf16_block16__DOT__n689 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b6) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b6)));
    vlSelfRef.bf16_block16__DOT__n706 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a7) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a7)));
    vlSelfRef.bf16_block16__DOT__n709 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b7) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b7)));
    vlSelfRef.bf16_block16__DOT__n732 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a8) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a8)));
    vlSelfRef.bf16_block16__DOT__n735 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b8) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b8)));
    vlSelfRef.bf16_block16__DOT__n752 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a9) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a9)));
    vlSelfRef.bf16_block16__DOT__n755 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b9) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b9)));
    vlSelfRef.bf16_block16__DOT__n774 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a10) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a10)));
    vlSelfRef.bf16_block16__DOT__n777 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b10) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b10)));
    vlSelfRef.bf16_block16__DOT__n794 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a11) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a11)));
    vlSelfRef.bf16_block16__DOT__n797 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b11) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b11)));
    vlSelfRef.bf16_block16__DOT__n818 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a12) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a12)));
    vlSelfRef.bf16_block16__DOT__n821 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b12) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b12)));
    vlSelfRef.bf16_block16__DOT__n838 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a13) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a13)));
    vlSelfRef.bf16_block16__DOT__n841 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b13) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b13)));
    vlSelfRef.bf16_block16__DOT__n860 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a14) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a14)));
    vlSelfRef.bf16_block16__DOT__n863 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b14) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b14)));
    vlSelfRef.bf16_block16__DOT__n880 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.a15) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.a15)));
    vlSelfRef.bf16_block16__DOT__n883 = (((0U != (0xffU 
                                                  & ((IData)(vlSelfRef.b15) 
                                                     >> 7U))) 
                                          << 7U) | 
                                         (0x7fU & (IData)(vlSelfRef.b15)));
    bf16_block16__DOT__n1399 = (0x1ffffffU & ((0xffffffU 
                                               & (vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                  >> 2U)) 
                                              + (1U 
                                                 & ((vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                     >> 1U) 
                                                    & (vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                       | (vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                          >> 2U))))));
    bf16_block16__DOT__n1331 = (0x3ffffffU & ((0x2000000U 
                                               & vlSelfRef.bf16_block16__DOT__n1325_q1)
                                               ? (- vlSelfRef.bf16_block16__DOT__n1325_q1)
                                               : vlSelfRef.bf16_block16__DOT__n1325_q1));
    bf16_block16__DOT__n508 = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSelfRef.c)));
    vlSelfRef.bf16_block16__DOT__n399 = (1U & (((IData)(vlSelfRef.a0) 
                                                ^ (IData)(vlSelfRef.b0)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n406 = (1U & (((IData)(vlSelfRef.a1) 
                                                ^ (IData)(vlSelfRef.b1)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n413 = (1U & (((IData)(vlSelfRef.a2) 
                                                ^ (IData)(vlSelfRef.b2)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n420 = (1U & (((IData)(vlSelfRef.a3) 
                                                ^ (IData)(vlSelfRef.b3)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n427 = (1U & (((IData)(vlSelfRef.a4) 
                                                ^ (IData)(vlSelfRef.b4)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n434 = (1U & (((IData)(vlSelfRef.a5) 
                                                ^ (IData)(vlSelfRef.b5)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n441 = (1U & (((IData)(vlSelfRef.a6) 
                                                ^ (IData)(vlSelfRef.b6)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n448 = (1U & (((IData)(vlSelfRef.a7) 
                                                ^ (IData)(vlSelfRef.b7)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n455 = (1U & (((IData)(vlSelfRef.a8) 
                                                ^ (IData)(vlSelfRef.b8)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n462 = (1U & (((IData)(vlSelfRef.a9) 
                                                ^ (IData)(vlSelfRef.b9)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n469 = (1U & (((IData)(vlSelfRef.a10) 
                                                ^ (IData)(vlSelfRef.b10)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n476 = (1U & (((IData)(vlSelfRef.a11) 
                                                ^ (IData)(vlSelfRef.b11)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n483 = (1U & (((IData)(vlSelfRef.a12) 
                                                ^ (IData)(vlSelfRef.b12)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n490 = (1U & (((IData)(vlSelfRef.a13) 
                                                ^ (IData)(vlSelfRef.b13)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n497 = (1U & (((IData)(vlSelfRef.a14) 
                                                ^ (IData)(vlSelfRef.b14)) 
                                               >> 0xfU));
    vlSelfRef.bf16_block16__DOT__n504 = (1U & (((IData)(vlSelfRef.a15) 
                                                ^ (IData)(vlSelfRef.b15)) 
                                               >> 0xfU));
    bf16_block16__DOT__n17 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.a0))));
    bf16_block16__DOT__n22 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.b0))));
    bf16_block16__DOT__n42 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.a1))));
    bf16_block16__DOT__n46 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.b1))));
    bf16_block16__DOT__n66 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.a2))));
    bf16_block16__DOT__n70 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.b2))));
    bf16_block16__DOT__n90 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.a3))));
    bf16_block16__DOT__n94 = (IData)((0x7f80U == (0x7fffU 
                                                  & (IData)(vlSelfRef.b3))));
    bf16_block16__DOT__n114 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a4))));
    bf16_block16__DOT__n118 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b4))));
    bf16_block16__DOT__n138 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a5))));
    bf16_block16__DOT__n142 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b5))));
    bf16_block16__DOT__n162 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a6))));
    bf16_block16__DOT__n166 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b6))));
    bf16_block16__DOT__n186 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a7))));
    bf16_block16__DOT__n190 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b7))));
    bf16_block16__DOT__n210 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a8))));
    bf16_block16__DOT__n214 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b8))));
    bf16_block16__DOT__n234 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a9))));
    bf16_block16__DOT__n238 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b9))));
    bf16_block16__DOT__n258 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a10))));
    bf16_block16__DOT__n262 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b10))));
    bf16_block16__DOT__n282 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a11))));
    bf16_block16__DOT__n286 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b11))));
    bf16_block16__DOT__n306 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a12))));
    bf16_block16__DOT__n310 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b12))));
    bf16_block16__DOT__n330 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a13))));
    bf16_block16__DOT__n334 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b13))));
    bf16_block16__DOT__n354 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a14))));
    bf16_block16__DOT__n358 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b14))));
    bf16_block16__DOT__n378 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.a15))));
    bf16_block16__DOT__n382 = (IData)((0x7f80U == (0x7fffU 
                                                   & (IData)(vlSelfRef.b15))));
    bf16_block16__DOT__n598 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n576_q1), (IData)(vlSelfRef.bf16_block16__DOT__n596_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n596_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n576_q1));
    bf16_block16__DOT__n640 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n618_q1), (IData)(vlSelfRef.bf16_block16__DOT__n638_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n638_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n618_q1));
    bf16_block16__DOT__n684 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n662_q1), (IData)(vlSelfRef.bf16_block16__DOT__n682_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n682_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n662_q1));
    bf16_block16__DOT__n726 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n704_q1), (IData)(vlSelfRef.bf16_block16__DOT__n724_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n724_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n704_q1));
    bf16_block16__DOT__n772 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n750_q1), (IData)(vlSelfRef.bf16_block16__DOT__n770_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n770_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n750_q1));
    bf16_block16__DOT__n814 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n792_q1), (IData)(vlSelfRef.bf16_block16__DOT__n812_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n812_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n792_q1));
    bf16_block16__DOT__n858 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n836_q1), (IData)(vlSelfRef.bf16_block16__DOT__n856_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n856_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n836_q1));
    bf16_block16__DOT__n900 = (VL_LTS_III(11, (IData)(vlSelfRef.bf16_block16__DOT__n878_q1), (IData)(vlSelfRef.bf16_block16__DOT__n898_q1))
                                ? (IData)(vlSelfRef.bf16_block16__DOT__n898_q1)
                                : (IData)(vlSelfRef.bf16_block16__DOT__n878_q1));
    vlSelfRef.bf16_block16__DOT__n556 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n551) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n554)));
    vlSelfRef.bf16_block16__DOT__n583 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n578) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n581)));
    vlSelfRef.bf16_block16__DOT__n605 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n600) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n603)));
    vlSelfRef.bf16_block16__DOT__n625 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n620) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n623)));
    vlSelfRef.bf16_block16__DOT__n649 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n644) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n647)));
    vlSelfRef.bf16_block16__DOT__n669 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n664) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n667)));
    vlSelfRef.bf16_block16__DOT__n691 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n686) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n689)));
    vlSelfRef.bf16_block16__DOT__n711 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n706) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n709)));
    vlSelfRef.bf16_block16__DOT__n737 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n732) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n735)));
    vlSelfRef.bf16_block16__DOT__n757 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n752) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n755)));
    vlSelfRef.bf16_block16__DOT__n779 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n774) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n777)));
    vlSelfRef.bf16_block16__DOT__n799 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n794) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n797)));
    vlSelfRef.bf16_block16__DOT__n823 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n818) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n821)));
    vlSelfRef.bf16_block16__DOT__n843 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n838) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n841)));
    vlSelfRef.bf16_block16__DOT__n865 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n860) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n863)));
    vlSelfRef.bf16_block16__DOT__n885 = (0xffffU & 
                                         ((IData)(vlSelfRef.bf16_block16__DOT__n880) 
                                          * (IData)(vlSelfRef.bf16_block16__DOT__n883)));
    bf16_block16__DOT__n1409 = (0x1ffffffU & ((0x1000000U 
                                               & bf16_block16__DOT__n1399)
                                               ? (bf16_block16__DOT__n1399 
                                                  >> 1U)
                                               : bf16_block16__DOT__n1399));
    bf16_block16__DOT__n1405 = (0x7ffU & ((IData)(0x7fU) 
                                          + ((IData)(vlSelfRef.bf16_block16__DOT__n1401_q1) 
                                             + (1U 
                                                & (bf16_block16__DOT__n1399 
                                                   >> 0x18U)))));
    bf16_block16__DOT__n1339 = (0x3ffffffU & ((0U != 
                                               (0xffffU 
                                                & (bf16_block16__DOT__n1331 
                                                   >> 0xaU)))
                                               ? bf16_block16__DOT__n1331
                                               : (bf16_block16__DOT__n1331 
                                                  << 0x10U)));
    bf16_block16__DOT__n396 = ((IData)(bf16_block16__DOT__n17) 
                               | (IData)(bf16_block16__DOT__n22));
    bf16_block16__DOT__n403 = ((IData)(bf16_block16__DOT__n42) 
                               | (IData)(bf16_block16__DOT__n46));
    bf16_block16__DOT__n410 = ((IData)(bf16_block16__DOT__n66) 
                               | (IData)(bf16_block16__DOT__n70));
    bf16_block16__DOT__n417 = ((IData)(bf16_block16__DOT__n90) 
                               | (IData)(bf16_block16__DOT__n94));
    bf16_block16__DOT__n424 = ((IData)(bf16_block16__DOT__n114) 
                               | (IData)(bf16_block16__DOT__n118));
    bf16_block16__DOT__n431 = ((IData)(bf16_block16__DOT__n138) 
                               | (IData)(bf16_block16__DOT__n142));
    bf16_block16__DOT__n438 = ((IData)(bf16_block16__DOT__n162) 
                               | (IData)(bf16_block16__DOT__n166));
    bf16_block16__DOT__n445 = ((IData)(bf16_block16__DOT__n186) 
                               | (IData)(bf16_block16__DOT__n190));
    bf16_block16__DOT__n452 = ((IData)(bf16_block16__DOT__n210) 
                               | (IData)(bf16_block16__DOT__n214));
    bf16_block16__DOT__n459 = ((IData)(bf16_block16__DOT__n234) 
                               | (IData)(bf16_block16__DOT__n238));
    bf16_block16__DOT__n466 = ((IData)(bf16_block16__DOT__n258) 
                               | (IData)(bf16_block16__DOT__n262));
    bf16_block16__DOT__n473 = ((IData)(bf16_block16__DOT__n282) 
                               | (IData)(bf16_block16__DOT__n286));
    bf16_block16__DOT__n480 = ((IData)(bf16_block16__DOT__n306) 
                               | (IData)(bf16_block16__DOT__n310));
    bf16_block16__DOT__n487 = ((IData)(bf16_block16__DOT__n330) 
                               | (IData)(bf16_block16__DOT__n334));
    bf16_block16__DOT__n494 = ((IData)(bf16_block16__DOT__n354) 
                               | (IData)(bf16_block16__DOT__n358));
    bf16_block16__DOT__n501 = ((IData)(bf16_block16__DOT__n378) 
                               | (IData)(bf16_block16__DOT__n382));
    bf16_block16__DOT__n642 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n598), (IData)(bf16_block16__DOT__n640))
                                ? (IData)(bf16_block16__DOT__n640)
                                : (IData)(bf16_block16__DOT__n598));
    bf16_block16__DOT__n728 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n684), (IData)(bf16_block16__DOT__n726))
                                ? (IData)(bf16_block16__DOT__n726)
                                : (IData)(bf16_block16__DOT__n684));
    bf16_block16__DOT__n816 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n772), (IData)(bf16_block16__DOT__n814))
                                ? (IData)(bf16_block16__DOT__n814)
                                : (IData)(bf16_block16__DOT__n772));
    bf16_block16__DOT__n902 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n858), (IData)(bf16_block16__DOT__n900))
                                ? (IData)(bf16_block16__DOT__n900)
                                : (IData)(bf16_block16__DOT__n858));
    vlSelfRef.y = ((IData)(vlSelfRef.bf16_block16__DOT__n548_q4)
                    ? 0x7fc00000U : ((IData)(vlSelfRef.bf16_block16__DOT__n512_q4)
                                      ? 0x7f800000U
                                      : ((IData)(vlSelfRef.bf16_block16__DOT__n546_q4)
                                          ? 0xff800000U
                                          : ((IData)(vlSelfRef.bf16_block16__DOT__n1327_q1)
                                              ? 0U : 
                                             (((IData)(vlSelfRef.bf16_block16__DOT__n1328_q1) 
                                               << 0x1fU) 
                                              | (((VL_LTES_III(11, 0xffU, (IData)(bf16_block16__DOT__n1405))
                                                    ? 0xffU
                                                    : 
                                                   ((0x800000U 
                                                     & bf16_block16__DOT__n1409)
                                                     ? 
                                                    (0xffU 
                                                     & (IData)(bf16_block16__DOT__n1405))
                                                     : 0U)) 
                                                  << 0x17U) 
                                                 | (VL_LTES_III(11, 0xffU, (IData)(bf16_block16__DOT__n1405))
                                                     ? 0U
                                                     : 
                                                    (0x7fffffU 
                                                     & bf16_block16__DOT__n1409))))))));
    bf16_block16__DOT__n1347 = (0x3ffffffU & ((0U != 
                                               (0xffU 
                                                & (bf16_block16__DOT__n1339 
                                                   >> 0x12U)))
                                               ? bf16_block16__DOT__n1339
                                               : (bf16_block16__DOT__n1339 
                                                  << 8U)));
    vlSelfRef.bf16_block16__DOT__n546 = (((IData)(bf16_block16__DOT__n396) 
                                          & (IData)(vlSelfRef.bf16_block16__DOT__n399)) 
                                         | (((IData)(bf16_block16__DOT__n403) 
                                             & (IData)(vlSelfRef.bf16_block16__DOT__n406)) 
                                            | (((IData)(bf16_block16__DOT__n410) 
                                                & (IData)(vlSelfRef.bf16_block16__DOT__n413)) 
                                               | (((IData)(bf16_block16__DOT__n417) 
                                                   & (IData)(vlSelfRef.bf16_block16__DOT__n420)) 
                                                  | (((IData)(bf16_block16__DOT__n424) 
                                                      & (IData)(vlSelfRef.bf16_block16__DOT__n427)) 
                                                     | (((IData)(bf16_block16__DOT__n431) 
                                                         & (IData)(vlSelfRef.bf16_block16__DOT__n434)) 
                                                        | (((IData)(bf16_block16__DOT__n438) 
                                                            & (IData)(vlSelfRef.bf16_block16__DOT__n441)) 
                                                           | (((IData)(bf16_block16__DOT__n445) 
                                                               & (IData)(vlSelfRef.bf16_block16__DOT__n448)) 
                                                              | (((IData)(bf16_block16__DOT__n452) 
                                                                  & (IData)(vlSelfRef.bf16_block16__DOT__n455)) 
                                                                 | (((IData)(bf16_block16__DOT__n459) 
                                                                     & (IData)(vlSelfRef.bf16_block16__DOT__n462)) 
                                                                    | (((IData)(bf16_block16__DOT__n466) 
                                                                        & (IData)(vlSelfRef.bf16_block16__DOT__n469)) 
                                                                       | (((IData)(bf16_block16__DOT__n473) 
                                                                           & (IData)(vlSelfRef.bf16_block16__DOT__n476)) 
                                                                          | (((IData)(bf16_block16__DOT__n480) 
                                                                              & (IData)(vlSelfRef.bf16_block16__DOT__n483)) 
                                                                             | (((IData)(bf16_block16__DOT__n487) 
                                                                                & (IData)(vlSelfRef.bf16_block16__DOT__n490)) 
                                                                                | (((IData)(bf16_block16__DOT__n494) 
                                                                                & (IData)(vlSelfRef.bf16_block16__DOT__n497)) 
                                                                                | (((IData)(bf16_block16__DOT__n501) 
                                                                                & (IData)(vlSelfRef.bf16_block16__DOT__n504)) 
                                                                                | ((IData)(bf16_block16__DOT__n508) 
                                                                                & (vlSelfRef.c 
                                                                                >> 0x1fU))))))))))))))))));
    vlSelfRef.bf16_block16__DOT__n512 = (((~ (IData)(vlSelfRef.bf16_block16__DOT__n399)) 
                                          & (IData)(bf16_block16__DOT__n396)) 
                                         | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n406)) 
                                             & (IData)(bf16_block16__DOT__n403)) 
                                            | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n413)) 
                                                & (IData)(bf16_block16__DOT__n410)) 
                                               | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n420)) 
                                                   & (IData)(bf16_block16__DOT__n417)) 
                                                  | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n427)) 
                                                      & (IData)(bf16_block16__DOT__n424)) 
                                                     | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n434)) 
                                                         & (IData)(bf16_block16__DOT__n431)) 
                                                        | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n441)) 
                                                            & (IData)(bf16_block16__DOT__n438)) 
                                                           | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n448)) 
                                                               & (IData)(bf16_block16__DOT__n445)) 
                                                              | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n455)) 
                                                                  & (IData)(bf16_block16__DOT__n452)) 
                                                                 | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n462)) 
                                                                     & (IData)(bf16_block16__DOT__n459)) 
                                                                    | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n469)) 
                                                                        & (IData)(bf16_block16__DOT__n466)) 
                                                                       | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n476)) 
                                                                           & (IData)(bf16_block16__DOT__n473)) 
                                                                          | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n483)) 
                                                                              & (IData)(bf16_block16__DOT__n480)) 
                                                                             | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n490)) 
                                                                                & (IData)(bf16_block16__DOT__n487)) 
                                                                                | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n497)) 
                                                                                & (IData)(bf16_block16__DOT__n494)) 
                                                                                | (((~ (IData)(vlSelfRef.bf16_block16__DOT__n504)) 
                                                                                & (IData)(bf16_block16__DOT__n501)) 
                                                                                | ((~ 
                                                                                (vlSelfRef.c 
                                                                                >> 0x1fU)) 
                                                                                & (IData)(bf16_block16__DOT__n508))))))))))))))))));
    bf16_block16__DOT__n730 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n642), (IData)(bf16_block16__DOT__n728))
                                ? (IData)(bf16_block16__DOT__n728)
                                : (IData)(bf16_block16__DOT__n642));
    bf16_block16__DOT__n904 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n816), (IData)(bf16_block16__DOT__n902))
                                ? (IData)(bf16_block16__DOT__n902)
                                : (IData)(bf16_block16__DOT__n816));
    bf16_block16__DOT__n1355 = (0x3ffffffU & ((0U != 
                                               (0xfU 
                                                & (bf16_block16__DOT__n1347 
                                                   >> 0x16U)))
                                               ? bf16_block16__DOT__n1347
                                               : (bf16_block16__DOT__n1347 
                                                  << 4U)));
    vlSelfRef.bf16_block16__DOT__n548 = ((IData)(((0x7f80U 
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
                                            | ((((IData)(bf16_block16__DOT__n17) 
                                                 & (IData)(
                                                           (0U 
                                                            == 
                                                            (0x7fffU 
                                                             & (IData)(vlSelfRef.b0))))) 
                                                | ((IData)(bf16_block16__DOT__n22) 
                                                   & (IData)(
                                                             (0U 
                                                              == 
                                                              (0x7fffU 
                                                               & (IData)(vlSelfRef.a0)))))) 
                                               | ((IData)(
                                                          ((0x7f80U 
                                                            == 
                                                            (0x7f80U 
                                                             & (IData)(vlSelfRef.a1))) 
                                                           & (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (IData)(vlSelfRef.a1))))) 
                                                  | ((IData)(
                                                             ((0x7f80U 
                                                               == 
                                                               (0x7f80U 
                                                                & (IData)(vlSelfRef.b1))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelfRef.b1))))) 
                                                     | (((IData)(bf16_block16__DOT__n42) 
                                                         & (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x7fffU 
                                                                     & (IData)(vlSelfRef.b1))))) 
                                                        | (((IData)(bf16_block16__DOT__n46) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (0x7fffU 
                                                                        & (IData)(vlSelfRef.a1))))) 
                                                           | ((IData)(
                                                                      ((0x7f80U 
                                                                        == 
                                                                        (0x7f80U 
                                                                         & (IData)(vlSelfRef.a2))) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fU 
                                                                           & (IData)(vlSelfRef.a2))))) 
                                                              | ((IData)(
                                                                         ((0x7f80U 
                                                                           == 
                                                                           (0x7f80U 
                                                                            & (IData)(vlSelfRef.b2))) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x7fU 
                                                                              & (IData)(vlSelfRef.b2))))) 
                                                                 | (((IData)(bf16_block16__DOT__n66) 
                                                                     & (IData)(
                                                                               (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b2))))) 
                                                                    | (((IData)(bf16_block16__DOT__n70) 
                                                                        & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a2))))) 
                                                                       | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a3))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a3))))) 
                                                                          | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b3))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b3))))) 
                                                                             | (((IData)(bf16_block16__DOT__n90) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b3))))) 
                                                                                | (((IData)(bf16_block16__DOT__n94) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a3))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a4))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a4))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b4))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b4))))) 
                                                                                | (((IData)(bf16_block16__DOT__n114) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b4))))) 
                                                                                | (((IData)(bf16_block16__DOT__n118) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a4))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a5))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a5))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b5))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b5))))) 
                                                                                | (((IData)(bf16_block16__DOT__n138) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b5))))) 
                                                                                | (((IData)(bf16_block16__DOT__n142) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a5))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a6))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a6))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b6))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b6))))) 
                                                                                | (((IData)(bf16_block16__DOT__n162) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b6))))) 
                                                                                | (((IData)(bf16_block16__DOT__n166) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a6))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a7))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a7))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b7))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b7))))) 
                                                                                | (((IData)(bf16_block16__DOT__n186) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b7))))) 
                                                                                | (((IData)(bf16_block16__DOT__n190) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a7))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a8))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a8))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b8))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b8))))) 
                                                                                | (((IData)(bf16_block16__DOT__n210) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b8))))) 
                                                                                | (((IData)(bf16_block16__DOT__n214) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a8))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a9))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a9))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b9))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b9))))) 
                                                                                | (((IData)(bf16_block16__DOT__n234) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b9))))) 
                                                                                | (((IData)(bf16_block16__DOT__n238) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a9))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a10))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a10))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b10))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b10))))) 
                                                                                | (((IData)(bf16_block16__DOT__n258) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b10))))) 
                                                                                | (((IData)(bf16_block16__DOT__n262) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a10))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a11))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a11))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b11))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b11))))) 
                                                                                | (((IData)(bf16_block16__DOT__n282) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b11))))) 
                                                                                | (((IData)(bf16_block16__DOT__n286) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a11))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a12))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a12))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b12))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b12))))) 
                                                                                | (((IData)(bf16_block16__DOT__n306) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b12))))) 
                                                                                | (((IData)(bf16_block16__DOT__n310) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a12))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a13))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a13))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b13))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b13))))) 
                                                                                | (((IData)(bf16_block16__DOT__n330) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b13))))) 
                                                                                | (((IData)(bf16_block16__DOT__n334) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a13))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a14))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a14))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b14))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b14))))) 
                                                                                | (((IData)(bf16_block16__DOT__n354) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b14))))) 
                                                                                | (((IData)(bf16_block16__DOT__n358) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a14))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.a15))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.a15))))) 
                                                                                | ((IData)(
                                                                                ((0x7f80U 
                                                                                == 
                                                                                (0x7f80U 
                                                                                & (IData)(vlSelfRef.b15))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelfRef.b15))))) 
                                                                                | (((IData)(bf16_block16__DOT__n378) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.b15))))) 
                                                                                | (((IData)(bf16_block16__DOT__n382) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(vlSelfRef.a15))))) 
                                                                                | ((IData)(
                                                                                ((0x7f800000U 
                                                                                == 
                                                                                (0x7f800000U 
                                                                                & vlSelfRef.c)) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.c)))) 
                                                                                | ((IData)(vlSelfRef.bf16_block16__DOT__n512) 
                                                                                & (IData)(vlSelfRef.bf16_block16__DOT__n546))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    bf16_block16__DOT__n906 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n730), (IData)(bf16_block16__DOT__n904))
                                ? (IData)(bf16_block16__DOT__n904)
                                : (IData)(bf16_block16__DOT__n730));
    bf16_block16__DOT__n1363 = (0x3ffffffU & ((0U != 
                                               (3U 
                                                & (bf16_block16__DOT__n1355 
                                                   >> 0x18U)))
                                               ? bf16_block16__DOT__n1355
                                               : (bf16_block16__DOT__n1355 
                                                  << 2U)));
    vlSelfRef.bf16_block16__DOT__n917 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n906), (IData)(vlSelfRef.bf16_block16__DOT__n915_q1))
                                          ? (IData)(vlSelfRef.bf16_block16__DOT__n915_q1)
                                          : (IData)(bf16_block16__DOT__n906));
    vlSelfRef.bf16_block16__DOT__n1370 = (0x3ffffffU 
                                          & ((0x2000000U 
                                              & bf16_block16__DOT__n1363)
                                              ? bf16_block16__DOT__n1363
                                              : (bf16_block16__DOT__n1363 
                                                 << 1U)));
    bf16_block16__DOT__n918 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                         - (IData)(vlSelfRef.bf16_block16__DOT__n576_q1)));
    bf16_block16__DOT__n943 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                         - (IData)(vlSelfRef.bf16_block16__DOT__n596_q1)));
    bf16_block16__DOT__n967 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                         - (IData)(vlSelfRef.bf16_block16__DOT__n618_q1)));
    bf16_block16__DOT__n990 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                         - (IData)(vlSelfRef.bf16_block16__DOT__n638_q1)));
    bf16_block16__DOT__n1015 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n662_q1)));
    bf16_block16__DOT__n1038 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n682_q1)));
    bf16_block16__DOT__n1062 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n704_q1)));
    bf16_block16__DOT__n1085 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n724_q1)));
    bf16_block16__DOT__n1111 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n750_q1)));
    bf16_block16__DOT__n1134 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n770_q1)));
    bf16_block16__DOT__n1158 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n792_q1)));
    bf16_block16__DOT__n1181 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n812_q1)));
    bf16_block16__DOT__n1206 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n836_q1)));
    bf16_block16__DOT__n1229 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n856_q1)));
    bf16_block16__DOT__n1253 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n878_q1)));
    bf16_block16__DOT__n1276 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n898_q1)));
    bf16_block16__DOT__n1304 = (0x7ffU & ((IData)(vlSelfRef.bf16_block16__DOT__n917) 
                                          - (IData)(vlSelfRef.bf16_block16__DOT__n915_q1)));
    vlSelfRef.bf16_block16__DOT__n1378 = (0x7ffU & 
                                          ((IData)(7U) 
                                           + ((IData)(vlSelfRef.bf16_block16__DOT__n917_q2) 
                                              - (0x3fU 
                                                 & (((0U 
                                                      != 
                                                      (0xffffU 
                                                       & (bf16_block16__DOT__n1331 
                                                          >> 0xaU)))
                                                      ? 0U
                                                      : 0x10U) 
                                                    + 
                                                    (((0U 
                                                       != 
                                                       (0xffU 
                                                        & (bf16_block16__DOT__n1339 
                                                           >> 0x12U)))
                                                       ? 0U
                                                       : 8U) 
                                                     + 
                                                     (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (bf16_block16__DOT__n1347 
                                                            >> 0x16U)))
                                                        ? 0U
                                                        : 4U) 
                                                      + 
                                                      (((0U 
                                                         != 
                                                         (3U 
                                                          & (bf16_block16__DOT__n1355 
                                                             >> 0x18U)))
                                                         ? 0U
                                                         : 2U) 
                                                       + 
                                                       (((0x2000000U 
                                                          & bf16_block16__DOT__n1363)
                                                          ? 0U
                                                          : 1U) 
                                                        + 
                                                        ((0x2000000U 
                                                          & vlSelfRef.bf16_block16__DOT__n1370)
                                                          ? 0U
                                                          : 1U))))))))));
    bf16_block16__DOT__n919 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                         ((IData)(vlSelfRef.bf16_block16__DOT__n556_q1) 
                                                          << 4U), (IData)(bf16_block16__DOT__n918)));
    bf16_block16__DOT__n944 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                         ((IData)(vlSelfRef.bf16_block16__DOT__n583_q1) 
                                                          << 4U), (IData)(bf16_block16__DOT__n943)));
    bf16_block16__DOT__n968 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                         ((IData)(vlSelfRef.bf16_block16__DOT__n605_q1) 
                                                          << 4U), (IData)(bf16_block16__DOT__n967)));
    bf16_block16__DOT__n991 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                         ((IData)(vlSelfRef.bf16_block16__DOT__n625_q1) 
                                                          << 4U), (IData)(bf16_block16__DOT__n990)));
    bf16_block16__DOT__n1016 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n649_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1015)));
    bf16_block16__DOT__n1039 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n669_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1038)));
    bf16_block16__DOT__n1063 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n691_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1062)));
    bf16_block16__DOT__n1086 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n711_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1085)));
    bf16_block16__DOT__n1112 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n737_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1111)));
    bf16_block16__DOT__n1135 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n757_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1134)));
    bf16_block16__DOT__n1159 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n779_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1158)));
    bf16_block16__DOT__n1182 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n799_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1181)));
    bf16_block16__DOT__n1207 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n823_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1206)));
    bf16_block16__DOT__n1230 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n843_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1229)));
    bf16_block16__DOT__n1254 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n865_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1253)));
    bf16_block16__DOT__n1277 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          ((IData)(vlSelfRef.bf16_block16__DOT__n885_q1) 
                                                           << 4U), (IData)(bf16_block16__DOT__n1276)));
    bf16_block16__DOT__n1305 = (0x1fffffU & VL_SHIFTR_III(21,21,11, 
                                                          (0x7ffffU 
                                                           & (vlSelfRef.bf16_block16__DOT__n909_q1 
                                                              >> 5U)), (IData)(bf16_block16__DOT__n1304)));
    vlSelfRef.bf16_block16__DOT__n938 = (0x1fffffU 
                                         & (bf16_block16__DOT__n919 
                                            + (1U & 
                                               (VL_SHIFTR_III(22,22,11, 
                                                              ((IData)(vlSelfRef.bf16_block16__DOT__n556_q1) 
                                                               << 5U), (IData)(bf16_block16__DOT__n918)) 
                                                & ((0U 
                                                    != 
                                                    ((~ 
                                                      (0xfffffU 
                                                       & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n918)) 
                                                          >> 1U))) 
                                                     & ((~ 
                                                         VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n918))) 
                                                        & ((IData)(vlSelfRef.bf16_block16__DOT__n556_q1) 
                                                           << 4U)))) 
                                                   | bf16_block16__DOT__n919)))));
    vlSelfRef.bf16_block16__DOT__n961 = (0x1fffffU 
                                         & (bf16_block16__DOT__n944 
                                            + (1U & 
                                               (VL_SHIFTR_III(22,22,11, 
                                                              ((IData)(vlSelfRef.bf16_block16__DOT__n583_q1) 
                                                               << 5U), (IData)(bf16_block16__DOT__n943)) 
                                                & ((0U 
                                                    != 
                                                    ((~ 
                                                      (0xfffffU 
                                                       & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n943)) 
                                                          >> 1U))) 
                                                     & ((~ 
                                                         VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n943))) 
                                                        & ((IData)(vlSelfRef.bf16_block16__DOT__n583_q1) 
                                                           << 4U)))) 
                                                   | bf16_block16__DOT__n944)))));
    vlSelfRef.bf16_block16__DOT__n985 = (0x1fffffU 
                                         & (bf16_block16__DOT__n968 
                                            + (1U & 
                                               (VL_SHIFTR_III(22,22,11, 
                                                              ((IData)(vlSelfRef.bf16_block16__DOT__n605_q1) 
                                                               << 5U), (IData)(bf16_block16__DOT__n967)) 
                                                & ((0U 
                                                    != 
                                                    ((~ 
                                                      (0xfffffU 
                                                       & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n967)) 
                                                          >> 1U))) 
                                                     & ((~ 
                                                         VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n967))) 
                                                        & ((IData)(vlSelfRef.bf16_block16__DOT__n605_q1) 
                                                           << 4U)))) 
                                                   | bf16_block16__DOT__n968)))));
    vlSelfRef.bf16_block16__DOT__n1008 = (0x1fffffU 
                                          & (bf16_block16__DOT__n991 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n625_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n990)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n990)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n990))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n625_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n991)))));
    vlSelfRef.bf16_block16__DOT__n1033 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1016 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n649_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1015)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1015)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1015))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n649_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1016)))));
    vlSelfRef.bf16_block16__DOT__n1056 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1039 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n669_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1038)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1038)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1038))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n669_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1039)))));
    vlSelfRef.bf16_block16__DOT__n1080 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1063 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n691_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1062)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1062)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1062))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n691_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1063)))));
    vlSelfRef.bf16_block16__DOT__n1103 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1086 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n711_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1085)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1085)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1085))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n711_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1086)))));
    vlSelfRef.bf16_block16__DOT__n1129 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1112 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n737_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1111)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1111)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1111))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n737_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1112)))));
    vlSelfRef.bf16_block16__DOT__n1152 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1135 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n757_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1134)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1134)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1134))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n757_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1135)))));
    vlSelfRef.bf16_block16__DOT__n1176 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1159 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n779_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1158)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1158)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1158))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n779_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1159)))));
    vlSelfRef.bf16_block16__DOT__n1199 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1182 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n799_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1181)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1181)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1181))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n799_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1182)))));
    vlSelfRef.bf16_block16__DOT__n1224 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1207 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n823_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1206)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1206)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1206))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n823_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1207)))));
    vlSelfRef.bf16_block16__DOT__n1247 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1230 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n843_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1229)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1229)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1229))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n843_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1230)))));
    vlSelfRef.bf16_block16__DOT__n1271 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1254 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n865_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1253)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1253)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1253))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n865_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1254)))));
    vlSelfRef.bf16_block16__DOT__n1294 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1277 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 ((IData)(vlSelfRef.bf16_block16__DOT__n885_q1) 
                                                                  << 5U), (IData)(bf16_block16__DOT__n1276)) 
                                                   & ((0U 
                                                       != 
                                                       ((~ 
                                                         (0xfffffU 
                                                          & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1276)) 
                                                             >> 1U))) 
                                                        & ((~ 
                                                            VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1276))) 
                                                           & ((IData)(vlSelfRef.bf16_block16__DOT__n885_q1) 
                                                              << 4U)))) 
                                                      | bf16_block16__DOT__n1277)))));
    vlSelfRef.bf16_block16__DOT__n1322 = (0x1fffffU 
                                          & (bf16_block16__DOT__n1305 
                                             + (1U 
                                                & (VL_SHIFTR_III(22,22,11, 
                                                                 (0xffffeU 
                                                                  & (vlSelfRef.bf16_block16__DOT__n909_q1 
                                                                     >> 4U)), (IData)(bf16_block16__DOT__n1304)) 
                                                   & ((0U 
                                                       != 
                                                       (0x7ffffU 
                                                        & ((~ 
                                                            (0xfffffU 
                                                             & (VL_SHIFTL_III(21,21,11, (IData)(1U), (IData)(bf16_block16__DOT__n1304)) 
                                                                >> 1U))) 
                                                           & ((~ 
                                                               VL_SHIFTL_III(21,21,11, (IData)(0x1fffffU), (IData)(bf16_block16__DOT__n1304))) 
                                                              & (vlSelfRef.bf16_block16__DOT__n909_q1 
                                                                 >> 5U))))) 
                                                      | bf16_block16__DOT__n1305)))));
}

VL_ATTR_COLD void Vbf16_block16___024root___eval_triggers__stl(Vbf16_block16___024root* vlSelf);

VL_ATTR_COLD bool Vbf16_block16___024root___eval_phase__stl(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_phase__stl\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbf16_block16___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbf16_block16___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__ico(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___dump_triggers__ico\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__act(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___dump_triggers__act\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__nba(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___dump_triggers__nba\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vbf16_block16___024root___ctor_var_reset(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___ctor_var_reset\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->a0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17342812819118991936ull);
    vlSelf->a1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17885462169741112028ull);
    vlSelf->a2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2614162857933103900ull);
    vlSelf->a3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2758676961508079676ull);
    vlSelf->a4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1985867967009588997ull);
    vlSelf->a5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9154821861950601134ull);
    vlSelf->a6 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10275555240725186213ull);
    vlSelf->a7 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16498823296492773955ull);
    vlSelf->a8 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1821884981173182555ull);
    vlSelf->a9 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9887155711810070422ull);
    vlSelf->a10 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4942205671202721281ull);
    vlSelf->a11 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5263312398584485408ull);
    vlSelf->a12 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3938786888076500960ull);
    vlSelf->a13 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10914575994480946928ull);
    vlSelf->a14 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14356740599032853008ull);
    vlSelf->a15 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18108892461343585544ull);
    vlSelf->b0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15891990269507976644ull);
    vlSelf->b1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16050357274486017748ull);
    vlSelf->b2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8412398208942691600ull);
    vlSelf->b3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9377779122467165115ull);
    vlSelf->b4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7246164745960296139ull);
    vlSelf->b5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16377028568749940244ull);
    vlSelf->b6 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14407531545784276477ull);
    vlSelf->b7 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9702966278811937196ull);
    vlSelf->b8 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 273807994031914316ull);
    vlSelf->b9 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5236408669641042259ull);
    vlSelf->b10 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15140739210359568334ull);
    vlSelf->b11 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5856559541728353947ull);
    vlSelf->b12 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16481250480450847976ull);
    vlSelf->b13 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14403509503649839638ull);
    vlSelf->b14 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5769270359014281075ull);
    vlSelf->b15 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10252314640721899398ull);
    vlSelf->c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15598372446745583797ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11123243248953317070ull);
    vlSelf->bf16_block16__DOT__n399 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5450453003444440271ull);
    vlSelf->bf16_block16__DOT__n406 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12029324451001453005ull);
    vlSelf->bf16_block16__DOT__n413 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7596263143224860707ull);
    vlSelf->bf16_block16__DOT__n420 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16855201944011576295ull);
    vlSelf->bf16_block16__DOT__n427 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4102595898905531856ull);
    vlSelf->bf16_block16__DOT__n434 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 60570817384795066ull);
    vlSelf->bf16_block16__DOT__n441 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4026345854488357320ull);
    vlSelf->bf16_block16__DOT__n448 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8935310702837902932ull);
    vlSelf->bf16_block16__DOT__n455 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14917063109298795886ull);
    vlSelf->bf16_block16__DOT__n462 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1449467648393952169ull);
    vlSelf->bf16_block16__DOT__n469 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4960894906757041908ull);
    vlSelf->bf16_block16__DOT__n476 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6013862556775484267ull);
    vlSelf->bf16_block16__DOT__n483 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14721278769212841577ull);
    vlSelf->bf16_block16__DOT__n490 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14276901890781876792ull);
    vlSelf->bf16_block16__DOT__n497 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14750436007855664306ull);
    vlSelf->bf16_block16__DOT__n504 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8130788818656977471ull);
    vlSelf->bf16_block16__DOT__n512 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2331330800328524652ull);
    vlSelf->bf16_block16__DOT__n546 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12105697438412105873ull);
    vlSelf->bf16_block16__DOT__n548 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4172099137750558899ull);
    vlSelf->bf16_block16__DOT__n551 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11241998719342236061ull);
    vlSelf->bf16_block16__DOT__n554 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6276998941766112987ull);
    vlSelf->bf16_block16__DOT__n556 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2949361791832992131ull);
    vlSelf->bf16_block16__DOT__n556_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15436713219891980494ull);
    vlSelf->bf16_block16__DOT__n578 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9750616456018369459ull);
    vlSelf->bf16_block16__DOT__n581 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12727257536758151295ull);
    vlSelf->bf16_block16__DOT__n583 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11470128740255570960ull);
    vlSelf->bf16_block16__DOT__n576_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6339938694978925335ull);
    vlSelf->bf16_block16__DOT__n596_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9611788406710669462ull);
    vlSelf->bf16_block16__DOT__n600 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12687043822901332239ull);
    vlSelf->bf16_block16__DOT__n603 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9298894113668183290ull);
    vlSelf->bf16_block16__DOT__n605 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17523902414892028566ull);
    vlSelf->bf16_block16__DOT__n620 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3436041541966281940ull);
    vlSelf->bf16_block16__DOT__n623 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 494654298545472815ull);
    vlSelf->bf16_block16__DOT__n625 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9418678656333337744ull);
    vlSelf->bf16_block16__DOT__n618_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18092105823031769152ull);
    vlSelf->bf16_block16__DOT__n638_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7424337232303019674ull);
    vlSelf->bf16_block16__DOT__n644 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13805325944444078341ull);
    vlSelf->bf16_block16__DOT__n647 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11519275044215625263ull);
    vlSelf->bf16_block16__DOT__n649 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12022098947153042869ull);
    vlSelf->bf16_block16__DOT__n664 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17807496555894637353ull);
    vlSelf->bf16_block16__DOT__n667 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17720554557169430927ull);
    vlSelf->bf16_block16__DOT__n669 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17454955548425673544ull);
    vlSelf->bf16_block16__DOT__n662_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7066384052605791537ull);
    vlSelf->bf16_block16__DOT__n682_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9283220899040009164ull);
    vlSelf->bf16_block16__DOT__n686 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10805146394046692844ull);
    vlSelf->bf16_block16__DOT__n689 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5588793876685948908ull);
    vlSelf->bf16_block16__DOT__n691 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5732227991144394043ull);
    vlSelf->bf16_block16__DOT__n706 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11494299748374283616ull);
    vlSelf->bf16_block16__DOT__n709 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15935951882123600434ull);
    vlSelf->bf16_block16__DOT__n711 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1018942127963887301ull);
    vlSelf->bf16_block16__DOT__n704_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7183542406154552059ull);
    vlSelf->bf16_block16__DOT__n724_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8865526201441219183ull);
    vlSelf->bf16_block16__DOT__n732 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15503853892561498727ull);
    vlSelf->bf16_block16__DOT__n735 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1151162264070698853ull);
    vlSelf->bf16_block16__DOT__n737 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11030546718146549546ull);
    vlSelf->bf16_block16__DOT__n752 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13029985098436799603ull);
    vlSelf->bf16_block16__DOT__n755 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12669524002222745819ull);
    vlSelf->bf16_block16__DOT__n757 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11826397744380327818ull);
    vlSelf->bf16_block16__DOT__n750_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11873348771987947978ull);
    vlSelf->bf16_block16__DOT__n770_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2866270245239537182ull);
    vlSelf->bf16_block16__DOT__n774 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8123038851039538157ull);
    vlSelf->bf16_block16__DOT__n777 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13103760382737845887ull);
    vlSelf->bf16_block16__DOT__n779 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1785747649709610865ull);
    vlSelf->bf16_block16__DOT__n794 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10025328415494714683ull);
    vlSelf->bf16_block16__DOT__n797 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8255491218100869277ull);
    vlSelf->bf16_block16__DOT__n799 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14785146793361552198ull);
    vlSelf->bf16_block16__DOT__n792_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9966429677701978925ull);
    vlSelf->bf16_block16__DOT__n812_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12072631301348801283ull);
    vlSelf->bf16_block16__DOT__n818 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11647803990642292009ull);
    vlSelf->bf16_block16__DOT__n821 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5160977182941553604ull);
    vlSelf->bf16_block16__DOT__n823 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8137763377786098688ull);
    vlSelf->bf16_block16__DOT__n838 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9986999565653277321ull);
    vlSelf->bf16_block16__DOT__n841 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17373311081304840663ull);
    vlSelf->bf16_block16__DOT__n843 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3437053809701996119ull);
    vlSelf->bf16_block16__DOT__n836_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10499807483057944212ull);
    vlSelf->bf16_block16__DOT__n856_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4473534104094869248ull);
    vlSelf->bf16_block16__DOT__n860 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6488393088294982901ull);
    vlSelf->bf16_block16__DOT__n863 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10680433103000190413ull);
    vlSelf->bf16_block16__DOT__n865 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1637641539374152495ull);
    vlSelf->bf16_block16__DOT__n880 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 616474063304262955ull);
    vlSelf->bf16_block16__DOT__n883 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1735529055343123011ull);
    vlSelf->bf16_block16__DOT__n885 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9570689057922535932ull);
    vlSelf->bf16_block16__DOT__n878_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12490593754453720982ull);
    vlSelf->bf16_block16__DOT__n898_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6084851807128648047ull);
    vlSelf->bf16_block16__DOT__n909 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16864617130215309874ull);
    vlSelf->bf16_block16__DOT__n915_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16460350643687446837ull);
    vlSelf->bf16_block16__DOT__n917 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5052851549951494319ull);
    vlSelf->bf16_block16__DOT__n938 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4265064722608874505ull);
    vlSelf->bf16_block16__DOT__n399_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17935803718713474026ull);
    vlSelf->bf16_block16__DOT__n583_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11838462837598417155ull);
    vlSelf->bf16_block16__DOT__n961 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 17962904165048859606ull);
    vlSelf->bf16_block16__DOT__n406_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12795613204255363534ull);
    vlSelf->bf16_block16__DOT__n940_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4315487781098679014ull);
    vlSelf->bf16_block16__DOT__n963_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4025408167586703702ull);
    vlSelf->bf16_block16__DOT__n605_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14006716892928527001ull);
    vlSelf->bf16_block16__DOT__n985 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12859883442513502139ull);
    vlSelf->bf16_block16__DOT__n413_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12843091247898372745ull);
    vlSelf->bf16_block16__DOT__n625_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9899298612659390410ull);
    vlSelf->bf16_block16__DOT__n1008 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13821899134946115342ull);
    vlSelf->bf16_block16__DOT__n420_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2331700270551511863ull);
    vlSelf->bf16_block16__DOT__n987_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10143724348569896436ull);
    vlSelf->bf16_block16__DOT__n1010_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3609562731607213814ull);
    vlSelf->bf16_block16__DOT__n649_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5501653838137789440ull);
    vlSelf->bf16_block16__DOT__n1033 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 15485869021829787676ull);
    vlSelf->bf16_block16__DOT__n427_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13555384907418784941ull);
    vlSelf->bf16_block16__DOT__n669_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14430179087062723169ull);
    vlSelf->bf16_block16__DOT__n1056 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 789013455387985852ull);
    vlSelf->bf16_block16__DOT__n434_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7529954887456412426ull);
    vlSelf->bf16_block16__DOT__n1035_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12888581735652985551ull);
    vlSelf->bf16_block16__DOT__n1058_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 15922658948519296530ull);
    vlSelf->bf16_block16__DOT__n691_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1630270011948757756ull);
    vlSelf->bf16_block16__DOT__n1080 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 18282070154727565940ull);
    vlSelf->bf16_block16__DOT__n441_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17442234553667001343ull);
    vlSelf->bf16_block16__DOT__n711_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4679099567164831540ull);
    vlSelf->bf16_block16__DOT__n1103 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12252226486334030635ull);
    vlSelf->bf16_block16__DOT__n448_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8636874386055167885ull);
    vlSelf->bf16_block16__DOT__n1082_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 2796441561392196439ull);
    vlSelf->bf16_block16__DOT__n1105_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 1513459509922139872ull);
    vlSelf->bf16_block16__DOT__n737_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12039404364153505459ull);
    vlSelf->bf16_block16__DOT__n1129 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3079626114570063898ull);
    vlSelf->bf16_block16__DOT__n455_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12975488431832341183ull);
    vlSelf->bf16_block16__DOT__n757_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1950623077358183783ull);
    vlSelf->bf16_block16__DOT__n1152 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 15754269230209554712ull);
    vlSelf->bf16_block16__DOT__n462_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3811545530846676900ull);
    vlSelf->bf16_block16__DOT__n1131_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14143784598983337061ull);
    vlSelf->bf16_block16__DOT__n1154_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5118194393484869491ull);
    vlSelf->bf16_block16__DOT__n779_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16134024574861481733ull);
    vlSelf->bf16_block16__DOT__n1176 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10711022423449963551ull);
    vlSelf->bf16_block16__DOT__n469_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9256757038797943530ull);
    vlSelf->bf16_block16__DOT__n799_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17022725510457518716ull);
    vlSelf->bf16_block16__DOT__n1199 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10055958426628319086ull);
    vlSelf->bf16_block16__DOT__n476_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8984607330354448117ull);
    vlSelf->bf16_block16__DOT__n1178_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 9812519220452313875ull);
    vlSelf->bf16_block16__DOT__n1201_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4639000986454568628ull);
    vlSelf->bf16_block16__DOT__n823_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12142676153155922381ull);
    vlSelf->bf16_block16__DOT__n1224 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 11252295192652391241ull);
    vlSelf->bf16_block16__DOT__n483_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9442810303641120707ull);
    vlSelf->bf16_block16__DOT__n843_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5551093728454034995ull);
    vlSelf->bf16_block16__DOT__n1247 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 17910373062234325220ull);
    vlSelf->bf16_block16__DOT__n490_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2544834566671045609ull);
    vlSelf->bf16_block16__DOT__n1226_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 1884044553226388940ull);
    vlSelf->bf16_block16__DOT__n1249_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5353201456933847475ull);
    vlSelf->bf16_block16__DOT__n865_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16102712551181044581ull);
    vlSelf->bf16_block16__DOT__n1271 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12427611557358016241ull);
    vlSelf->bf16_block16__DOT__n497_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12183046161411076107ull);
    vlSelf->bf16_block16__DOT__n885_q1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5363940275558487217ull);
    vlSelf->bf16_block16__DOT__n1294 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 9990486473770492390ull);
    vlSelf->bf16_block16__DOT__n504_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14718240229377014630ull);
    vlSelf->bf16_block16__DOT__n1273_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13653478287821149755ull);
    vlSelf->bf16_block16__DOT__n1296_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 7574640259155135806ull);
    vlSelf->bf16_block16__DOT__n909_q1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10468344817710972103ull);
    vlSelf->bf16_block16__DOT__n1322 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14913011689386559193ull);
    vlSelf->bf16_block16__DOT__n509_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5234020299073675705ull);
    vlSelf->bf16_block16__DOT__n1324_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 826527218856605948ull);
    vlSelf->bf16_block16__DOT__n1325_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 16068763141383812067ull);
    vlSelf->bf16_block16__DOT__n1370 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 7269801623700906333ull);
    vlSelf->bf16_block16__DOT__n917_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17081518137989947944ull);
    vlSelf->bf16_block16__DOT__n917_q2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16754044805016587679ull);
    vlSelf->bf16_block16__DOT__n1378 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8057010417069124840ull);
    vlSelf->bf16_block16__DOT__n1389_q1 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6461624660704715922ull);
    vlSelf->bf16_block16__DOT__n1401_q1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15356212088297954058ull);
    vlSelf->bf16_block16__DOT__n1328_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8154329119238236376ull);
    vlSelf->bf16_block16__DOT__n1327_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5666089516559873356ull);
    vlSelf->bf16_block16__DOT__n546_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5259309211195915108ull);
    vlSelf->bf16_block16__DOT__n546_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4759306514577539767ull);
    vlSelf->bf16_block16__DOT__n546_q3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7084948866748422781ull);
    vlSelf->bf16_block16__DOT__n546_q4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3017879229038103868ull);
    vlSelf->bf16_block16__DOT__n512_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17193267496264889360ull);
    vlSelf->bf16_block16__DOT__n512_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7281357088871724001ull);
    vlSelf->bf16_block16__DOT__n512_q3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7431920806381678470ull);
    vlSelf->bf16_block16__DOT__n512_q4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1586675858104752753ull);
    vlSelf->bf16_block16__DOT__n548_q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13217335521342172241ull);
    vlSelf->bf16_block16__DOT__n548_q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6741240177942141749ull);
    vlSelf->bf16_block16__DOT__n548_q3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 159587415231964587ull);
    vlSelf->bf16_block16__DOT__n548_q4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16930688297323593986ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
}
