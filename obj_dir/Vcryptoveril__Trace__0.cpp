// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcryptoveril__Syms.h"


void Vcryptoveril___024root__trace_chg_0_sub_0(Vcryptoveril___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcryptoveril___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root__trace_chg_0\n"); );
    // Init
    Vcryptoveril___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcryptoveril___024root*>(voidSelf);
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcryptoveril___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcryptoveril___024root__trace_chg_0_sub_0(Vcryptoveril___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->cryptoveril__DOT__stage2_out),16);
        bufp->chgBit(oldp+1,(vlSelf->cryptoveril__DOT__stage2_valid));
        bufp->chgSData(oldp+2,(vlSelf->cryptoveril__DOT__buf2_out),16);
        bufp->chgBit(oldp+3,(vlSelf->cryptoveril__DOT__u_buf2__DOT__full));
        bufp->chgCData(oldp+4,(vlSelf->cryptoveril__DOT__u_stage2__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+5,(vlSelf->cryptoveril__DOT__stage1_out),16);
        bufp->chgBit(oldp+6,(vlSelf->cryptoveril__DOT__stage1_valid));
        bufp->chgBit(oldp+7,(vlSelf->cryptoveril__DOT__buf1_ready));
        bufp->chgSData(oldp+8,(vlSelf->cryptoveril__DOT__buf1_out),16);
        bufp->chgBit(oldp+9,(vlSelf->cryptoveril__DOT__u_buf1__DOT__full));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+10,(vlSelf->cryptoveril__DOT__stage2_ready));
        bufp->chgBit(oldp+11,(vlSelf->cryptoveril__DOT__buf2_ready));
        bufp->chgBit(oldp+12,(vlSelf->cryptoveril__DOT__buf2_valid));
    }
    bufp->chgBit(oldp+13,(vlSelf->clk1));
    bufp->chgBit(oldp+14,(vlSelf->clk2));
    bufp->chgBit(oldp+15,(vlSelf->clk3));
    bufp->chgBit(oldp+16,(vlSelf->rst));
    bufp->chgSData(oldp+17,(vlSelf->input_data),16);
    bufp->chgCData(oldp+18,(vlSelf->key_bits),6);
    bufp->chgSData(oldp+19,(vlSelf->output_data),16);
    bufp->chgBit(oldp+20,(vlSelf->cryptoveril__DOT__buf1_valid));
    bufp->chgBit(oldp+21,(vlSelf->cryptoveril__DOT__stage3_ready));
    bufp->chgBit(oldp+22,(vlSelf->cryptoveril__DOT__stage3_valid));
    bufp->chgCData(oldp+23,((7U & (IData)(vlSelf->key_bits))),3);
    bufp->chgCData(oldp+24,((3U & ((IData)(vlSelf->key_bits) 
                                   >> 3U))),2);
    bufp->chgCData(oldp+25,((3U & (((IData)(vlSelf->key_bits) 
                                    >> 3U) ^ (IData)(vlSelf->cryptoveril__DOT__u_stage2__DOT__state)))),2);
}

void Vcryptoveril___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcryptoveril___024root__trace_cleanup\n"); );
    // Init
    Vcryptoveril___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcryptoveril___024root*>(voidSelf);
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
