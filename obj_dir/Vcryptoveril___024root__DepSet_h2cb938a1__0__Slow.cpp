// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcryptoveril.h for the primary calling header

#include "Vcryptoveril__pch.h"
#include "Vcryptoveril___024root.h"

VL_ATTR_COLD void Vcryptoveril___024root___eval_static(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcryptoveril___024root___eval_initial(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk1__0 = vlSelf->clk1;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr___TOP__clk2__0 = vlSelf->clk2;
    vlSelf->__Vtrigprevexpr___TOP__clk3__0 = vlSelf->clk3;
}

VL_ATTR_COLD void Vcryptoveril___024root___eval_final(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__stl(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcryptoveril___024root___eval_phase__stl(Vcryptoveril___024root* vlSelf);

VL_ATTR_COLD void Vcryptoveril___024root___eval_settle(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcryptoveril___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("cryptoveril.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcryptoveril___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__stl(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcryptoveril___024root___ico_sequent__TOP__0(Vcryptoveril___024root* vlSelf);

VL_ATTR_COLD void Vcryptoveril___024root___eval_stl(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcryptoveril___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcryptoveril___024root___eval_triggers__stl(Vcryptoveril___024root* vlSelf);

VL_ATTR_COLD bool Vcryptoveril___024root___eval_phase__stl(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcryptoveril___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcryptoveril___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__ico(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__act(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk1 or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk2 or posedge rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk3 or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__nba(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk1 or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk2 or posedge rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk3 or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcryptoveril___024root___ctor_var_reset(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk1 = VL_RAND_RESET_I(1);
    vlSelf->clk2 = VL_RAND_RESET_I(1);
    vlSelf->clk3 = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->input_data = VL_RAND_RESET_I(16);
    vlSelf->key_bits = VL_RAND_RESET_I(6);
    vlSelf->output_data = VL_RAND_RESET_I(16);
    vlSelf->cryptoveril__DOT__stage1_out = VL_RAND_RESET_I(16);
    vlSelf->cryptoveril__DOT__stage1_valid = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__buf1_ready = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__buf1_out = VL_RAND_RESET_I(16);
    vlSelf->cryptoveril__DOT__buf1_valid = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__stage2_ready = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__stage2_out = VL_RAND_RESET_I(16);
    vlSelf->cryptoveril__DOT__stage2_valid = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__buf2_ready = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__buf2_out = VL_RAND_RESET_I(16);
    vlSelf->cryptoveril__DOT__buf2_valid = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__stage3_ready = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__stage3_valid = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__u_buf1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->cryptoveril__DOT__u_stage2__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->cryptoveril__DOT__u_stage2__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->cryptoveril__DOT__u_buf2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cryptoveril__DOT__u_buf1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cryptoveril__DOT__buf1_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cryptoveril__DOT__buf1_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cryptoveril__DOT__u_buf2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cryptoveril__DOT__buf2_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cryptoveril__DOT__buf2_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk3__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
