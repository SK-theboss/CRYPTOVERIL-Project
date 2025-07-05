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
    VL_IN8(clk1,0,0);
    VL_IN8(clk2,0,0);
    VL_IN8(clk3,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(key_bits,5,0);
    CData/*0:0*/ cryptoveril__DOT__stage1_valid;
    CData/*0:0*/ cryptoveril__DOT__buf1_ready;
    CData/*0:0*/ cryptoveril__DOT__buf1_valid;
    CData/*0:0*/ cryptoveril__DOT__stage2_ready;
    CData/*0:0*/ cryptoveril__DOT__stage2_valid;
    CData/*0:0*/ cryptoveril__DOT__buf2_ready;
    CData/*0:0*/ cryptoveril__DOT__buf2_valid;
    CData/*0:0*/ cryptoveril__DOT__stage3_ready;
    CData/*0:0*/ cryptoveril__DOT__stage3_valid;
    CData/*0:0*/ cryptoveril__DOT__u_buf1__DOT__full;
    CData/*1:0*/ cryptoveril__DOT__u_stage2__DOT__state;
    CData/*1:0*/ cryptoveril__DOT__u_stage2__DOT__next_state;
    CData/*0:0*/ cryptoveril__DOT__u_buf2__DOT__full;
    CData/*0:0*/ __Vdly__cryptoveril__DOT__u_buf1__DOT__full;
    CData/*0:0*/ __Vdly__cryptoveril__DOT__buf1_valid;
    CData/*0:0*/ __Vdly__cryptoveril__DOT__buf1_ready;
    CData/*0:0*/ __Vdly__cryptoveril__DOT__u_buf2__DOT__full;
    CData/*0:0*/ __Vdly__cryptoveril__DOT__buf2_valid;
    CData/*0:0*/ __Vdly__cryptoveril__DOT__buf2_ready;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk3__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(input_data,15,0);
    VL_OUT16(output_data,15,0);
    SData/*15:0*/ cryptoveril__DOT__stage1_out;
    SData/*15:0*/ cryptoveril__DOT__buf1_out;
    SData/*15:0*/ cryptoveril__DOT__stage2_out;
    SData/*15:0*/ cryptoveril__DOT__buf2_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
