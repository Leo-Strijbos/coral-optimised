// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbf16_block16.h for the primary calling header

#ifndef VERILATED_VBF16_BLOCK16___024ROOT_H_
#define VERILATED_VBF16_BLOCK16___024ROOT_H_  // guard

#include "verilated.h"


class Vbf16_block16__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbf16_block16___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ bf16_block16__DOT__n399;
        CData/*0:0*/ bf16_block16__DOT__n406;
        CData/*0:0*/ bf16_block16__DOT__n413;
        CData/*0:0*/ bf16_block16__DOT__n420;
        CData/*0:0*/ bf16_block16__DOT__n427;
        CData/*0:0*/ bf16_block16__DOT__n434;
        CData/*0:0*/ bf16_block16__DOT__n441;
        CData/*0:0*/ bf16_block16__DOT__n448;
        CData/*0:0*/ bf16_block16__DOT__n455;
        CData/*0:0*/ bf16_block16__DOT__n462;
        CData/*0:0*/ bf16_block16__DOT__n469;
        CData/*0:0*/ bf16_block16__DOT__n476;
        CData/*0:0*/ bf16_block16__DOT__n483;
        CData/*0:0*/ bf16_block16__DOT__n490;
        CData/*0:0*/ bf16_block16__DOT__n497;
        CData/*0:0*/ bf16_block16__DOT__n504;
        CData/*0:0*/ bf16_block16__DOT__n512;
        CData/*0:0*/ bf16_block16__DOT__n546;
        CData/*0:0*/ bf16_block16__DOT__n548;
        CData/*7:0*/ bf16_block16__DOT__n551;
        CData/*7:0*/ bf16_block16__DOT__n554;
        CData/*7:0*/ bf16_block16__DOT__n578;
        CData/*7:0*/ bf16_block16__DOT__n581;
        CData/*7:0*/ bf16_block16__DOT__n600;
        CData/*7:0*/ bf16_block16__DOT__n603;
        CData/*7:0*/ bf16_block16__DOT__n620;
        CData/*7:0*/ bf16_block16__DOT__n623;
        CData/*7:0*/ bf16_block16__DOT__n644;
        CData/*7:0*/ bf16_block16__DOT__n647;
        CData/*7:0*/ bf16_block16__DOT__n664;
        CData/*7:0*/ bf16_block16__DOT__n667;
        CData/*7:0*/ bf16_block16__DOT__n686;
        CData/*7:0*/ bf16_block16__DOT__n689;
        CData/*7:0*/ bf16_block16__DOT__n706;
        CData/*7:0*/ bf16_block16__DOT__n709;
        CData/*7:0*/ bf16_block16__DOT__n732;
        CData/*7:0*/ bf16_block16__DOT__n735;
        CData/*7:0*/ bf16_block16__DOT__n752;
        CData/*7:0*/ bf16_block16__DOT__n755;
        CData/*7:0*/ bf16_block16__DOT__n774;
        CData/*7:0*/ bf16_block16__DOT__n777;
        CData/*7:0*/ bf16_block16__DOT__n794;
        CData/*7:0*/ bf16_block16__DOT__n797;
        CData/*7:0*/ bf16_block16__DOT__n818;
        CData/*7:0*/ bf16_block16__DOT__n821;
        CData/*7:0*/ bf16_block16__DOT__n838;
        CData/*7:0*/ bf16_block16__DOT__n841;
        CData/*7:0*/ bf16_block16__DOT__n860;
        CData/*7:0*/ bf16_block16__DOT__n863;
        CData/*7:0*/ bf16_block16__DOT__n880;
        CData/*7:0*/ bf16_block16__DOT__n883;
        CData/*0:0*/ bf16_block16__DOT__n399_q1;
        CData/*0:0*/ bf16_block16__DOT__n406_q1;
        CData/*0:0*/ bf16_block16__DOT__n413_q1;
        CData/*0:0*/ bf16_block16__DOT__n420_q1;
        CData/*0:0*/ bf16_block16__DOT__n427_q1;
        CData/*0:0*/ bf16_block16__DOT__n434_q1;
        CData/*0:0*/ bf16_block16__DOT__n441_q1;
        CData/*0:0*/ bf16_block16__DOT__n448_q1;
        CData/*0:0*/ bf16_block16__DOT__n455_q1;
        CData/*0:0*/ bf16_block16__DOT__n462_q1;
        CData/*0:0*/ bf16_block16__DOT__n469_q1;
        CData/*0:0*/ bf16_block16__DOT__n476_q1;
    };
    struct {
        CData/*0:0*/ bf16_block16__DOT__n483_q1;
        CData/*0:0*/ bf16_block16__DOT__n490_q1;
        CData/*0:0*/ bf16_block16__DOT__n497_q1;
        CData/*0:0*/ bf16_block16__DOT__n504_q1;
        CData/*0:0*/ bf16_block16__DOT__n509_q1;
        CData/*0:0*/ bf16_block16__DOT__n1328_q1;
        CData/*0:0*/ bf16_block16__DOT__n1327_q1;
        CData/*0:0*/ bf16_block16__DOT__n546_q1;
        CData/*0:0*/ bf16_block16__DOT__n546_q2;
        CData/*0:0*/ bf16_block16__DOT__n546_q3;
        CData/*0:0*/ bf16_block16__DOT__n546_q4;
        CData/*0:0*/ bf16_block16__DOT__n512_q1;
        CData/*0:0*/ bf16_block16__DOT__n512_q2;
        CData/*0:0*/ bf16_block16__DOT__n512_q3;
        CData/*0:0*/ bf16_block16__DOT__n512_q4;
        CData/*0:0*/ bf16_block16__DOT__n548_q1;
        CData/*0:0*/ bf16_block16__DOT__n548_q2;
        CData/*0:0*/ bf16_block16__DOT__n548_q3;
        CData/*0:0*/ bf16_block16__DOT__n548_q4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(a0,15,0);
        VL_IN16(a1,15,0);
        VL_IN16(a2,15,0);
        VL_IN16(a3,15,0);
        VL_IN16(a4,15,0);
        VL_IN16(a5,15,0);
        VL_IN16(a6,15,0);
        VL_IN16(a7,15,0);
        VL_IN16(a8,15,0);
        VL_IN16(a9,15,0);
        VL_IN16(a10,15,0);
        VL_IN16(a11,15,0);
        VL_IN16(a12,15,0);
        VL_IN16(a13,15,0);
        VL_IN16(a14,15,0);
        VL_IN16(a15,15,0);
        VL_IN16(b0,15,0);
        VL_IN16(b1,15,0);
        VL_IN16(b2,15,0);
        VL_IN16(b3,15,0);
        VL_IN16(b4,15,0);
        VL_IN16(b5,15,0);
        VL_IN16(b6,15,0);
        VL_IN16(b7,15,0);
        VL_IN16(b8,15,0);
        VL_IN16(b9,15,0);
        VL_IN16(b10,15,0);
        VL_IN16(b11,15,0);
        VL_IN16(b12,15,0);
        VL_IN16(b13,15,0);
        VL_IN16(b14,15,0);
        VL_IN16(b15,15,0);
        SData/*15:0*/ bf16_block16__DOT__n556;
        SData/*15:0*/ bf16_block16__DOT__n556_q1;
        SData/*15:0*/ bf16_block16__DOT__n583;
        SData/*10:0*/ bf16_block16__DOT__n576_q1;
        SData/*10:0*/ bf16_block16__DOT__n596_q1;
        SData/*15:0*/ bf16_block16__DOT__n605;
        SData/*15:0*/ bf16_block16__DOT__n625;
        SData/*10:0*/ bf16_block16__DOT__n618_q1;
        SData/*10:0*/ bf16_block16__DOT__n638_q1;
    };
    struct {
        SData/*15:0*/ bf16_block16__DOT__n649;
        SData/*15:0*/ bf16_block16__DOT__n669;
        SData/*10:0*/ bf16_block16__DOT__n662_q1;
        SData/*10:0*/ bf16_block16__DOT__n682_q1;
        SData/*15:0*/ bf16_block16__DOT__n691;
        SData/*15:0*/ bf16_block16__DOT__n711;
        SData/*10:0*/ bf16_block16__DOT__n704_q1;
        SData/*10:0*/ bf16_block16__DOT__n724_q1;
        SData/*15:0*/ bf16_block16__DOT__n737;
        SData/*15:0*/ bf16_block16__DOT__n757;
        SData/*10:0*/ bf16_block16__DOT__n750_q1;
        SData/*10:0*/ bf16_block16__DOT__n770_q1;
        SData/*15:0*/ bf16_block16__DOT__n779;
        SData/*15:0*/ bf16_block16__DOT__n799;
        SData/*10:0*/ bf16_block16__DOT__n792_q1;
        SData/*10:0*/ bf16_block16__DOT__n812_q1;
        SData/*15:0*/ bf16_block16__DOT__n823;
        SData/*15:0*/ bf16_block16__DOT__n843;
        SData/*10:0*/ bf16_block16__DOT__n836_q1;
        SData/*10:0*/ bf16_block16__DOT__n856_q1;
        SData/*15:0*/ bf16_block16__DOT__n865;
        SData/*15:0*/ bf16_block16__DOT__n885;
        SData/*10:0*/ bf16_block16__DOT__n878_q1;
        SData/*10:0*/ bf16_block16__DOT__n898_q1;
        SData/*10:0*/ bf16_block16__DOT__n915_q1;
        SData/*10:0*/ bf16_block16__DOT__n917;
        SData/*15:0*/ bf16_block16__DOT__n583_q1;
        SData/*15:0*/ bf16_block16__DOT__n605_q1;
        SData/*15:0*/ bf16_block16__DOT__n625_q1;
        SData/*15:0*/ bf16_block16__DOT__n649_q1;
        SData/*15:0*/ bf16_block16__DOT__n669_q1;
        SData/*15:0*/ bf16_block16__DOT__n691_q1;
        SData/*15:0*/ bf16_block16__DOT__n711_q1;
        SData/*15:0*/ bf16_block16__DOT__n737_q1;
        SData/*15:0*/ bf16_block16__DOT__n757_q1;
        SData/*15:0*/ bf16_block16__DOT__n779_q1;
        SData/*15:0*/ bf16_block16__DOT__n799_q1;
        SData/*15:0*/ bf16_block16__DOT__n823_q1;
        SData/*15:0*/ bf16_block16__DOT__n843_q1;
        SData/*15:0*/ bf16_block16__DOT__n865_q1;
        SData/*15:0*/ bf16_block16__DOT__n885_q1;
        SData/*10:0*/ bf16_block16__DOT__n917_q1;
        SData/*10:0*/ bf16_block16__DOT__n917_q2;
        SData/*10:0*/ bf16_block16__DOT__n1378;
        SData/*10:0*/ bf16_block16__DOT__n1401_q1;
        VL_IN(c,31,0);
        VL_OUT(y,31,0);
        IData/*23:0*/ bf16_block16__DOT__n909;
        IData/*25:0*/ bf16_block16__DOT__n938;
        IData/*25:0*/ bf16_block16__DOT__n961;
        IData/*25:0*/ bf16_block16__DOT__n940_q1;
        IData/*25:0*/ bf16_block16__DOT__n963_q1;
        IData/*25:0*/ bf16_block16__DOT__n985;
        IData/*25:0*/ bf16_block16__DOT__n1008;
        IData/*25:0*/ bf16_block16__DOT__n987_q1;
        IData/*25:0*/ bf16_block16__DOT__n1010_q1;
        IData/*25:0*/ bf16_block16__DOT__n1033;
        IData/*25:0*/ bf16_block16__DOT__n1056;
        IData/*25:0*/ bf16_block16__DOT__n1035_q1;
        IData/*25:0*/ bf16_block16__DOT__n1058_q1;
        IData/*25:0*/ bf16_block16__DOT__n1080;
        IData/*25:0*/ bf16_block16__DOT__n1103;
        IData/*25:0*/ bf16_block16__DOT__n1082_q1;
        IData/*25:0*/ bf16_block16__DOT__n1105_q1;
    };
    struct {
        IData/*25:0*/ bf16_block16__DOT__n1129;
        IData/*25:0*/ bf16_block16__DOT__n1152;
        IData/*25:0*/ bf16_block16__DOT__n1131_q1;
        IData/*25:0*/ bf16_block16__DOT__n1154_q1;
        IData/*25:0*/ bf16_block16__DOT__n1176;
        IData/*25:0*/ bf16_block16__DOT__n1199;
        IData/*25:0*/ bf16_block16__DOT__n1178_q1;
        IData/*25:0*/ bf16_block16__DOT__n1201_q1;
        IData/*25:0*/ bf16_block16__DOT__n1224;
        IData/*25:0*/ bf16_block16__DOT__n1247;
        IData/*25:0*/ bf16_block16__DOT__n1226_q1;
        IData/*25:0*/ bf16_block16__DOT__n1249_q1;
        IData/*25:0*/ bf16_block16__DOT__n1271;
        IData/*25:0*/ bf16_block16__DOT__n1294;
        IData/*25:0*/ bf16_block16__DOT__n1273_q1;
        IData/*25:0*/ bf16_block16__DOT__n1296_q1;
        IData/*23:0*/ bf16_block16__DOT__n909_q1;
        IData/*25:0*/ bf16_block16__DOT__n1322;
        IData/*25:0*/ bf16_block16__DOT__n1324_q1;
        IData/*25:0*/ bf16_block16__DOT__n1325_q1;
        IData/*25:0*/ bf16_block16__DOT__n1370;
        IData/*25:0*/ bf16_block16__DOT__n1389_q1;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbf16_block16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbf16_block16___024root(Vbf16_block16__Syms* symsp, const char* v__name);
    ~Vbf16_block16___024root();
    VL_UNCOPYABLE(Vbf16_block16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
