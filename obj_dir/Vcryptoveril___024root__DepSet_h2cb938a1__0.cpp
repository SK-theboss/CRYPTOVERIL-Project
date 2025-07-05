// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcryptoveril.h for the primary calling header

#include "Vcryptoveril__pch.h"
#include "Vcryptoveril___024root.h"

VL_INLINE_OPT void Vcryptoveril___024root___ico_sequent__TOP__0(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->cryptoveril__DOT__u_stage2__DOT__next_state 
        = (3U & (((IData)(vlSelf->key_bits) >> 3U) 
                 ^ (IData)(vlSelf->cryptoveril__DOT__u_stage2__DOT__state)));
}

void Vcryptoveril___024root___eval_ico(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vcryptoveril___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcryptoveril___024root___eval_triggers__ico(Vcryptoveril___024root* vlSelf);

bool Vcryptoveril___024root___eval_phase__ico(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcryptoveril___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vcryptoveril___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcryptoveril___024root___eval_act(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__0(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__cryptoveril__DOT__buf1_ready = vlSelf->cryptoveril__DOT__buf1_ready;
    vlSelf->__Vdly__cryptoveril__DOT__buf1_valid = vlSelf->cryptoveril__DOT__buf1_valid;
    vlSelf->__Vdly__cryptoveril__DOT__u_buf1__DOT__full 
        = vlSelf->cryptoveril__DOT__u_buf1__DOT__full;
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__1(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__cryptoveril__DOT__buf2_ready = vlSelf->cryptoveril__DOT__buf2_ready;
    vlSelf->__Vdly__cryptoveril__DOT__buf2_valid = vlSelf->cryptoveril__DOT__buf2_valid;
    vlSelf->__Vdly__cryptoveril__DOT__u_buf2__DOT__full 
        = vlSelf->cryptoveril__DOT__u_buf2__DOT__full;
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__2(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->cryptoveril__DOT__stage3_valid = ((1U & 
                                               (~ (IData)(vlSelf->rst))) 
                                              && (IData)(vlSelf->cryptoveril__DOT__buf2_valid));
    if (vlSelf->rst) {
        vlSelf->output_data = 0U;
    } else if (vlSelf->cryptoveril__DOT__buf2_valid) {
        vlSelf->output_data = vlSelf->cryptoveril__DOT__buf2_out;
    }
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__3(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__cryptoveril__DOT__u_buf2__DOT__full = 0U;
        vlSelf->cryptoveril__DOT__buf2_out = 0U;
        vlSelf->__Vdly__cryptoveril__DOT__buf2_valid = 0U;
        vlSelf->__Vdly__cryptoveril__DOT__buf2_ready = 1U;
        vlSelf->cryptoveril__DOT__stage2_out = 0U;
        vlSelf->cryptoveril__DOT__u_stage2__DOT__state = 0U;
    } else {
        if (((IData)(vlSelf->cryptoveril__DOT__stage2_valid) 
             & (IData)(vlSelf->cryptoveril__DOT__buf2_ready))) {
            vlSelf->cryptoveril__DOT__buf2_out = vlSelf->cryptoveril__DOT__stage2_out;
            vlSelf->__Vdly__cryptoveril__DOT__buf2_valid = 1U;
            vlSelf->__Vdly__cryptoveril__DOT__u_buf2__DOT__full = 1U;
            vlSelf->__Vdly__cryptoveril__DOT__buf2_ready = 0U;
        } else if (((IData)(vlSelf->cryptoveril__DOT__stage3_ready) 
                    & (IData)(vlSelf->cryptoveril__DOT__u_buf2__DOT__full))) {
            vlSelf->__Vdly__cryptoveril__DOT__buf2_valid = 0U;
            vlSelf->__Vdly__cryptoveril__DOT__u_buf2__DOT__full = 0U;
            vlSelf->__Vdly__cryptoveril__DOT__buf2_ready = 1U;
        }
        if (((IData)(vlSelf->cryptoveril__DOT__buf1_valid) 
             & (IData)(vlSelf->cryptoveril__DOT__buf2_ready))) {
            vlSelf->cryptoveril__DOT__stage2_out = 
                ((2U & (IData)(vlSelf->cryptoveril__DOT__u_stage2__DOT__state))
                  ? ((1U & (IData)(vlSelf->cryptoveril__DOT__u_stage2__DOT__state))
                      ? ((0x8000U & (IData)(vlSelf->cryptoveril__DOT__buf1_out)) 
                         | (0x7fffU & ((IData)(vlSelf->cryptoveril__DOT__buf1_out) 
                                       >> 1U))) : (0xf0f0U 
                                                   | (IData)(vlSelf->cryptoveril__DOT__buf1_out)))
                  : ((1U & (IData)(vlSelf->cryptoveril__DOT__u_stage2__DOT__state))
                      ? (0xf0fU & (IData)(vlSelf->cryptoveril__DOT__buf1_out))
                      : ((0xfffeU & ((IData)(vlSelf->cryptoveril__DOT__buf1_out) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(vlSelf->cryptoveril__DOT__buf1_out)))));
            vlSelf->cryptoveril__DOT__u_stage2__DOT__state 
                = vlSelf->cryptoveril__DOT__u_stage2__DOT__next_state;
        }
    }
    vlSelf->cryptoveril__DOT__u_buf2__DOT__full = vlSelf->__Vdly__cryptoveril__DOT__u_buf2__DOT__full;
    vlSelf->cryptoveril__DOT__stage2_valid = ((1U & 
                                               (~ (IData)(vlSelf->rst))) 
                                              && ((IData)(vlSelf->cryptoveril__DOT__buf1_valid) 
                                                  & (IData)(vlSelf->cryptoveril__DOT__buf2_ready)));
    vlSelf->cryptoveril__DOT__u_stage2__DOT__next_state 
        = (3U & (((IData)(vlSelf->key_bits) >> 3U) 
                 ^ (IData)(vlSelf->cryptoveril__DOT__u_stage2__DOT__state)));
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__4(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->cryptoveril__DOT__stage3_ready = ((1U & 
                                               (~ (IData)(vlSelf->rst))) 
                                              && (IData)(vlSelf->cryptoveril__DOT__buf2_valid));
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__5(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__cryptoveril__DOT__u_buf1__DOT__full = 0U;
        vlSelf->cryptoveril__DOT__buf1_out = 0U;
        vlSelf->__Vdly__cryptoveril__DOT__buf1_valid = 0U;
        vlSelf->__Vdly__cryptoveril__DOT__buf1_ready = 1U;
        vlSelf->cryptoveril__DOT__stage1_out = 0U;
    } else {
        if (((IData)(vlSelf->cryptoveril__DOT__stage1_valid) 
             & (IData)(vlSelf->cryptoveril__DOT__buf1_ready))) {
            vlSelf->cryptoveril__DOT__buf1_out = vlSelf->cryptoveril__DOT__stage1_out;
            vlSelf->__Vdly__cryptoveril__DOT__buf1_valid = 1U;
            vlSelf->__Vdly__cryptoveril__DOT__u_buf1__DOT__full = 1U;
            vlSelf->__Vdly__cryptoveril__DOT__buf1_ready = 0U;
        } else if (((IData)(vlSelf->cryptoveril__DOT__stage2_ready) 
                    & (IData)(vlSelf->cryptoveril__DOT__u_buf1__DOT__full))) {
            vlSelf->__Vdly__cryptoveril__DOT__buf1_valid = 0U;
            vlSelf->__Vdly__cryptoveril__DOT__u_buf1__DOT__full = 0U;
            vlSelf->__Vdly__cryptoveril__DOT__buf1_ready = 1U;
        }
        vlSelf->cryptoveril__DOT__stage1_out = (0xffffU 
                                                & (((IData)(vlSelf->input_data) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSelf->key_bits))) 
                                                   + 
                                                   (7U 
                                                    & (IData)(vlSelf->key_bits))));
    }
    vlSelf->cryptoveril__DOT__u_buf1__DOT__full = vlSelf->__Vdly__cryptoveril__DOT__u_buf1__DOT__full;
    vlSelf->cryptoveril__DOT__buf1_ready = vlSelf->__Vdly__cryptoveril__DOT__buf1_ready;
    vlSelf->cryptoveril__DOT__stage1_valid = (1U & 
                                              (~ (IData)(vlSelf->rst)));
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__6(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->cryptoveril__DOT__buf2_valid = vlSelf->__Vdly__cryptoveril__DOT__buf2_valid;
    vlSelf->cryptoveril__DOT__stage2_ready = ((1U & 
                                               (~ (IData)(vlSelf->rst))) 
                                              && ((IData)(vlSelf->cryptoveril__DOT__buf1_valid) 
                                                  & (IData)(vlSelf->cryptoveril__DOT__buf2_ready)));
    vlSelf->cryptoveril__DOT__buf2_ready = vlSelf->__Vdly__cryptoveril__DOT__buf2_ready;
}

VL_INLINE_OPT void Vcryptoveril___024root___nba_sequent__TOP__7(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->cryptoveril__DOT__buf1_valid = vlSelf->__Vdly__cryptoveril__DOT__buf1_valid;
}

void Vcryptoveril___024root___eval_nba(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcryptoveril___024root___nba_sequent__TOP__7(vlSelf);
    }
}

void Vcryptoveril___024root___eval_triggers__act(Vcryptoveril___024root* vlSelf);

bool Vcryptoveril___024root___eval_phase__act(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcryptoveril___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcryptoveril___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcryptoveril___024root___eval_phase__nba(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcryptoveril___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__ico(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__nba(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__act(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG

void Vcryptoveril___024root___eval(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vcryptoveril___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("cryptoveril.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcryptoveril___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcryptoveril___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("cryptoveril.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcryptoveril___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("cryptoveril.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcryptoveril___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcryptoveril___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcryptoveril___024root___eval_debug_assertions(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk1 & 0xfeU))) {
        Verilated::overWidthError("clk1");}
    if (VL_UNLIKELY((vlSelf->clk2 & 0xfeU))) {
        Verilated::overWidthError("clk2");}
    if (VL_UNLIKELY((vlSelf->clk3 & 0xfeU))) {
        Verilated::overWidthError("clk3");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->key_bits & 0xc0U))) {
        Verilated::overWidthError("key_bits");}
}
#endif  // VL_DEBUG
