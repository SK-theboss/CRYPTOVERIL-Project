// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcryptoveril.h for the primary calling header

#include "Vcryptoveril__pch.h"
#include "Vcryptoveril__Syms.h"
#include "Vcryptoveril___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcryptoveril___024root___dump_triggers__stl(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcryptoveril___024root___eval_triggers__stl(Vcryptoveril___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcryptoveril___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
