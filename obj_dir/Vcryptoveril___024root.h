// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcryptoveril.h for the primary calling header

#ifndef VERILATED_VCRYPTOVERIL___024ROOT_H_
#define VERILATED_VCRYPTOVERIL___024ROOT_H_  // guard

#include "verilated.h"


class Vcryptoveril__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcryptoveril___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_in,7,0);
    VL_OUT8(data_out,7,0);
    CData/*7:0*/ cryptoveril__DOT__stage1_out;
    CData/*7:0*/ cryptoveril__DOT__stage2_out;
    CData/*7:0*/ cryptoveril__DOT__stage3_out;
    CData/*7:0*/ cryptoveril__DOT__buf1_out;
    CData/*7:0*/ cryptoveril__DOT__buf2_out;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcryptoveril__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcryptoveril___024root(Vcryptoveril__Syms* symsp, const char* v__name);
    ~Vcryptoveril___024root();
    VL_UNCOPYABLE(Vcryptoveril___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
