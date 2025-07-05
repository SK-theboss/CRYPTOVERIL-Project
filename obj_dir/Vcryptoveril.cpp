// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcryptoveril__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcryptoveril::Vcryptoveril(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcryptoveril__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcryptoveril::Vcryptoveril(const char* _vcname__)
    : Vcryptoveril(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcryptoveril::~Vcryptoveril() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcryptoveril___024root___eval_debug_assertions(Vcryptoveril___024root* vlSelf);
#endif  // VL_DEBUG
void Vcryptoveril___024root___eval_static(Vcryptoveril___024root* vlSelf);
void Vcryptoveril___024root___eval_initial(Vcryptoveril___024root* vlSelf);
void Vcryptoveril___024root___eval_settle(Vcryptoveril___024root* vlSelf);
void Vcryptoveril___024root___eval(Vcryptoveril___024root* vlSelf);

void Vcryptoveril::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcryptoveril::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcryptoveril___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcryptoveril___024root___eval_static(&(vlSymsp->TOP));
        Vcryptoveril___024root___eval_initial(&(vlSymsp->TOP));
        Vcryptoveril___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcryptoveril___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcryptoveril::eventsPending() { return false; }

uint64_t Vcryptoveril::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcryptoveril::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcryptoveril___024root___eval_final(Vcryptoveril___024root* vlSelf);

VL_ATTR_COLD void Vcryptoveril::final() {
    Vcryptoveril___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcryptoveril::hierName() const { return vlSymsp->name(); }
const char* Vcryptoveril::modelName() const { return "Vcryptoveril"; }
unsigned Vcryptoveril::threads() const { return 1; }
void Vcryptoveril::prepareClone() const { contextp()->prepareClone(); }
void Vcryptoveril::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcryptoveril::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcryptoveril___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcryptoveril___024root__trace_init_top(Vcryptoveril___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcryptoveril___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcryptoveril___024root*>(voidSelf);
    Vcryptoveril__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcryptoveril___024root__trace_decl_types(tracep);
    Vcryptoveril___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcryptoveril___024root__trace_register(Vcryptoveril___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcryptoveril::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcryptoveril::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcryptoveril___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
