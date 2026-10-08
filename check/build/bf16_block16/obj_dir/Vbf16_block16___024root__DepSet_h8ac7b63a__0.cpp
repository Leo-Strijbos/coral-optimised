// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbf16_block16.h for the primary calling header

#include "Vbf16_block16__pch.h"
#include "Vbf16_block16___024root.h"

void Vbf16_block16___024root___ico_sequent__TOP__0(Vbf16_block16___024root* vlSelf);

void Vbf16_block16___024root___eval_ico(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_ico\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbf16_block16___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbf16_block16___024root___ico_sequent__TOP__0(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___ico_sequent__TOP__0\n"); );
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
}

void Vbf16_block16___024root___eval_triggers__ico(Vbf16_block16___024root* vlSelf);

bool Vbf16_block16___024root___eval_phase__ico(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_phase__ico\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbf16_block16___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbf16_block16___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbf16_block16___024root___eval_act(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_act\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbf16_block16___024root___nba_sequent__TOP__0(Vbf16_block16___024root* vlSelf);

void Vbf16_block16___024root___eval_nba(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_nba\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbf16_block16___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbf16_block16___024root___nba_sequent__TOP__0(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___nba_sequent__TOP__0\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    vlSelfRef.bf16_block16__DOT__n909_q1 = vlSelfRef.bf16_block16__DOT__n909;
    vlSelfRef.bf16_block16__DOT__n556_q1 = vlSelfRef.bf16_block16__DOT__n556;
    vlSelfRef.bf16_block16__DOT__n583_q1 = vlSelfRef.bf16_block16__DOT__n583;
    vlSelfRef.bf16_block16__DOT__n605_q1 = vlSelfRef.bf16_block16__DOT__n605;
    vlSelfRef.bf16_block16__DOT__n625_q1 = vlSelfRef.bf16_block16__DOT__n625;
    vlSelfRef.bf16_block16__DOT__n649_q1 = vlSelfRef.bf16_block16__DOT__n649;
    vlSelfRef.bf16_block16__DOT__n669_q1 = vlSelfRef.bf16_block16__DOT__n669;
    vlSelfRef.bf16_block16__DOT__n691_q1 = vlSelfRef.bf16_block16__DOT__n691;
    vlSelfRef.bf16_block16__DOT__n711_q1 = vlSelfRef.bf16_block16__DOT__n711;
    vlSelfRef.bf16_block16__DOT__n737_q1 = vlSelfRef.bf16_block16__DOT__n737;
    vlSelfRef.bf16_block16__DOT__n757_q1 = vlSelfRef.bf16_block16__DOT__n757;
    vlSelfRef.bf16_block16__DOT__n779_q1 = vlSelfRef.bf16_block16__DOT__n779;
    vlSelfRef.bf16_block16__DOT__n799_q1 = vlSelfRef.bf16_block16__DOT__n799;
    vlSelfRef.bf16_block16__DOT__n823_q1 = vlSelfRef.bf16_block16__DOT__n823;
    vlSelfRef.bf16_block16__DOT__n843_q1 = vlSelfRef.bf16_block16__DOT__n843;
    vlSelfRef.bf16_block16__DOT__n865_q1 = vlSelfRef.bf16_block16__DOT__n865;
    vlSelfRef.bf16_block16__DOT__n885_q1 = vlSelfRef.bf16_block16__DOT__n885;
    if (VL_GTS_III(11, 0x782U, (IData)(vlSelfRef.bf16_block16__DOT__n1378))) {
        vlSelfRef.bf16_block16__DOT__n1401_q1 = 0x782U;
        vlSelfRef.bf16_block16__DOT__n1389_q1 = (0x3ffffffU 
                                                 & (VL_SHIFTR_III(26,26,11, vlSelfRef.bf16_block16__DOT__n1370, 
                                                                  (0x7ffU 
                                                                   & ((IData)(0x782U) 
                                                                      - (IData)(vlSelfRef.bf16_block16__DOT__n1378)))) 
                                                    | (0U 
                                                       != 
                                                       ((~ 
                                                         VL_SHIFTL_III(26,26,11, (IData)(0x3ffffffU), 
                                                                       (0x7ffU 
                                                                        & ((IData)(0x782U) 
                                                                           - (IData)(vlSelfRef.bf16_block16__DOT__n1378))))) 
                                                        & vlSelfRef.bf16_block16__DOT__n1370))));
    } else {
        vlSelfRef.bf16_block16__DOT__n1401_q1 = vlSelfRef.bf16_block16__DOT__n1378;
        vlSelfRef.bf16_block16__DOT__n1389_q1 = (0x3ffffffU 
                                                 & vlSelfRef.bf16_block16__DOT__n1370);
    }
    vlSelfRef.bf16_block16__DOT__n548_q4 = vlSelfRef.bf16_block16__DOT__n548_q3;
    vlSelfRef.bf16_block16__DOT__n546_q4 = vlSelfRef.bf16_block16__DOT__n546_q3;
    vlSelfRef.bf16_block16__DOT__n512_q4 = vlSelfRef.bf16_block16__DOT__n512_q3;
    vlSelfRef.bf16_block16__DOT__n917_q2 = vlSelfRef.bf16_block16__DOT__n917_q1;
    vlSelfRef.bf16_block16__DOT__n915_q1 = ((0U == vlSelfRef.bf16_block16__DOT__n909)
                                             ? 0x702U
                                             : ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelfRef.c 
                                                     >> 0x17U)))
                                                 ? 0x782U
                                                 : 
                                                (0x7ffU 
                                                 & ((0xffU 
                                                     & (vlSelfRef.c 
                                                        >> 0x17U)) 
                                                    - (IData)(0x7fU)))));
    vlSelfRef.bf16_block16__DOT__n576_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n556))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n551))
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
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n554))
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
    vlSelfRef.bf16_block16__DOT__n596_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n583))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n578))
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
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n581))
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
    vlSelfRef.bf16_block16__DOT__n618_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n605))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n600))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a2) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a2) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n603))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b2) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b2) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n638_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n625))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n620))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a3) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a3) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n623))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b3) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b3) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n662_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n649))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n644))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a4) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a4) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n647))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b4) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b4) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n682_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n669))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n664))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a5) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a5) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n667))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b5) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b5) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n704_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n691))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n686))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a6) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a6) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n689))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b6) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b6) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n724_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n711))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n706))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a7) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a7) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n709))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b7) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b7) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n750_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n737))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n732))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a8) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a8) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n735))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b8) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b8) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n770_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n757))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n752))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a9) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a9) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n755))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b9) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b9) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n792_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n779))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n774))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a10) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a10) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n777))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b10) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b10) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n812_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n799))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n794))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a11) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a11) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n797))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b11) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b11) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n836_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n823))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n818))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a12) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a12) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n821))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b12) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b12) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n856_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n843))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n838))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a13) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a13) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n841))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b13) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b13) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n878_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n865))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n860))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a14) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a14) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n863))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b14) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b14) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n898_q1 = ((0U == (IData)(vlSelfRef.bf16_block16__DOT__n885))
                                             ? 0x702U
                                             : (0x7ffU 
                                                & (((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n880))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.a15) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.a15) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))) 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.bf16_block16__DOT__n883))
                                                     ? 0x702U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.b15) 
                                                          >> 7U)))
                                                      ? 0x782U
                                                      : 
                                                     ((0xffU 
                                                       & ((IData)(vlSelfRef.b15) 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU)))))));
    vlSelfRef.bf16_block16__DOT__n1328_q1 = (1U & (vlSelfRef.bf16_block16__DOT__n1325_q1 
                                                   >> 0x19U));
    vlSelfRef.bf16_block16__DOT__n1327_q1 = (0U == vlSelfRef.bf16_block16__DOT__n1325_q1);
    bf16_block16__DOT__n1399 = (0x1ffffffU & ((0xffffffU 
                                               & (vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                  >> 2U)) 
                                              + (1U 
                                                 & ((vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                     >> 1U) 
                                                    & (vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                       | (vlSelfRef.bf16_block16__DOT__n1389_q1 
                                                          >> 2U))))));
    vlSelfRef.bf16_block16__DOT__n548_q3 = vlSelfRef.bf16_block16__DOT__n548_q2;
    vlSelfRef.bf16_block16__DOT__n546_q3 = vlSelfRef.bf16_block16__DOT__n546_q2;
    vlSelfRef.bf16_block16__DOT__n512_q3 = vlSelfRef.bf16_block16__DOT__n512_q2;
    vlSelfRef.bf16_block16__DOT__n917_q1 = vlSelfRef.bf16_block16__DOT__n917;
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
    vlSelfRef.bf16_block16__DOT__n1325_q1 = (0x3ffffffU 
                                             & (vlSelfRef.bf16_block16__DOT__n940_q1 
                                                + (vlSelfRef.bf16_block16__DOT__n963_q1 
                                                   + 
                                                   (vlSelfRef.bf16_block16__DOT__n1010_q1 
                                                    + 
                                                    (vlSelfRef.bf16_block16__DOT__n987_q1 
                                                     + 
                                                     (vlSelfRef.bf16_block16__DOT__n1035_q1 
                                                      + 
                                                      (vlSelfRef.bf16_block16__DOT__n1058_q1 
                                                       + 
                                                       ((vlSelfRef.bf16_block16__DOT__n1082_q1 
                                                         + vlSelfRef.bf16_block16__DOT__n1105_q1) 
                                                        + 
                                                        (vlSelfRef.bf16_block16__DOT__n1131_q1 
                                                         + 
                                                         (vlSelfRef.bf16_block16__DOT__n1154_q1 
                                                          + 
                                                          (vlSelfRef.bf16_block16__DOT__n1178_q1 
                                                           + 
                                                           (vlSelfRef.bf16_block16__DOT__n1201_q1 
                                                            + 
                                                            (vlSelfRef.bf16_block16__DOT__n1226_q1 
                                                             + 
                                                             (vlSelfRef.bf16_block16__DOT__n1249_q1 
                                                              + 
                                                              (vlSelfRef.bf16_block16__DOT__n1273_q1 
                                                               + 
                                                               (vlSelfRef.bf16_block16__DOT__n1296_q1 
                                                                + vlSelfRef.bf16_block16__DOT__n1324_q1))))))))))))))));
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
    vlSelfRef.bf16_block16__DOT__n548_q2 = vlSelfRef.bf16_block16__DOT__n548_q1;
    vlSelfRef.bf16_block16__DOT__n546_q2 = vlSelfRef.bf16_block16__DOT__n546_q1;
    vlSelfRef.bf16_block16__DOT__n512_q2 = vlSelfRef.bf16_block16__DOT__n512_q1;
    bf16_block16__DOT__n730 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n642), (IData)(bf16_block16__DOT__n728))
                                ? (IData)(bf16_block16__DOT__n728)
                                : (IData)(bf16_block16__DOT__n642));
    bf16_block16__DOT__n904 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n816), (IData)(bf16_block16__DOT__n902))
                                ? (IData)(bf16_block16__DOT__n902)
                                : (IData)(bf16_block16__DOT__n816));
    vlSelfRef.bf16_block16__DOT__n1324_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n509_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1322)
                                                 : vlSelfRef.bf16_block16__DOT__n1322));
    bf16_block16__DOT__n1331 = (0x3ffffffU & ((0x2000000U 
                                               & vlSelfRef.bf16_block16__DOT__n1325_q1)
                                               ? (- vlSelfRef.bf16_block16__DOT__n1325_q1)
                                               : vlSelfRef.bf16_block16__DOT__n1325_q1));
    vlSelfRef.bf16_block16__DOT__n940_q1 = (0x3ffffffU 
                                            & ((IData)(vlSelfRef.bf16_block16__DOT__n399_q1)
                                                ? (- vlSelfRef.bf16_block16__DOT__n938)
                                                : vlSelfRef.bf16_block16__DOT__n938));
    vlSelfRef.bf16_block16__DOT__n963_q1 = (0x3ffffffU 
                                            & ((IData)(vlSelfRef.bf16_block16__DOT__n406_q1)
                                                ? (- vlSelfRef.bf16_block16__DOT__n961)
                                                : vlSelfRef.bf16_block16__DOT__n961));
    vlSelfRef.bf16_block16__DOT__n1010_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n420_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1008)
                                                 : vlSelfRef.bf16_block16__DOT__n1008));
    vlSelfRef.bf16_block16__DOT__n987_q1 = (0x3ffffffU 
                                            & ((IData)(vlSelfRef.bf16_block16__DOT__n413_q1)
                                                ? (- vlSelfRef.bf16_block16__DOT__n985)
                                                : vlSelfRef.bf16_block16__DOT__n985));
    vlSelfRef.bf16_block16__DOT__n1035_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n427_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1033)
                                                 : vlSelfRef.bf16_block16__DOT__n1033));
    vlSelfRef.bf16_block16__DOT__n1058_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n434_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1056)
                                                 : vlSelfRef.bf16_block16__DOT__n1056));
    vlSelfRef.bf16_block16__DOT__n1082_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n441_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1080)
                                                 : vlSelfRef.bf16_block16__DOT__n1080));
    vlSelfRef.bf16_block16__DOT__n1105_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n448_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1103)
                                                 : vlSelfRef.bf16_block16__DOT__n1103));
    vlSelfRef.bf16_block16__DOT__n1131_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n455_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1129)
                                                 : vlSelfRef.bf16_block16__DOT__n1129));
    vlSelfRef.bf16_block16__DOT__n1154_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n462_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1152)
                                                 : vlSelfRef.bf16_block16__DOT__n1152));
    vlSelfRef.bf16_block16__DOT__n1178_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n469_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1176)
                                                 : vlSelfRef.bf16_block16__DOT__n1176));
    vlSelfRef.bf16_block16__DOT__n1201_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n476_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1199)
                                                 : vlSelfRef.bf16_block16__DOT__n1199));
    vlSelfRef.bf16_block16__DOT__n1226_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n483_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1224)
                                                 : vlSelfRef.bf16_block16__DOT__n1224));
    vlSelfRef.bf16_block16__DOT__n1249_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n490_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1247)
                                                 : vlSelfRef.bf16_block16__DOT__n1247));
    vlSelfRef.bf16_block16__DOT__n1273_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n497_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1271)
                                                 : vlSelfRef.bf16_block16__DOT__n1271));
    vlSelfRef.bf16_block16__DOT__n1296_q1 = (0x3ffffffU 
                                             & ((IData)(vlSelfRef.bf16_block16__DOT__n504_q1)
                                                 ? 
                                                (- vlSelfRef.bf16_block16__DOT__n1294)
                                                 : vlSelfRef.bf16_block16__DOT__n1294));
    bf16_block16__DOT__n906 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n730), (IData)(bf16_block16__DOT__n904))
                                ? (IData)(bf16_block16__DOT__n904)
                                : (IData)(bf16_block16__DOT__n730));
    bf16_block16__DOT__n1339 = (0x3ffffffU & ((0U != 
                                               (0xffffU 
                                                & (bf16_block16__DOT__n1331 
                                                   >> 0xaU)))
                                               ? bf16_block16__DOT__n1331
                                               : (bf16_block16__DOT__n1331 
                                                  << 0x10U)));
    vlSelfRef.bf16_block16__DOT__n548_q1 = vlSelfRef.bf16_block16__DOT__n548;
    vlSelfRef.bf16_block16__DOT__n546_q1 = vlSelfRef.bf16_block16__DOT__n546;
    vlSelfRef.bf16_block16__DOT__n512_q1 = vlSelfRef.bf16_block16__DOT__n512;
    vlSelfRef.bf16_block16__DOT__n917 = (VL_LTS_III(11, (IData)(bf16_block16__DOT__n906), (IData)(vlSelfRef.bf16_block16__DOT__n915_q1))
                                          ? (IData)(vlSelfRef.bf16_block16__DOT__n915_q1)
                                          : (IData)(bf16_block16__DOT__n906));
    vlSelfRef.bf16_block16__DOT__n509_q1 = (vlSelfRef.c 
                                            >> 0x1fU);
    bf16_block16__DOT__n1347 = (0x3ffffffU & ((0U != 
                                               (0xffU 
                                                & (bf16_block16__DOT__n1339 
                                                   >> 0x12U)))
                                               ? bf16_block16__DOT__n1339
                                               : (bf16_block16__DOT__n1339 
                                                  << 8U)));
    vlSelfRef.bf16_block16__DOT__n399_q1 = vlSelfRef.bf16_block16__DOT__n399;
    vlSelfRef.bf16_block16__DOT__n406_q1 = vlSelfRef.bf16_block16__DOT__n406;
    vlSelfRef.bf16_block16__DOT__n420_q1 = vlSelfRef.bf16_block16__DOT__n420;
    vlSelfRef.bf16_block16__DOT__n413_q1 = vlSelfRef.bf16_block16__DOT__n413;
    vlSelfRef.bf16_block16__DOT__n427_q1 = vlSelfRef.bf16_block16__DOT__n427;
    vlSelfRef.bf16_block16__DOT__n434_q1 = vlSelfRef.bf16_block16__DOT__n434;
    vlSelfRef.bf16_block16__DOT__n441_q1 = vlSelfRef.bf16_block16__DOT__n441;
    vlSelfRef.bf16_block16__DOT__n448_q1 = vlSelfRef.bf16_block16__DOT__n448;
    vlSelfRef.bf16_block16__DOT__n455_q1 = vlSelfRef.bf16_block16__DOT__n455;
    vlSelfRef.bf16_block16__DOT__n462_q1 = vlSelfRef.bf16_block16__DOT__n462;
    vlSelfRef.bf16_block16__DOT__n469_q1 = vlSelfRef.bf16_block16__DOT__n469;
    vlSelfRef.bf16_block16__DOT__n476_q1 = vlSelfRef.bf16_block16__DOT__n476;
    vlSelfRef.bf16_block16__DOT__n483_q1 = vlSelfRef.bf16_block16__DOT__n483;
    vlSelfRef.bf16_block16__DOT__n490_q1 = vlSelfRef.bf16_block16__DOT__n490;
    vlSelfRef.bf16_block16__DOT__n497_q1 = vlSelfRef.bf16_block16__DOT__n497;
    vlSelfRef.bf16_block16__DOT__n504_q1 = vlSelfRef.bf16_block16__DOT__n504;
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
    bf16_block16__DOT__n1355 = (0x3ffffffU & ((0U != 
                                               (0xfU 
                                                & (bf16_block16__DOT__n1347 
                                                   >> 0x16U)))
                                               ? bf16_block16__DOT__n1347
                                               : (bf16_block16__DOT__n1347 
                                                  << 4U)));
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
    bf16_block16__DOT__n1363 = (0x3ffffffU & ((0U != 
                                               (3U 
                                                & (bf16_block16__DOT__n1355 
                                                   >> 0x18U)))
                                               ? bf16_block16__DOT__n1355
                                               : (bf16_block16__DOT__n1355 
                                                  << 2U)));
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
    vlSelfRef.bf16_block16__DOT__n1370 = (0x3ffffffU 
                                          & ((0x2000000U 
                                              & bf16_block16__DOT__n1363)
                                              ? bf16_block16__DOT__n1363
                                              : (bf16_block16__DOT__n1363 
                                                 << 1U)));
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
}

void Vbf16_block16___024root___eval_triggers__act(Vbf16_block16___024root* vlSelf);

bool Vbf16_block16___024root___eval_phase__act(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_phase__act\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbf16_block16___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbf16_block16___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbf16_block16___024root___eval_phase__nba(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_phase__nba\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbf16_block16___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__ico(Vbf16_block16___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__nba(Vbf16_block16___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbf16_block16___024root___dump_triggers__act(Vbf16_block16___024root* vlSelf);
#endif  // VL_DEBUG

void Vbf16_block16___024root___eval(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbf16_block16___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/after/bf16_block16.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbf16_block16___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbf16_block16___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/after/bf16_block16.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbf16_block16___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/after/bf16_block16.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbf16_block16___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbf16_block16___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbf16_block16___024root___eval_debug_assertions(Vbf16_block16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbf16_block16___024root___eval_debug_assertions\n"); );
    Vbf16_block16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
