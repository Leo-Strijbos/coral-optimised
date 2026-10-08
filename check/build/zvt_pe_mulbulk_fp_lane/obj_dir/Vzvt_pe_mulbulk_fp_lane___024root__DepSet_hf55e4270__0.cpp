// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzvt_pe_mulbulk_fp_lane.h for the primary calling header

#include "Vzvt_pe_mulbulk_fp_lane__pch.h"
#include "Vzvt_pe_mulbulk_fp_lane___024root.h"

void Vzvt_pe_mulbulk_fp_lane___024root___ico_sequent__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);

void Vzvt_pe_mulbulk_fp_lane___024root___eval_ico(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_ico\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vzvt_pe_mulbulk_fp_lane___024root___ico_sequent__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___ico_sequent__TOP__0\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0000_;
    zvt_pe_mulbulk_fp_lane__DOT___0000_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0011_;
    zvt_pe_mulbulk_fp_lane__DOT___0011_ = 0;
    IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT___0040_;
    zvt_pe_mulbulk_fp_lane__DOT___0040_ = 0;
    CData/*3:0*/ zvt_pe_mulbulk_fp_lane__DOT___0042_;
    zvt_pe_mulbulk_fp_lane__DOT___0042_ = 0;
    SData/*9:0*/ zvt_pe_mulbulk_fp_lane__DOT___0046_;
    zvt_pe_mulbulk_fp_lane__DOT___0046_ = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT___0048_;
    zvt_pe_mulbulk_fp_lane__DOT___0048_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0050_;
    zvt_pe_mulbulk_fp_lane__DOT___0050_ = 0;
    CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0051_;
    zvt_pe_mulbulk_fp_lane__DOT___0051_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0059_;
    zvt_pe_mulbulk_fp_lane__DOT___0059_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0114_;
    zvt_pe_mulbulk_fp_lane__DOT___0114_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0138_;
    zvt_pe_mulbulk_fp_lane__DOT___0138_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0345_;
    zvt_pe_mulbulk_fp_lane__DOT___0345_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0384_;
    zvt_pe_mulbulk_fp_lane__DOT___0384_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0385_;
    zvt_pe_mulbulk_fp_lane__DOT___0385_ = 0;
    CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0392_;
    zvt_pe_mulbulk_fp_lane__DOT___0392_ = 0;
    CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0413_;
    zvt_pe_mulbulk_fp_lane__DOT___0413_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0425_;
    zvt_pe_mulbulk_fp_lane__DOT___0425_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0466_;
    zvt_pe_mulbulk_fp_lane__DOT___0466_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0475_;
    zvt_pe_mulbulk_fp_lane__DOT___0475_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0515_;
    zvt_pe_mulbulk_fp_lane__DOT___0515_ = 0;
    IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT___0535_;
    zvt_pe_mulbulk_fp_lane__DOT___0535_ = 0;
    CData/*5:0*/ zvt_pe_mulbulk_fp_lane__DOT___0537_;
    zvt_pe_mulbulk_fp_lane__DOT___0537_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0545_;
    zvt_pe_mulbulk_fp_lane__DOT___0545_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0546_;
    zvt_pe_mulbulk_fp_lane__DOT___0546_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0554_;
    zvt_pe_mulbulk_fp_lane__DOT___0554_ = 0;
    SData/*9:0*/ zvt_pe_mulbulk_fp_lane__DOT___0594_;
    zvt_pe_mulbulk_fp_lane__DOT___0594_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0604_;
    zvt_pe_mulbulk_fp_lane__DOT___0604_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0618_;
    zvt_pe_mulbulk_fp_lane__DOT___0618_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0631_;
    zvt_pe_mulbulk_fp_lane__DOT___0631_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0638_;
    zvt_pe_mulbulk_fp_lane__DOT___0638_ = 0;
    IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT___0690_;
    zvt_pe_mulbulk_fp_lane__DOT___0690_ = 0;
    CData/*3:0*/ zvt_pe_mulbulk_fp_lane__DOT___0692_;
    zvt_pe_mulbulk_fp_lane__DOT___0692_ = 0;
    CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT___0695_;
    zvt_pe_mulbulk_fp_lane__DOT___0695_ = 0;
    SData/*9:0*/ zvt_pe_mulbulk_fp_lane__DOT___0697_;
    zvt_pe_mulbulk_fp_lane__DOT___0697_ = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT___0699_;
    zvt_pe_mulbulk_fp_lane__DOT___0699_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0701_;
    zvt_pe_mulbulk_fp_lane__DOT___0701_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0709_;
    zvt_pe_mulbulk_fp_lane__DOT___0709_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0740_;
    zvt_pe_mulbulk_fp_lane__DOT___0740_ = 0;
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0753_;
    zvt_pe_mulbulk_fp_lane__DOT___0753_ = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT___0868_;
    zvt_pe_mulbulk_fp_lane__DOT___0868_ = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT___0887_;
    zvt_pe_mulbulk_fp_lane__DOT___0887_ = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT___0906_;
    zvt_pe_mulbulk_fp_lane__DOT___0906_ = 0;
    CData/*7:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent = 0;
    IData/*22:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa = 0;
    CData/*5:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix = 0;
    CData/*1:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf_sign;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf_sign = 0;
    CData/*4:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix = 0;
    CData/*4:0*/ zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b1__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix;
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b1__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_1;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_1 = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3 = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17 = 0;
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_23;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_23 = 0;
    SData/*15:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67 = 0;
    IData/*23:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68 = 0;
    IData/*31:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 = 0;
    QData/*47:0*/ zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70;
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_14;
    __VdfgRegularize_h0dff6736_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_17;
    __VdfgRegularize_h0dff6736_0_17 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<20>/*639:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0099_ = 
        ((IData)(vlSelfRef.reg_enable) & (IData)(vlSelfRef.up_valid));
    zvt_pe_mulbulk_fp_lane__DOT___0385_ = ((IData)(vlSelfRef.up_valid) 
                                           & ((IData)(vlSelfRef.mask) 
                                              >> 3U));
    zvt_pe_mulbulk_fp_lane__DOT___0638_ = ((IData)(vlSelfRef.up_valid) 
                                           & ((IData)(vlSelfRef.mask) 
                                              >> 1U));
    zvt_pe_mulbulk_fp_lane__DOT___0114_ = ((IData)(vlSelfRef.up_valid) 
                                           & ((IData)(vlSelfRef.mask) 
                                              >> 2U));
    zvt_pe_mulbulk_fp_lane__DOT___0000_ = ((IData)(vlSelfRef.up_valid) 
                                           & (IData)(vlSelfRef.mask));
    if (zvt_pe_mulbulk_fp_lane__DOT___0385_) {
        zvt_pe_mulbulk_fp_lane__DOT___0413_ = (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.operands 
                                                          >> 0x38U)));
        zvt_pe_mulbulk_fp_lane__DOT___0392_ = (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.operands 
                                                          >> 0x18U)));
    } else {
        zvt_pe_mulbulk_fp_lane__DOT___0413_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___0392_ = 0U;
    }
    if (zvt_pe_mulbulk_fp_lane__DOT___0638_) {
        zvt_pe_mulbulk_fp_lane__DOT___0051_ = (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.operands 
                                                          >> 0x28U)));
        zvt_pe_mulbulk_fp_lane__DOT___0695_ = (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.operands 
                                                          >> 8U)));
    } else {
        zvt_pe_mulbulk_fp_lane__DOT___0051_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___0695_ = 0U;
    }
    if (zvt_pe_mulbulk_fp_lane__DOT___0114_) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_ 
            = (0xffU & (IData)((vlSelfRef.operands 
                                >> 0x30U)));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_ 
            = (0xffU & (IData)((vlSelfRef.operands 
                                >> 0x10U)));
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_ = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_ = 0U;
    }
    if (zvt_pe_mulbulk_fp_lane__DOT___0000_) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_ 
            = (0xffU & (IData)((vlSelfRef.operands 
                                >> 0x20U)));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_ 
            = (0xffU & (IData)(vlSelfRef.operands));
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_ = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_ = 0U;
    }
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_ = 
        (1U & (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0392_) 
                ^ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0413_)) 
               >> 7U));
    zvt_pe_mulbulk_fp_lane__DOT___0466_ = (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))));
    __VdfgRegularize_h0dff6736_0_14 = (IData)((0U != 
                                               (0x3fU 
                                                & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_ = 
        (1U & (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_) 
                ^ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_)) 
               >> 7U));
    zvt_pe_mulbulk_fp_lane__DOT___0345_ = (IData)((0U 
                                                   != 
                                                   (0xc0U 
                                                    & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))));
    __VdfgRegularize_h0dff6736_0_17 = (IData)((0U != 
                                               (0x3fU 
                                                & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))));
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent 
        = ((0xfeU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0413_) 
                     << 1U)) | (1U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_) 
                                      >> 7U)));
    zvt_pe_mulbulk_fp_lane__DOT___0515_ = (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))));
    zvt_pe_mulbulk_fp_lane__DOT___0475_ = (IData)((0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))));
    zvt_pe_mulbulk_fp_lane__DOT___0425_ = (IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))));
    zvt_pe_mulbulk_fp_lane__DOT___0384_ = (IData)((0U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67 
        = (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_) 
            << 8U) | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_));
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf_sign 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
            << 1U) | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0750_ = 
        ((0U != (0x7fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))) 
         & (0xffU == (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent)));
    zvt_pe_mulbulk_fp_lane__DOT___0753_ = ((~ (0U != 
                                               (0x7fU 
                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_)))) 
                                           & (0xffU 
                                              == (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent)));
    zvt_pe_mulbulk_fp_lane__DOT___0011_ = (1U & (IData)(
                                                        ((0U 
                                                          != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent)) 
                                                         | (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0601_ = (IData)(
                                                            ((0x7f80U 
                                                              == 
                                                              (0x7f80U 
                                                               & (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67))) 
                                                             & (0U 
                                                                != 
                                                                (0x7fU 
                                                                 & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_)))));
    zvt_pe_mulbulk_fp_lane__DOT___0604_ = (IData)((
                                                   (0x7f80U 
                                                    == 
                                                    (0x7f80U 
                                                     & (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67))) 
                                                   & (~ 
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))))));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_) 
            << 0x10U) | (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
        = (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0392_) 
            << 0x18U) | zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68);
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_ = 
        (0xffffU & ((((0U != (0xffU & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                       >> 0x17U))) 
                      << 7U) | (0x7fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))) 
                    * (((0U != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent)) 
                        << 7U) | (0x7fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0518_ = (IData)(
                                                            ((0x7f800000U 
                                                              == 
                                                              (0x7f800000U 
                                                               & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0736_ = (IData)(
                                                            ((0x7f800000U 
                                                              == 
                                                              (0x7f800000U 
                                                               & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fU 
                                                                 & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_)))));
    zvt_pe_mulbulk_fp_lane__DOT___0545_ = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69)) 
                                                   & (~ 
                                                      (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68)))));
    zvt_pe_mulbulk_fp_lane__DOT___0740_ = (IData)((
                                                   (0x7f800000U 
                                                    == 
                                                    (0x7f800000U 
                                                     & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69)) 
                                                   & (~ 
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))))));
    zvt_pe_mulbulk_fp_lane__DOT___0042_ = (0xfU & ((IData)(1U) 
                                                   + 
                                                   (((0U 
                                                      != 
                                                      (0xffU 
                                                       & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                                          >> 0x17U)))
                                                      ? 0U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                        ? 2U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                         ? 3U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                          ? 4U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                           ? 5U
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                            ? 6U
                                                            : 7U))))))) 
                                                    + 
                                                    ((0U 
                                                      != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent))
                                                      ? 0U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                        ? 2U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                         ? 3U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                          ? 4U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                           ? 5U
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                            ? 6U
                                                            : 7U))))))))));
    zvt_pe_mulbulk_fp_lane__DOT___0040_ = ((IData)(1U) 
                                           + (((0xffU 
                                                & ((zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                                    >> 0x17U) 
                                                   + 
                                                   ((~ 
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                                          >> 0x17U)))) 
                                                    & (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_)))))) 
                                               + (0xffU 
                                                  & ((IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent) 
                                                     + 
                                                     ((~ 
                                                       (0U 
                                                        != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent))) 
                                                      & (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))))))) 
                                              - (IData)(0x7fU)));
    zvt_pe_mulbulk_fp_lane__DOT___0138_ = (1U & (IData)(
                                                        ((0U 
                                                          != 
                                                          (0x7f800000U 
                                                           & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69)) 
                                                         | (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))))));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
        = (((QData)((IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_)) 
            << 0x28U) | (((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_)) 
                          << 0x20U) | (QData)((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0761_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0736_) 
         | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0750_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0760_ = 
        (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0740_) 
          & ((~ (0U != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent))) 
             & (~ (0U != (0x7fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_)))))) 
         | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0753_) 
            & ((~ (0U != (0xffU & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                   >> 0x17U)))) & (~ 
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_)))))));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_1 
        = ((0x800U & (zvt_pe_mulbulk_fp_lane__DOT___0040_ 
                      << 2U)) | ((0x400U & (zvt_pe_mulbulk_fp_lane__DOT___0040_ 
                                            << 1U)) 
                                 | (0x3ffU & zvt_pe_mulbulk_fp_lane__DOT___0040_)));
    zvt_pe_mulbulk_fp_lane__DOT___0537_ = (0x3fU & 
                                           ((IData)(1U) 
                                            + (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0138_)
                                                 ? 
                                                ((0U 
                                                  != 
                                                  (0xffU 
                                                   & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                                      >> 0x17U)))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                   ? 1U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                    ? 2U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                     ? 3U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                      ? 4U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                       ? 5U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_))
                                                        ? 6U
                                                        : 7U)))))))
                                                 : 
                                                ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0345_)
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))
                                                   ? 8U
                                                   : 9U)
                                                  : 
                                                 ((IData)(__VdfgRegularize_h0dff6736_0_17)
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0695_))
                                                        ? 0xeU
                                                        : 0xfU)))))
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                    ? 0x10U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                     ? 0x11U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                      ? 0x12U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                       ? 0x13U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                        ? 0x14U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                         ? 0x15U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                          ? 0x16U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                           ? 0x17U
                                                           : 0U))))))))))) 
                                               + ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0011_)
                                                   ? 
                                                  ((0U 
                                                    != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent))
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                     ? 1U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                      ? 2U
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                        ? 4U
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                         ? 5U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0466_)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))
                                                     ? 8U
                                                     : 9U)
                                                    : 
                                                   ((IData)(__VdfgRegularize_h0dff6736_0_14)
                                                     ? 
                                                    ((0x20U 
                                                      & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))
                                                      ? 0xaU
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))
                                                       ? 0xbU
                                                       : 
                                                      ((8U 
                                                        & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))
                                                        ? 0xcU
                                                        : 
                                                       ((4U 
                                                         & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))
                                                         ? 0xdU
                                                         : 
                                                        ((2U 
                                                          & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0051_))
                                                          ? 0xeU
                                                          : 0xfU)))))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                      ? 0x10U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                       ? 0x11U
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                        ? 0x12U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                         ? 0x13U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                          ? 0x14U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                           ? 0x15U
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                            ? 0x16U
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                             ? 0x17U
                                                             : 0U))))))))))))));
    zvt_pe_mulbulk_fp_lane__DOT___0546_ = (1U & (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0138_) 
                                                  | (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0345_) 
                                                      | (IData)(__VdfgRegularize_h0dff6736_0_17)) 
                                                     | ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0xc0U 
                                                                   & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))) 
                                                                 | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0425_))) 
                                                        | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0384_)))) 
                                                 & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0011_) 
                                                    | (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0466_) 
                                                        | (IData)(__VdfgRegularize_h0dff6736_0_14)) 
                                                       | ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0xc0U 
                                                                     & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))) 
                                                                   | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0515_))) 
                                                          | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0475_))))));
    zvt_pe_mulbulk_fp_lane__DOT___0050_ = ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0138_) 
                                           & (IData)(zvt_pe_mulbulk_fp_lane__DOT___0011_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_ = 
        (0xffffU & ((((0U != (0xffU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67) 
                                       >> 7U))) << 7U) 
                     | (0x7fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))) 
                    * (((0U != (0xffU & (IData)((zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
                                                 >> 0x27U)))) 
                        << 7U) | (0x7fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0615_ = (IData)(
                                                            ((0x7f8000000000ULL 
                                                              == 
                                                              (0x7f8000000000ULL 
                                                               & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fU 
                                                                 & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_)))));
    zvt_pe_mulbulk_fp_lane__DOT___0618_ = (IData)((
                                                   (0x7f8000000000ULL 
                                                    == 
                                                    (0x7f8000000000ULL 
                                                     & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70)) 
                                                   & (~ 
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))))));
    zvt_pe_mulbulk_fp_lane__DOT___0692_ = (0xfU & ((IData)(1U) 
                                                   + 
                                                   (((0U 
                                                      != 
                                                      (0xffU 
                                                       & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67) 
                                                          >> 7U)))
                                                      ? 0U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                        ? 2U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                         ? 3U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                          ? 4U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                           ? 5U
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_))
                                                            ? 6U
                                                            : 7U))))))) 
                                                    + 
                                                    ((0U 
                                                      != 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
                                                                  >> 0x27U))))
                                                      ? 0U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                        ? 2U
                                                        : 
                                                       ((0x10U 
                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                         ? 3U
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                          ? 4U
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                           ? 5U
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))
                                                            ? 6U
                                                            : 7U))))))))));
    zvt_pe_mulbulk_fp_lane__DOT___0690_ = ((IData)(1U) 
                                           + (((0xffU 
                                                & (((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67) 
                                                    >> 7U) 
                                                   + 
                                                   ((~ 
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67) 
                                                          >> 7U)))) 
                                                    & (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_)))))) 
                                               + (0xffU 
                                                  & ((IData)(
                                                             (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
                                                              >> 0x27U)) 
                                                     + 
                                                     ((~ 
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
                                                                    >> 0x27U))))) 
                                                      & (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_))))))) 
                                              - (IData)(0x7fU)));
    zvt_pe_mulbulk_fp_lane__DOT___0701_ = (1U & (((
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67) 
                                                        >> 7U))) 
                                                   | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_) 
                                                      >> 6U)) 
                                                  | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0425_) 
                                                     | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0384_))) 
                                                 & (((0U 
                                                      != 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
                                                                  >> 0x27U)))) 
                                                     | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_) 
                                                        >> 6U)) 
                                                    | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0515_) 
                                                       | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0475_)))));
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa 
        = ((0x7f0000U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_) 
                         << 0x10U)) | (0xffffU & (IData)(
                                                         (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
                                                          >> 0x20U))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0627_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0601_) 
         | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0615_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0626_ = 
        (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0604_) 
          & ((~ (0U != (0xffU & (IData)((zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_70 
                                         >> 0x27U))))) 
             & (~ (0U != (0x7fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_)))))) 
         | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0618_) 
            & ((~ (0U != (0xffU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_67) 
                                   >> 7U)))) & (~ (0U 
                                                   != 
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_)))))));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_23 
        = ((0x800U & (zvt_pe_mulbulk_fp_lane__DOT___0690_ 
                      << 2U)) | ((0x400U & (zvt_pe_mulbulk_fp_lane__DOT___0690_ 
                                            << 1U)) 
                                 | (0x3ffU & zvt_pe_mulbulk_fp_lane__DOT___0690_)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_ = 
        (0xffffffffffffULL & ((QData)((IData)((((0U 
                                                 != 
                                                 (0xffU 
                                                  & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                                     >> 0x17U))) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68)))) 
                              * (QData)((IData)((((0U 
                                                   != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent)) 
                                                  << 0x17U) 
                                                 | zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa)))));
    zvt_pe_mulbulk_fp_lane__DOT___0535_ = ((IData)(1U) 
                                           + (((0xffU 
                                                & ((zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                                    >> 0x17U) 
                                                   + 
                                                   ((~ 
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                                          >> 0x17U)))) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68))))) 
                                               + (0xffU 
                                                  & ((IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent) 
                                                     + 
                                                     ((~ 
                                                       (0U 
                                                        != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent))) 
                                                      & (0U 
                                                         != zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa))))) 
                                              - (IData)(0x7fU)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0613_ = 
        ((0U != zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa) 
         & (0xffU == (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent)));
    zvt_pe_mulbulk_fp_lane__DOT___0631_ = ((~ (0U != zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa)) 
                                           & (0xffU 
                                              == (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf 
        = ((2U & ((((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0760_)) 
                    & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0761_))) 
                   & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0740_) 
                      | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0753_))) 
                  << 1U)) | (1U & (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0626_)) 
                                    & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0627_))) 
                                   & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0604_) 
                                      | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0618_)))));
    if (zvt_pe_mulbulk_fp_lane__DOT___0050_) {
        zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b1__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix 
            = zvt_pe_mulbulk_fp_lane__DOT___0042_;
        zvt_pe_mulbulk_fp_lane__DOT___0046_ = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (zvt_pe_mulbulk_fp_lane__DOT___0040_ 
                                                   - (IData)(zvt_pe_mulbulk_fp_lane__DOT___0042_))));
    } else {
        zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b1__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix = 0x10U;
        zvt_pe_mulbulk_fp_lane__DOT___0046_ = (0x3ffU 
                                               & zvt_pe_mulbulk_fp_lane__DOT___0040_);
    }
    if (zvt_pe_mulbulk_fp_lane__DOT___0701_) {
        zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix 
            = zvt_pe_mulbulk_fp_lane__DOT___0692_;
        zvt_pe_mulbulk_fp_lane__DOT___0697_ = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (zvt_pe_mulbulk_fp_lane__DOT___0690_ 
                                                   - (IData)(zvt_pe_mulbulk_fp_lane__DOT___0692_))));
    } else {
        zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix = 0x10U;
        zvt_pe_mulbulk_fp_lane__DOT___0697_ = (0x3ffU 
                                               & zvt_pe_mulbulk_fp_lane__DOT___0690_);
    }
    zvt_pe_mulbulk_fp_lane__DOT___0594_ = (VL_GTS_III(10, (IData)(zvt_pe_mulbulk_fp_lane__DOT___0697_), (IData)(zvt_pe_mulbulk_fp_lane__DOT___0046_))
                                            ? (IData)(zvt_pe_mulbulk_fp_lane__DOT___0697_)
                                            : (IData)(zvt_pe_mulbulk_fp_lane__DOT___0046_));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17 
        = ((0x800U & (zvt_pe_mulbulk_fp_lane__DOT___0535_ 
                      << 2U)) | ((0x400U & (zvt_pe_mulbulk_fp_lane__DOT___0535_ 
                                            << 1U)) 
                                 | (0x3ffU & zvt_pe_mulbulk_fp_lane__DOT___0535_)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0731_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0518_) 
         | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0613_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0729_ = 
        (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0545_) 
          & ((~ (0U != (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_exponent))) 
             & (~ (0U != zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eb_mantissa)))) 
         | ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0631_) 
            & ((~ (0U != (0xffU & (zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_69 
                                   >> 0x17U)))) & (~ 
                                                   (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_68))))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0078_ = 
        (0U != ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf) 
                & (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf_sign)));
    zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3 
        = ((0x800U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                      << 2U)) | ((0x400U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                            << 1U)) 
                                 | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_)));
    zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix 
        = ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0546_)
            ? (IData)(zvt_pe_mulbulk_fp_lane__DOT___0537_)
            : 0x30U);
    zvt_pe_mulbulk_fp_lane__DOT___0554_ = ((~ (1U & 
                                               (((IData)(0x1bU) 
                                                 + 
                                                 ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17) 
                                                  - (IData)(1U))) 
                                                >> 0xbU))) 
                                           & ((0x7fU 
                                               & ((IData)(0x1bU) 
                                                  + 
                                                  ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17) 
                                                   - (IData)(1U)))) 
                                              >= (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix)));
    if (zvt_pe_mulbulk_fp_lane__DOT___0546_) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_ 
            = (1U & VL_GTES_III(12, (0xfffU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17) 
                                               - (IData)(1U))), (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b0__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix)));
        if (zvt_pe_mulbulk_fp_lane__DOT___0546_) {
            if (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_) {
                zvt_pe_mulbulk_fp_lane__DOT___0868_ 
                    = (0xfffU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17) 
                                 - (IData)(zvt_pe_mulbulk_fp_lane__DOT___0537_)));
                vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_ 
                    = (0x7fU & ((IData)(0x1bU) + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0537_)));
            } else {
                zvt_pe_mulbulk_fp_lane__DOT___0868_ = 0U;
                vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_ 
                    = (0x7fU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0546_)
                                 ? ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_)
                                     ? 0U : ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0554_)
                                              ? ((IData)(0x1bU) 
                                                 + 
                                                 ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_17) 
                                                  - (IData)(1U)))
                                              : 0U))
                                 : 0U));
            }
        } else {
            zvt_pe_mulbulk_fp_lane__DOT___0868_ = 0U;
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_ = 0U;
        }
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___0868_ = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_ = 0U;
    }
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0587_ = 
        (1U & (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0729_)) 
                & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0731_))) 
               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0545_) 
                  | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0631_))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0082_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0078_) 
         & (0U != ((~ (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf_sign)) 
                   & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5 
        = ((((((0x80000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                               << 0x16U)) | (0x40000000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                << 0x15U))) 
              | ((0x20000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                 << 0x14U)) | (0x10000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                  << 0x13U)))) 
             | (((0x8000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                << 0x12U)) | (0x4000000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                 << 0x11U))) 
                | ((0x2000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                  << 0x10U)) | (0x1000000U 
                                                & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                   << 0xfU))))) 
            | ((((0x800000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                               << 0xeU)) | (0x400000U 
                                            & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                               << 0xdU))) 
                | ((0x200000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                 << 0xcU)) | (0x100000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                 << 0xbU)))) 
               | (((0x80000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                << 0xaU)) | (0x40000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                << 9U))) 
                  | ((0x20000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                  << 8U)) | (0x10000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                << 7U)))))) 
           | (((0x8000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                           << 6U)) | (0x4000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                                 << 5U))) 
              | ((0x2000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                             << 4U)) | ((0x1000U & 
                                         ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0594_) 
                                          << 3U)) | (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3)))));
    zvt_pe_mulbulk_fp_lane__DOT___0048_ = (0xfffU & 
                                           ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_1) 
                                            - (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3)));
    zvt_pe_mulbulk_fp_lane__DOT___0699_ = (0xfffU & 
                                           ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_23) 
                                            - (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_ = 
        (1U & (~ (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0546_) 
                   & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_))) 
                  & (~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0554_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0577_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0587_) 
         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0084_ = 
        (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0760_) 
          | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0761_)) 
         | (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0626_) 
             | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0627_)) 
            | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0082_)));
    zvt_pe_mulbulk_fp_lane__DOT___0059_ = ((~ (1U & 
                                               (((IData)(0x1bU) 
                                                 + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0048_)) 
                                                >> 0xbU))) 
                                           & ((0x3fU 
                                               & ((IData)(0x1bU) 
                                                  + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0048_))) 
                                              >= (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b1__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix)));
    if (zvt_pe_mulbulk_fp_lane__DOT___0050_) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_ 
            = (1U & VL_GTES_III(12, (IData)(zvt_pe_mulbulk_fp_lane__DOT___0048_), (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b1__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix)));
        if (zvt_pe_mulbulk_fp_lane__DOT___0050_) {
            if (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_) {
                zvt_pe_mulbulk_fp_lane__DOT___0906_ 
                    = (0xfffU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_1) 
                                 - (IData)(zvt_pe_mulbulk_fp_lane__DOT___0042_)));
                vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_ 
                    = (0x3fU & ((IData)(0x1bU) + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0042_)));
            } else {
                zvt_pe_mulbulk_fp_lane__DOT___0906_ 
                    = (0xfffU & (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3));
                vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_ 
                    = (0x3fU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0050_)
                                 ? ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_)
                                     ? 0U : ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0059_)
                                              ? ((IData)(0x1bU) 
                                                 + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0048_))
                                              : 0U))
                                 : 0U));
            }
        } else {
            zvt_pe_mulbulk_fp_lane__DOT___0906_ = (0xfffU 
                                                   & 0U);
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_ = 0U;
        }
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___0906_ = (0xfffU 
                                               & (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_ = 0U;
    }
    zvt_pe_mulbulk_fp_lane__DOT___0709_ = ((~ (1U & 
                                               (((IData)(0x1bU) 
                                                 + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0699_)) 
                                                >> 0xbU))) 
                                           & ((0x3fU 
                                               & ((IData)(0x1bU) 
                                                  + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0699_))) 
                                              >= (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix)));
    if (zvt_pe_mulbulk_fp_lane__DOT___0701_) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_ 
            = (1U & VL_GTES_III(12, (IData)(zvt_pe_mulbulk_fp_lane__DOT___0699_), (IData)(zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02egen_vec__05b0__05d__02eu_mulfront__02eu_align__02elzc_cnt_fix)));
        if (zvt_pe_mulbulk_fp_lane__DOT___0701_) {
            if (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_) {
                zvt_pe_mulbulk_fp_lane__DOT___0887_ 
                    = (0xfffU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_23) 
                                 - (IData)(zvt_pe_mulbulk_fp_lane__DOT___0692_)));
                vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_ 
                    = (0x3fU & ((IData)(0x1bU) + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0692_)));
            } else {
                zvt_pe_mulbulk_fp_lane__DOT___0887_ 
                    = (0xfffU & (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3));
                vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_ 
                    = (0x3fU & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0701_)
                                 ? ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_)
                                     ? 0U : ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0709_)
                                              ? ((IData)(0x1bU) 
                                                 + (IData)(zvt_pe_mulbulk_fp_lane__DOT___0699_))
                                              : 0U))
                                 : 0U));
            }
        } else {
            zvt_pe_mulbulk_fp_lane__DOT___0887_ = (0xfffU 
                                                   & 0U);
            vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_ = 0U;
        }
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_ = 0U;
        zvt_pe_mulbulk_fp_lane__DOT___0887_ = (0xfffU 
                                               & (IData)(zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_3));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_ = 0U;
    }
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22 
        = ((((((0x80000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                               << 0x14U)) | (0x40000000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                                << 0x13U))) 
              | ((0x20000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                 << 0x12U)) | (0x10000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                                  << 0x11U)))) 
             | (((0x8000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                << 0x10U)) | (0x4000000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                                 << 0xfU))) 
                | ((0x2000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                  << 0xeU)) | (0x1000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                                  << 0xdU))))) 
            | ((((0x800000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                               << 0xcU)) | (0x400000U 
                                            & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                               << 0xbU))) 
                | ((0x200000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                 << 0xaU)) | (0x100000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                                 << 9U)))) 
               | (((0x80000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                << 8U)) | (0x40000U 
                                           & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                              << 7U))) 
                  | ((0x20000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                  << 6U)) | (0x10000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                                << 5U)))))) 
           | (((0x8000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                           << 4U)) | (0x4000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                                 << 3U))) 
              | ((0x2000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                             << 2U)) | ((0x1000U & 
                                         ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_) 
                                          << 1U)) | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0868_)))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_);
    __Vtemp_2[1U] = (IData)((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_ 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(76,76,7, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
        = (0xfffU & __Vtemp_3[2U]);
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0583_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0577_) 
         & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_)) 
            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0587_)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_ = 
        (1U & (~ (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0050_) 
                   & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_))) 
                  & (~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0059_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_ = 
        (1U & (~ (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0701_) 
                   & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_))) 
                  & (~ (IData)(zvt_pe_mulbulk_fp_lane__DOT___0709_)))));
    __Vtemp_5[0U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                << 0xaU) 
                                               | (0x3ffU 
                                                  & ((0x800U 
                                                      & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                      ? 
                                                     ((IData)(1U) 
                                                      + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)
                                                      : 
                                                     ((1U 
                                                       & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_)) 
                                                          & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                             >> 0xaU)))
                                                       ? 1U
                                                       : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)))))) 
                              << 0x1dU) | (QData)((IData)(
                                                          ((0x1ffffff8U 
                                                            & (((0x800U 
                                                                 & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                 ? 
                                                                ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                  << 0xeU) 
                                                                 | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x12U))
                                                                 : 
                                                                ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                  << 0xfU) 
                                                                 | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x11U))) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & (((0x800U 
                                                                    & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                    ? 
                                                                   (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x11U)
                                                                    : 
                                                                   (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x10U)) 
                                                                  << 2U)) 
                                                              | ((((0x800U 
                                                                    & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                    ? 
                                                                   (0U 
                                                                    != 
                                                                    (0x1ffffffffffffULL 
                                                                     & VL_SHIFTL_QQI(49,49,7, 
                                                                                (((QData)((IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_ 
                                                                                >> 0x20U))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))
                                                                    : 
                                                                   (0U 
                                                                    != 
                                                                    (0xffffffffffffULL 
                                                                     & VL_SHIFTL_QQI(48,48,7, vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))) 
                                                                  << 1U) 
                                                                 | ((0x800U 
                                                                     & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                     ? 
                                                                    ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                     & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                        >> 0x10U))
                                                                     : 
                                                                    ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                     & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                        >> 0xfU))))))))));
    __Vtemp_5[1U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((0x800U 
                                                       & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)
                                                       : 
                                                      ((1U 
                                                        & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_)) 
                                                           & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                              >> 0xaU)))
                                                        ? 1U
                                                        : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)))))) 
                               << 0x1dU) | (QData)((IData)(
                                                           ((0x1ffffff8U 
                                                             & (((0x800U 
                                                                  & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                  ? 
                                                                 ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                   << 0xeU) 
                                                                  | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x12U))
                                                                  : 
                                                                 ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                   << 0xfU) 
                                                                  | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x11U))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((0x800U 
                                                                     & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                     ? 
                                                                    (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x11U)
                                                                     : 
                                                                    (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x10U)) 
                                                                   << 2U)) 
                                                               | ((((0x800U 
                                                                     & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                     ? 
                                                                    (0U 
                                                                     != 
                                                                     (0x1ffffffffffffULL 
                                                                      & VL_SHIFTL_QQI(49,49,7, 
                                                                                (((QData)((IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_ 
                                                                                >> 0x20U))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))
                                                                     : 
                                                                    (0U 
                                                                     != 
                                                                     (0xffffffffffffULL 
                                                                      & VL_SHIFTL_QQI(48,48,7, vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))) 
                                                                   << 1U) 
                                                                  | ((0x800U 
                                                                      & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                      ? 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                      & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                         >> 0x10U))
                                                                      : 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                      & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                         >> 0xfU))))))))) 
                             >> 0x20U));
    if (((~ (0U != (IData)(vlSelfRef.src_fmt))) & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0099_))) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U] 
            = ((__Vtemp_5[0U] << 4U) | (1U & (IData)(vlSelfRef.mask)));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
            = ((__Vtemp_5[0U] >> 0x1cU) | (__Vtemp_5[1U] 
                                           << 4U));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
            = (__Vtemp_5[1U] >> 0x1cU);
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[5U] = 0U;
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[4U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[5U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[5U];
    }
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0585_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0729_) 
         | (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0729_)) 
             & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0731_)) 
            | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0583_)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7 
        = ((((((0x80000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                               << 0x14U)) | (0x40000000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                                << 0x13U))) 
              | ((0x20000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                 << 0x12U)) | (0x10000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                                  << 0x11U)))) 
             | (((0x8000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                << 0x10U)) | (0x4000000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                                 << 0xfU))) 
                | ((0x2000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                  << 0xeU)) | (0x1000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                                  << 0xdU))))) 
            | ((((0x800000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                               << 0xcU)) | (0x400000U 
                                            & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                               << 0xbU))) 
                | ((0x200000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                 << 0xaU)) | (0x100000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                                 << 9U)))) 
               | (((0x80000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                << 8U)) | (0x40000U 
                                           & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                              << 7U))) 
                  | ((0x20000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                  << 6U)) | (0x10000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                                << 5U)))))) 
           | (((0x8000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                           << 4U)) | (0x4000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                                 << 3U))) 
              | ((0x2000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                             << 2U)) | ((0x1000U & 
                                         ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_) 
                                          << 1U)) | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0906_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ = 
        (0xfffffffffffULL & ((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_)) 
                             << (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26 
        = ((((((0x80000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                               << 0x14U)) | (0x40000000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                                << 0x13U))) 
              | ((0x20000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                 << 0x12U)) | (0x10000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                                  << 0x11U)))) 
             | (((0x8000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                << 0x10U)) | (0x4000000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                                 << 0xfU))) 
                | ((0x2000000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                  << 0xeU)) | (0x1000000U 
                                               & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                                  << 0xdU))))) 
            | ((((0x800000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                               << 0xcU)) | (0x400000U 
                                            & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                               << 0xbU))) 
                | ((0x200000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                 << 0xaU)) | (0x100000U 
                                              & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                                 << 9U)))) 
               | (((0x80000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                << 8U)) | (0x40000U 
                                           & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                              << 7U))) 
                  | ((0x20000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                  << 6U)) | (0x10000U 
                                             & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                                << 5U)))))) 
           | (((0x8000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                           << 4U)) | (0x4000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                                 << 3U))) 
              | ((0x2000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                             << 2U)) | ((0x1000U & 
                                         ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_) 
                                          << 1U)) | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0887_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ = 
        (0xfffffffffffULL & ((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_)) 
                             << (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0099_)
          ? (((((IData)(vlSelfRef.up_valid) << 0xdU) 
               | ((IData)(vlSelfRef.src_fmt) << 0xaU)) 
              | ((((4U & (IData)(vlSelfRef.src_fmt))
                    ? (IData)(((0U == (3U & (IData)(vlSelfRef.src_fmt))) 
                               & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0084_)))
                    : (IData)(((0U == (3U & (IData)(vlSelfRef.src_fmt))) 
                               & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0585_)))) 
                  << 9U) | ((((4U & (IData)(vlSelfRef.src_fmt))
                               ? (IData)((((0U == (3U 
                                                   & (IData)(vlSelfRef.src_fmt))) 
                                           & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0084_))) 
                                          & (0U != (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf))))
                               : (IData)((((0U == (3U 
                                                   & (IData)(vlSelfRef.src_fmt))) 
                                           & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0585_))) 
                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0587_)))) 
                             << 8U) | (((4U & (IData)(vlSelfRef.src_fmt))
                                         ? (IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.src_fmt))) 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0078_)))
                                         : (IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.src_fmt))) 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0577_)))) 
                                       << 7U)))) | 
             ((((4U & (IData)(vlSelfRef.src_fmt)) ? (IData)(
                                                            ((0U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelfRef.src_fmt))) 
                                                             & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0082_) 
                                                                | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0760_) 
                                                                   | (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0760_)) 
                                                                       & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0761_) 
                                                                          & (((~ 
                                                                               ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_) 
                                                                                >> 6U)) 
                                                                              & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0736_)) 
                                                                             | ((~ 
                                                                                ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_) 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0750_))))) 
                                                                      | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0626_) 
                                                                         | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0627_) 
                                                                            & (((~ 
                                                                                ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_) 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0601_)) 
                                                                               | ((~ 
                                                                                ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_) 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0615_))))))))))
                 : (IData)(((0U == (3U & (IData)(vlSelfRef.src_fmt))) 
                            & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0583_) 
                               | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0729_) 
                                  | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0731_) 
                                     & (((~ ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_) 
                                             >> 6U)) 
                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0518_)) 
                                        | ((~ ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_) 
                                               >> 6U)) 
                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0613_))))))))) 
               << 6U) | (((IData)(vlSelfRef.dst_fmt) 
                          << 3U) | (((IData)(vlSelfRef.dst_fmt) 
                                     == (IData)(vlSelfRef.src_fmt))
                                     ? (IData)(vlSelfRef.rnd_mode)
                                     : 5U)))) : (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq));
    __Vtemp_9[0U] = (IData)((((QData)((IData)((0x3ffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                              >> 0x2bU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26)
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_)) 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                  >> 0x2aU))))
                                                    ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                    : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x3ffffffU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x2bU)))
                                                                 ? (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x12U))
                                                                 : (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x11U)))))) 
                                            << 7U) 
                                           | (QData)((IData)(
                                                             ((0x40U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x2bU)))
                                                                    ? (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x11U))
                                                                    : (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x10U))) 
                                                                  << 6U)) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x2bU)))
                                                                    ? 
                                                                   (0U 
                                                                    != 
                                                                    (0x1ffffU 
                                                                     & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))
                                                                    : 
                                                                   (0U 
                                                                    != 
                                                                    (0xffffU 
                                                                     & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))) 
                                                                  << 5U) 
                                                                 | ((((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                       ? 
                                                                      ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x10U)))
                                                                       : 
                                                                      ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0xfU)))) 
                                                                     << 4U) 
                                                                    | ((2U 
                                                                        & ((IData)(vlSelfRef.mask) 
                                                                           >> 1U)) 
                                                                       | (1U 
                                                                          & (IData)(vlSelfRef.mask)))))))))));
    __Vtemp_9[1U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                  << 0xaU) 
                                                 | (0x3ffU 
                                                    & ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                   >> 0x2bU)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)
                                                        : 
                                                       ((1U 
                                                         & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_)) 
                                                            & (IData)(
                                                                      (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                       >> 0x2aU))))
                                                         ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                         : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)))))) 
                                << 0x1eU) | (QData)((IData)(
                                                            ((0x3ffffff0U 
                                                              & (((1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x2bU)))
                                                                   ? (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x12U))
                                                                   : (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x11U))) 
                                                                 << 4U)) 
                                                             | (((8U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                       ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))
                                                                       : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U))) 
                                                                     << 3U)) 
                                                                 | (((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     (0U 
                                                                      != 
                                                                      (0x1ffffU 
                                                                       & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))
                                                                      : 
                                                                     (0U 
                                                                      != 
                                                                      (0xffffU 
                                                                       & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))) 
                                                                    << 2U)) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U)))
                                                                      : 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0xfU)))) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_)))))))) 
                      << 0xbU) | (IData)(((((QData)((IData)(
                                                            (0x3ffU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x2bU)))
                                                                 ? 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26)
                                                                 : 
                                                                ((1U 
                                                                  & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_)) 
                                                                     & (IData)(
                                                                               (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2aU))))
                                                                  ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                                  : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26))))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (0x3ffffffU 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x2bU)))
                                                                    ? (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x12U))
                                                                    : (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x11U)))))) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                ((0x40U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                       ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x11U))
                                                                       : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x10U))) 
                                                                     << 6U)) 
                                                                 | ((((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                       ? 
                                                                      (0U 
                                                                       != 
                                                                       (0x1ffffU 
                                                                        & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))
                                                                       : 
                                                                      (0U 
                                                                       != 
                                                                       (0xffffU 
                                                                        & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))) 
                                                                     << 5U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                          ? 
                                                                         ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x10U)))
                                                                          : 
                                                                         ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0xfU)))) 
                                                                        << 4U) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelfRef.mask) 
                                                                              >> 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSelfRef.mask)))))))))) 
                                          >> 0x20U)));
    __Vtemp_9[2U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                  << 0xaU) 
                                                 | (0x3ffU 
                                                    & ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                   >> 0x2bU)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)
                                                        : 
                                                       ((1U 
                                                         & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_)) 
                                                            & (IData)(
                                                                      (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                       >> 0x2aU))))
                                                         ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                         : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)))))) 
                                << 0x1eU) | (QData)((IData)(
                                                            ((0x3ffffff0U 
                                                              & (((1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x2bU)))
                                                                   ? (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x12U))
                                                                   : (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x11U))) 
                                                                 << 4U)) 
                                                             | (((8U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                       ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))
                                                                       : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U))) 
                                                                     << 3U)) 
                                                                 | (((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     (0U 
                                                                      != 
                                                                      (0x1ffffU 
                                                                       & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))
                                                                      : 
                                                                     (0U 
                                                                      != 
                                                                      (0xffffU 
                                                                       & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))) 
                                                                    << 2U)) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U)))
                                                                      : 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0xfU)))) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_)))))))) 
                      >> 0x15U) | ((IData)(((((QData)((IData)(
                                                              (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                                << 0xaU) 
                                                               | (0x3ffU 
                                                                  & ((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     ((IData)(1U) 
                                                                      + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)
                                                                      : 
                                                                     ((1U 
                                                                       & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_)) 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2aU))))
                                                                       ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                                       : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)))))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               ((0x3ffffff0U 
                                                                 & (((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x12U))
                                                                      : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))) 
                                                                    << 4U)) 
                                                                | (((8U 
                                                                     & (((1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                          ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))
                                                                          : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U))) 
                                                                        << 3U)) 
                                                                    | (((1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                         ? 
                                                                        (0U 
                                                                         != 
                                                                         (0x1ffffU 
                                                                          & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))
                                                                         : 
                                                                        (0U 
                                                                         != 
                                                                         (0xffffU 
                                                                          & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))) 
                                                                       << 2U)) 
                                                                   | ((((1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                         ? 
                                                                        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U)))
                                                                         : 
                                                                        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0xfU)))) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_))))))) 
                                            >> 0x20U)) 
                                   << 0xbU));
    if (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0099_) 
         & (4U == (IData)(vlSelfRef.src_fmt)))) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[5U] = 0U;
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[4U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[5U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[5U];
    }
}

void Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__ico(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);

bool Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__ico(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__ico\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vzvt_pe_mulbulk_fp_lane___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vzvt_pe_mulbulk_fp_lane___024root___act_sequent__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
void Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
void Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__1(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);

void Vzvt_pe_mulbulk_fp_lane___024root___eval_act(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_act\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vzvt_pe_mulbulk_fp_lane___024root___act_sequent__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___act_sequent__TOP__0\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0128_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM) 
         & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0127_ 
            >> 0x1cU));
}

VL_INLINE_OPT void Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__1(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__1\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ zvt_pe_mulbulk_fp_lane__DOT___0367_;
    zvt_pe_mulbulk_fp_lane__DOT___0367_ = 0;
    // Body
    zvt_pe_mulbulk_fp_lane__DOT___0367_ = (1U & (((~ 
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0346_ 
                                                        >> 0x17U)))) 
                                                  | ((~ 
                                                      (0U 
                                                       != (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0311_))) 
                                                     & (IData)(
                                                               ((0x800000U 
                                                                 == 
                                                                 (0x7f800000U 
                                                                  & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0346_)) 
                                                                & ((~ 
                                                                    ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02eresult_round_bit) 
                                                                     & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0331_))) 
                                                                   | ((~ 
                                                                       ((0x20U 
                                                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                                         ? (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                                                & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_ 
                                                                                >> 0x10U)))
                                                                         : (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) 
                                                                                & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0324_)))) 
                                                                      & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___1173_))))))) 
                                                 & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus 
        = (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0365_) 
            << 2U) | (((IData)(zvt_pe_mulbulk_fp_lane__DOT___0367_) 
                       << 1U) | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0333_) 
                                 | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0365_))));
    if ((0x200U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
        vlSelfRef.status = (0x10U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                                     >> 2U));
        vlSelfRef.result = ((0x20U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                             ? ((0x10U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                 ? 0U : ((8U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                          ? 0U : 0x7fc00000U))
                             : ((0x10U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                 ? 0x7e000000U : ((8U 
                                                   & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                   ? 0x7ff80000U
                                                   : 0x7fc00000U)));
    } else if ((0x200U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
        vlSelfRef.status = 0U;
        vlSelfRef.result = 0U;
    } else if ((0x100U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
        vlSelfRef.status = 0U;
        vlSelfRef.result = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0373_;
    } else if ((0x200U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
        vlSelfRef.status = 0U;
        vlSelfRef.result = 0U;
    } else if ((0x100U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))) {
        vlSelfRef.status = 0U;
        vlSelfRef.result = 0U;
    } else if (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0316_) {
        vlSelfRef.status = 5U;
        vlSelfRef.result = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0377_;
    } else {
        vlSelfRef.status = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus;
        vlSelfRef.result = ((4U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02estatus))
                             ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0377_
                             : (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__u_rounding__02epreround_sign) 
                                 << 0x1fU) | (0x7fffffffU 
                                              & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0346_)));
    }
}

void Vzvt_pe_mulbulk_fp_lane___024root___nba_sequent__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);

void Vzvt_pe_mulbulk_fp_lane___024root___eval_nba(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_nba\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x1cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x1eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vzvt_pe_mulbulk_fp_lane___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vzvt_pe_mulbulk_fp_lane___024root___nba_sequent__TOP__0(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___nba_sequent__TOP__0\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ zvt_pe_mulbulk_fp_lane__DOT___0303_;
    zvt_pe_mulbulk_fp_lane__DOT___0303_ = 0;
    VlWide<20>/*639:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0xfffffff0U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U]) 
           | ((IData)(vlSelfRef.rst_n) ? (0xfU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U])
               : 0U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xfffff801U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
                                            >> 1U))
                : 0U) << 1U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0xffffffbfU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U]) 
           | (0xffffffc0U & (((IData)(vlSelfRef.rst_n) 
                              << 6U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xfffff7ffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (0xfffff800U & (((IData)(vlSelfRef.rst_n) 
                              << 0xbU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0x7fU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
                                               << 0x19U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U] 
                                                 >> 7U)))
                : 0U) << 7U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xfffffffeU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
                                               << 0x19U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U] 
                                                 >> 7U)))
                : 0U) >> 0x19U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0xffffffcfU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U]) 
           | (0x30U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                        << 4U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xfff801ffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
                                            >> 9U))
                : 0U) << 9U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xffffbfffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (0xffffc000U & (((IData)(vlSelfRef.rst_n) 
                              << 0xeU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xfff7ffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (0xfff80000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x13U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0x7fffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
                                               << 0x11U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
                                                 >> 0xfU)))
                : 0U) << 0xfU));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xfffffe00U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
                                               << 0x11U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
                                                 >> 0xfU)))
                : 0U) >> 0x11U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xffffcfffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (0x3000U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                          << 0xcU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xf801ffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] 
                                            >> 0x11U))
                : 0U) << 0x11U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xffbfffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (0xffc00000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x16U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xf7ffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (0xf8000000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x1bU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0x7fffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] 
                                               << 9U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
                                                 >> 0x17U)))
                : 0U) << 0x17U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xfffe0000U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] 
                                               << 9U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
                                                 >> 0x17U)))
                : 0U) >> 9U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xffcfffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (0x300000U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                            << 0x14U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[4U] 
        = ((0x1ffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[4U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[5U] 
                                             << 7U) 
                                            | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] 
                                               >> 0x19U)))
                : 0U) << 0x19U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[5U] 
        = ((8U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[5U]) 
           | (0xfU & (((IData)(vlSelfRef.rst_n) ? (0x3ffU 
                                                   & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[5U] 
                                                       << 7U) 
                                                      | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] 
                                                         >> 0x19U)))
                        : 0U) >> 7U)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xbfffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (0xc0000000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x1eU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[5U] 
        = ((7U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[5U]) 
           | (8U & (((IData)(vlSelfRef.rst_n) << 3U) 
                    & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[5U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0x7fffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] 
                                               << 1U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] 
                                                 >> 0x1fU)))
                : 0U) << 0x1fU));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[4U] 
        = ((0xfe000000U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[4U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] 
                                               << 1U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] 
                                                 >> 0x1fU)))
                : 0U) >> 1U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xcfffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (0x30000000U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                              << 0x1cU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq 
        = ((0x3fc7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)) 
           | (((IData)(vlSelfRef.rst_n) ? (7U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_) 
                                                 >> 3U))
                : 0U) << 3U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq 
        = ((0x1fffU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)) 
           | (0xffffe000U & (((IData)(vlSelfRef.rst_n) 
                              << 0xdU) & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq 
        = ((0x3ff8U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)) 
           | ((IData)(vlSelfRef.rst_n) ? (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_))
               : 0U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq 
        = ((0x3e3fU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)) 
           | ((0x180U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                          << 7U) & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_))) 
              | (0xffffffc0U & (((IData)(vlSelfRef.rst_n) 
                                 << 6U) & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq 
        = ((0x21ffU & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)) 
           | ((((IData)(vlSelfRef.rst_n) ? (7U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_) 
                                                  >> 0xaU))
                 : 0U) << 0xaU) | (0xfffffe00U & (((IData)(vlSelfRef.rst_n) 
                                                   << 9U) 
                                                  & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0xfffffff0U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U]) 
           | ((IData)(vlSelfRef.rst_n) ? (0xfU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U])
               : 0U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xfffff801U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
                                            >> 1U))
                : 0U) << 1U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0xffffffbfU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U]) 
           | (0xffffffc0U & (((IData)(vlSelfRef.rst_n) 
                              << 6U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xfffff7ffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (0xfffff800U & (((IData)(vlSelfRef.rst_n) 
                              << 0xbU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0x7fU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
                                               << 0x19U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U] 
                                                 >> 7U)))
                : 0U) << 7U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xfffffffeU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
                                               << 0x19U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U] 
                                                 >> 7U)))
                : 0U) >> 0x19U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U] 
        = ((0xffffffcfU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U]) 
           | (0x30U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                        << 4U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xfff801ffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
                                            >> 9U))
                : 0U) << 9U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xffffbfffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (0xffffc000U & (((IData)(vlSelfRef.rst_n) 
                              << 0xeU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xfff7ffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (0xfff80000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x13U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0x7fffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
                                               << 0x11U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
                                                 >> 0xfU)))
                : 0U) << 0xfU));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xfffffe00U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
                                               << 0x11U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
                                                 >> 0xfU)))
                : 0U) >> 0x11U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
        = ((0xffffcfffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U]) 
           | (0x3000U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                          << 0xcU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xf801ffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] 
                                            >> 0x11U))
                : 0U) << 0x11U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xffbfffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (0xffc00000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x16U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xf7ffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (0xf8000000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x1bU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0x7fffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] 
                                               << 9U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
                                                 >> 0x17U)))
                : 0U) << 0x17U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xfffe0000U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] 
                                               << 9U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
                                                 >> 0x17U)))
                : 0U) >> 9U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
        = ((0xffcfffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U]) 
           | (0x300000U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                            << 0x14U) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[4U] 
        = ((0x1ffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[4U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffU & 
                                           ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[5U] 
                                             << 7U) 
                                            | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] 
                                               >> 0x19U)))
                : 0U) << 0x19U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[5U] 
        = ((8U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[5U]) 
           | (0xfU & (((IData)(vlSelfRef.rst_n) ? (0x3ffU 
                                                   & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[5U] 
                                                       << 7U) 
                                                      | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] 
                                                         >> 0x19U)))
                        : 0U) >> 7U)));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xbfffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (0xc0000000U & (((IData)(vlSelfRef.rst_n) 
                              << 0x1eU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[5U] 
        = ((7U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[5U]) 
           | (8U & (((IData)(vlSelfRef.rst_n) << 3U) 
                    & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[5U])));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0x7fffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] 
                                               << 1U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] 
                                                 >> 0x1fU)))
                : 0U) << 0x1fU));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[4U] 
        = ((0xfe000000U & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[4U]) 
           | (((IData)(vlSelfRef.rst_n) ? (0x3ffffffU 
                                           & ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] 
                                               << 1U) 
                                              | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] 
                                                 >> 0x1fU)))
                : 0U) >> 1U));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U] 
        = ((0xcfffffffU & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U]) 
           | (0x30000000U & (((- (IData)((IData)(vlSelfRef.rst_n))) 
                              << 0x1cU) & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U])));
    __Vtemp_2[0U] = (IData)((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                << 0xaU) 
                                               | (0x3ffU 
                                                  & ((0x800U 
                                                      & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                      ? 
                                                     ((IData)(1U) 
                                                      + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)
                                                      : 
                                                     ((1U 
                                                       & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_)) 
                                                          & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                             >> 0xaU)))
                                                       ? 1U
                                                       : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)))))) 
                              << 0x1dU) | (QData)((IData)(
                                                          ((0x1ffffff8U 
                                                            & (((0x800U 
                                                                 & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                 ? 
                                                                ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                  << 0xeU) 
                                                                 | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x12U))
                                                                 : 
                                                                ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                  << 0xfU) 
                                                                 | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x11U))) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & (((0x800U 
                                                                    & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                    ? 
                                                                   (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x11U)
                                                                    : 
                                                                   (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                    >> 0x10U)) 
                                                                  << 2U)) 
                                                              | ((((0x800U 
                                                                    & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                    ? 
                                                                   (0U 
                                                                    != 
                                                                    (0x1ffffffffffffULL 
                                                                     & VL_SHIFTL_QQI(49,49,7, 
                                                                                (((QData)((IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_ 
                                                                                >> 0x20U))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))
                                                                    : 
                                                                   (0U 
                                                                    != 
                                                                    (0xffffffffffffULL 
                                                                     & VL_SHIFTL_QQI(48,48,7, vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))) 
                                                                  << 1U) 
                                                                 | ((0x800U 
                                                                     & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                     ? 
                                                                    ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                     & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                        >> 0x10U))
                                                                     : 
                                                                    ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                     & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                        >> 0xfU))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & ((0x800U 
                                                       & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)
                                                       : 
                                                      ((1U 
                                                        & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0548_)) 
                                                           & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                              >> 0xaU)))
                                                        ? 1U
                                                        : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_22)))))) 
                               << 0x1dU) | (QData)((IData)(
                                                           ((0x1ffffff8U 
                                                             & (((0x800U 
                                                                  & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                  ? 
                                                                 ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                   << 0xeU) 
                                                                  | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x12U))
                                                                  : 
                                                                 ((vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U] 
                                                                   << 0xfU) 
                                                                  | (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x11U))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((0x800U 
                                                                     & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                     ? 
                                                                    (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x11U)
                                                                     : 
                                                                    (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                     >> 0x10U)) 
                                                                   << 2U)) 
                                                               | ((((0x800U 
                                                                     & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                     ? 
                                                                    (0U 
                                                                     != 
                                                                     (0x1ffffffffffffULL 
                                                                      & VL_SHIFTL_QQI(49,49,7, 
                                                                                (((QData)((IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_ 
                                                                                >> 0x20U))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))
                                                                     : 
                                                                    (0U 
                                                                     != 
                                                                     (0xffffffffffffULL 
                                                                      & VL_SHIFTL_QQI(48,48,7, vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0529_, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0875_))))) 
                                                                   << 1U) 
                                                                  | ((0x800U 
                                                                      & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[2U])
                                                                      ? 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                      & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                         >> 0x10U))
                                                                      : 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0562_) 
                                                                      & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0557_[1U] 
                                                                         >> 0xfU))))))))) 
                             >> 0x20U));
    if (((~ (0U != (IData)(vlSelfRef.src_fmt))) & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0099_))) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U] 
            = ((__Vtemp_2[0U] << 4U) | (1U & (IData)(vlSelfRef.mask)));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
            = ((__Vtemp_2[0U] >> 0x1cU) | (__Vtemp_2[1U] 
                                           << 4U));
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
            = (__Vtemp_2[1U] >> 0x1cU);
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[5U] = 0U;
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[0U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[0U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[1U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[1U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[2U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[2U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[3U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[3U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[4U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[4U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0915_[5U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b0__05d__02eenabled__02edata_reg__02eq[5U];
    }
    vlSelfRef.down_valid = (1U & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq) 
                                  >> 0xdU));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___1173_ = 
        (1U & ((~ (0U != (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)))) 
               | (4U == (7U & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq)))));
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0914_ = 
        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0099_)
          ? (((((IData)(vlSelfRef.up_valid) << 0xdU) 
               | ((IData)(vlSelfRef.src_fmt) << 0xaU)) 
              | ((((4U & (IData)(vlSelfRef.src_fmt))
                    ? (IData)(((0U == (3U & (IData)(vlSelfRef.src_fmt))) 
                               & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0084_)))
                    : (IData)(((0U == (3U & (IData)(vlSelfRef.src_fmt))) 
                               & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0585_)))) 
                  << 9U) | ((((4U & (IData)(vlSelfRef.src_fmt))
                               ? (IData)((((0U == (3U 
                                                   & (IData)(vlSelfRef.src_fmt))) 
                                           & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0084_))) 
                                          & (0U != (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_product_gen__05b4__05d__02eenabled__02ecomponent_inf))))
                               : (IData)((((0U == (3U 
                                                   & (IData)(vlSelfRef.src_fmt))) 
                                           & (~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0585_))) 
                                          & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0587_)))) 
                             << 8U) | (((4U & (IData)(vlSelfRef.src_fmt))
                                         ? (IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.src_fmt))) 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0078_)))
                                         : (IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.src_fmt))) 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0577_)))) 
                                       << 7U)))) | 
             ((((4U & (IData)(vlSelfRef.src_fmt)) ? (IData)(
                                                            ((0U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelfRef.src_fmt))) 
                                                             & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0082_) 
                                                                | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0760_) 
                                                                   | (((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0760_)) 
                                                                       & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0761_) 
                                                                          & (((~ 
                                                                               ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_) 
                                                                                >> 6U)) 
                                                                              & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0736_)) 
                                                                             | ((~ 
                                                                                ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_) 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0750_))))) 
                                                                      | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0626_) 
                                                                         | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0627_) 
                                                                            & (((~ 
                                                                                ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0393_) 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0601_)) 
                                                                               | ((~ 
                                                                                ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0556_) 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0615_))))))))))
                 : (IData)(((0U == (3U & (IData)(vlSelfRef.src_fmt))) 
                            & ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0583_) 
                               | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0729_) 
                                  | ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0731_) 
                                     & (((~ ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0156_) 
                                             >> 6U)) 
                                         & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0518_)) 
                                        | ((~ ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0320_) 
                                               >> 6U)) 
                                           & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0613_))))))))) 
               << 6U) | (((IData)(vlSelfRef.dst_fmt) 
                          << 3U) | (((IData)(vlSelfRef.dst_fmt) 
                                     == (IData)(vlSelfRef.src_fmt))
                                     ? (IData)(vlSelfRef.rnd_mode)
                                     : 5U)))) : (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq));
    zvt_pe_mulbulk_fp_lane__DOT___0303_ = ((0x1000U 
                                            & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                            ? ((0x800U 
                                                & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                ? 0U
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02ectrl_reg__02eq))
                                                    ? 0U
                                                    : 
                                                   (0xfffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((0x800U 
                                                         & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                            << 1U)) 
                                                        | ((0x400U 
                                                            & vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U]) 
                                                           | (0x3ffU 
                                                              & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                                                                 >> 1U))))))))
                                            : 0U);
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__fmt_add_tree_gen__05b4__05d____Vhsh6018fakCbUKA15zExbOYgEB9QRbLR5vBB4g2EThM 
        = ((1U & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U] 
                  >> 0xbU)) != (1U & (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U] 
                                      >> 0x13U)));
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x3ffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                              >> 0x2bU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26)
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_)) 
                                                       & (IData)(
                                                                 (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                  >> 0x2aU))))
                                                    ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                    : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x3ffffffU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x2bU)))
                                                                 ? (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x12U))
                                                                 : (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x11U)))))) 
                                            << 7U) 
                                           | (QData)((IData)(
                                                             ((0x40U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x2bU)))
                                                                    ? (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x11U))
                                                                    : (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x10U))) 
                                                                  << 6U)) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x2bU)))
                                                                    ? 
                                                                   (0U 
                                                                    != 
                                                                    (0x1ffffU 
                                                                     & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))
                                                                    : 
                                                                   (0U 
                                                                    != 
                                                                    (0xffffU 
                                                                     & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))) 
                                                                  << 5U) 
                                                                 | ((((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                       ? 
                                                                      ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x10U)))
                                                                       : 
                                                                      ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0xfU)))) 
                                                                     << 4U) 
                                                                    | ((2U 
                                                                        & ((IData)(vlSelfRef.mask) 
                                                                           >> 1U)) 
                                                                       | (1U 
                                                                          & (IData)(vlSelfRef.mask)))))))))));
    __Vtemp_6[1U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                  << 0xaU) 
                                                 | (0x3ffU 
                                                    & ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                   >> 0x2bU)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)
                                                        : 
                                                       ((1U 
                                                         & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_)) 
                                                            & (IData)(
                                                                      (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                       >> 0x2aU))))
                                                         ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                         : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)))))) 
                                << 0x1eU) | (QData)((IData)(
                                                            ((0x3ffffff0U 
                                                              & (((1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x2bU)))
                                                                   ? (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x12U))
                                                                   : (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x11U))) 
                                                                 << 4U)) 
                                                             | (((8U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                       ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))
                                                                       : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U))) 
                                                                     << 3U)) 
                                                                 | (((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     (0U 
                                                                      != 
                                                                      (0x1ffffU 
                                                                       & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))
                                                                      : 
                                                                     (0U 
                                                                      != 
                                                                      (0xffffU 
                                                                       & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))) 
                                                                    << 2U)) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U)))
                                                                      : 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0xfU)))) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_)))))))) 
                      << 0xbU) | (IData)(((((QData)((IData)(
                                                            (0x3ffU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                            >> 0x2bU)))
                                                                 ? 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26)
                                                                 : 
                                                                ((1U 
                                                                  & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0703_)) 
                                                                     & (IData)(
                                                                               (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2aU))))
                                                                  ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                                  : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_26))))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (0x3ffffffU 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x2bU)))
                                                                    ? (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x12U))
                                                                    : (IData)(
                                                                              (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                               >> 0x11U)))))) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                ((0x40U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                       ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x11U))
                                                                       : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x10U))) 
                                                                     << 6U)) 
                                                                 | ((((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                       ? 
                                                                      (0U 
                                                                       != 
                                                                       (0x1ffffU 
                                                                        & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))
                                                                       : 
                                                                      (0U 
                                                                       != 
                                                                       (0xffffU 
                                                                        & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0685_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0894_))))) 
                                                                     << 5U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x2bU)))
                                                                          ? 
                                                                         ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0x10U)))
                                                                          : 
                                                                         ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0714_) 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0710_ 
                                                                                >> 0xfU)))) 
                                                                        << 4U) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelfRef.mask) 
                                                                              >> 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSelfRef.mask)))))))))) 
                                          >> 0x20U)));
    __Vtemp_6[2U] = (((IData)((((QData)((IData)((((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                  << 0xaU) 
                                                 | (0x3ffU 
                                                    & ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                   >> 0x2bU)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)
                                                        : 
                                                       ((1U 
                                                         & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_)) 
                                                            & (IData)(
                                                                      (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                       >> 0x2aU))))
                                                         ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                         : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)))))) 
                                << 0x1eU) | (QData)((IData)(
                                                            ((0x3ffffff0U 
                                                              & (((1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x2bU)))
                                                                   ? (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x12U))
                                                                   : (IData)(
                                                                             (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                              >> 0x11U))) 
                                                                 << 4U)) 
                                                             | (((8U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                       ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))
                                                                       : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U))) 
                                                                     << 3U)) 
                                                                 | (((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     (0U 
                                                                      != 
                                                                      (0x1ffffU 
                                                                       & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))
                                                                      : 
                                                                     (0U 
                                                                      != 
                                                                      (0xffffU 
                                                                       & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))) 
                                                                    << 2U)) 
                                                                | ((((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U)))
                                                                      : 
                                                                     ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0xfU)))) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_)))))))) 
                      >> 0x15U) | ((IData)(((((QData)((IData)(
                                                              (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0458_) 
                                                                << 0xaU) 
                                                               | (0x3ffU 
                                                                  & ((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? 
                                                                     ((IData)(1U) 
                                                                      + vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)
                                                                      : 
                                                                     ((1U 
                                                                       & ((~ (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0053_)) 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2aU))))
                                                                       ? vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_5
                                                                       : vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_7)))))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               ((0x3ffffff0U 
                                                                 & (((1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                      ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x12U))
                                                                      : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))) 
                                                                    << 4U)) 
                                                                | (((8U 
                                                                     & (((1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                          ? (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x11U))
                                                                          : (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U))) 
                                                                        << 3U)) 
                                                                    | (((1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                         ? 
                                                                        (0U 
                                                                         != 
                                                                         (0x1ffffU 
                                                                          & VL_SHIFTL_III(17,17,6, (IData)((QData)((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_))), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))
                                                                         : 
                                                                        (0U 
                                                                         != 
                                                                         (0xffffU 
                                                                          & VL_SHIFTL_III(16,16,6, (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0035_), (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0913_))))) 
                                                                       << 2U)) 
                                                                   | ((((1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x2bU)))
                                                                         ? 
                                                                        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0x10U)))
                                                                         : 
                                                                        ((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0064_) 
                                                                         & (IData)(
                                                                                (vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0060_ 
                                                                                >> 0xfU)))) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0596_))))))) 
                                            >> 0x20U)) 
                                   << 0xbU));
    if (((IData)(vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0099_) 
         & (4U == (IData)(vlSelfRef.src_fmt)))) {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U] 
            = __Vtemp_6[0U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
            = __Vtemp_6[1U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
            = __Vtemp_6[2U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] = 0U;
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[5U] = 0U;
    } else {
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[0U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[0U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[1U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[1U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[2U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[2U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[3U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[3U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[4U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[4U];
        vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT___0916_[5U] 
            = vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02egen_mid_data_reg__05b4__05d__02eenabled__02edata_reg__02eq[5U];
    }
    vlSelfRef.zvt_pe_mulbulk_fp_lane__DOT____VdfgRegularize_h9d3c4535_0_11 
        = ((0x2000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0303_) 
                       << 2U)) | ((0x1000U & ((IData)(zvt_pe_mulbulk_fp_lane__DOT___0303_) 
                                              << 1U)) 
                                  | (IData)(zvt_pe_mulbulk_fp_lane__DOT___0303_)));
}

void Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__act(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);

bool Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__act(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__act\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vzvt_pe_mulbulk_fp_lane___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vzvt_pe_mulbulk_fp_lane___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__nba(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__nba\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vzvt_pe_mulbulk_fp_lane___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__ico(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__nba(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__act(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf);
#endif  // VL_DEBUG

void Vzvt_pe_mulbulk_fp_lane___024root___eval(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_mulbulk_fp_lane_flat.v", 7, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_mulbulk_fp_lane_flat.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vzvt_pe_mulbulk_fp_lane___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/leostrijbos/Desktop/Code/Projects/coral-optimised/rtl/coral-original/zvt_pe_mulbulk_fp_lane_flat.v", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vzvt_pe_mulbulk_fp_lane___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vzvt_pe_mulbulk_fp_lane___024root___eval_debug_assertions(Vzvt_pe_mulbulk_fp_lane___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzvt_pe_mulbulk_fp_lane___024root___eval_debug_assertions\n"); );
    Vzvt_pe_mulbulk_fp_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.reg_enable & 0xfeU)))) {
        Verilated::overWidthError("reg_enable");}
    if (VL_UNLIKELY(((vlSelfRef.up_valid & 0xfeU)))) {
        Verilated::overWidthError("up_valid");}
    if (VL_UNLIKELY(((vlSelfRef.rnd_mode & 0xf8U)))) {
        Verilated::overWidthError("rnd_mode");}
    if (VL_UNLIKELY(((vlSelfRef.mask & 0xf0U)))) {
        Verilated::overWidthError("mask");}
    if (VL_UNLIKELY(((vlSelfRef.src_fmt & 0xf8U)))) {
        Verilated::overWidthError("src_fmt");}
    if (VL_UNLIKELY(((vlSelfRef.dst_fmt & 0xf8U)))) {
        Verilated::overWidthError("dst_fmt");}
}
#endif  // VL_DEBUG
