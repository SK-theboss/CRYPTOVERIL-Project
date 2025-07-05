// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcryptoveril.h for the primary calling header

#include "Vcryptoveril__pch.h"
#include "Vcryptoveril__Syms.h"
#include "Vcryptoveril___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__ico(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG

void Vcryptoveril___024root___eval_triggers__ico(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcryptoveril___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__act(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG

void Vcryptoveril___024root___eval_triggers__act(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk1) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk1__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk2) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk2__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk3) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk3__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk1__0 = vlSelf->clk1;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr___TOP__clk2__0 = vlSelf->clk2;
    vlSelf->__Vtrigprevexpr___TOP__clk3__0 = vlSelf->clk3;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcryptoveril___024root___dump_triggers__act(vlSelf);
    }
#endif
}
