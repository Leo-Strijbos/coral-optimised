// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vzvt_pe_adder_fp_lane.h for the primary calling header

#ifndef VERILATED_VZVT_PE_ADDER_FP_LANE___024ROOT_H_
#define VERILATED_VZVT_PE_ADDER_FP_LANE___024ROOT_H_  // guard

#include "verilated.h"


class Vzvt_pe_adder_fp_lane__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vzvt_pe_adder_fp_lane___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(reg_enable,0,0);
    VL_IN8(up_valid,0,0);
    VL_IN8(do_subtract,0,0);
    VL_IN8(rnd_mode,2,0);
    VL_OUT8(status,4,0);
    VL_OUT8(down_valid,0,0);
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0000_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0002_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0004_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0010_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0020_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0036_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0042_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0071_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0105_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0138_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0209_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0312_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0341_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0348_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0362_;
    CData/*5:0*/ zvt_pe_adder_fp_lane__DOT___0695_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0719_;
    CData/*0:0*/ zvt_pe_adder_fp_lane__DOT___0723_;
    CData/*4:0*/ zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus;
    CData/*0:0*/ __VdfgRegularize_h7cd686f0_0_25;
    CData/*4:0*/ __Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*4:0*/ __Vtrigprevexpr___TOP__zvt_pe_adder_fp_lane__DOT__u_rounding__02estatus__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ zvt_pe_adder_fp_lane__DOT___0693_;
    VL_OUT(result,31,0);
    IData/*24:0*/ zvt_pe_adder_fp_lane__DOT___0035_;
    IData/*31:0*/ zvt_pe_adder_fp_lane__DOT___0053_;
    IData/*28:0*/ zvt_pe_adder_fp_lane__DOT___0314_;
    IData/*31:0*/ zvt_pe_adder_fp_lane__DOT__fp32_inf;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(operands,63,0);
    QData/*53:0*/ zvt_pe_adder_fp_lane__DOT___0011_;
    QData/*63:0*/ zvt_pe_adder_fp_lane__DOT___0186_;
    QData/*44:0*/ zvt_pe_adder_fp_lane__DOT___0566_;
    QData/*44:0*/ zvt_pe_adder_fp_lane__DOT__gen_mid_pipeline__05b0__05d__02emid_reg__02eq;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vzvt_pe_adder_fp_lane__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vzvt_pe_adder_fp_lane___024root(Vzvt_pe_adder_fp_lane__Syms* symsp, const char* v__name);
    ~Vzvt_pe_adder_fp_lane___024root();
    VL_UNCOPYABLE(Vzvt_pe_adder_fp_lane___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
