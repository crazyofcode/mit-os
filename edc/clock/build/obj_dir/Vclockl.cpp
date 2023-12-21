// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclockl.h"
#include "Vclockl__Syms.h"

//============================================================
// Constructors

Vclockl::Vclockl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclockl__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , BTNL{vlSymsp->TOP.BTNL}
    , sw{vlSymsp->TOP.sw}
    , seg0{vlSymsp->TOP.seg0}
    , seg1{vlSymsp->TOP.seg1}
    , seg2{vlSymsp->TOP.seg2}
    , seg3{vlSymsp->TOP.seg3}
    , seg4{vlSymsp->TOP.seg4}
    , seg5{vlSymsp->TOP.seg5}
    , led{vlSymsp->TOP.led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclockl::Vclockl(const char* _vcname__)
    : Vclockl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclockl::~Vclockl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclockl___024root___eval_debug_assertions(Vclockl___024root* vlSelf);
#endif  // VL_DEBUG
void Vclockl___024root___eval_static(Vclockl___024root* vlSelf);
void Vclockl___024root___eval_initial(Vclockl___024root* vlSelf);
void Vclockl___024root___eval_settle(Vclockl___024root* vlSelf);
void Vclockl___024root___eval(Vclockl___024root* vlSelf);

void Vclockl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclockl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclockl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclockl___024root___eval_static(&(vlSymsp->TOP));
        Vclockl___024root___eval_initial(&(vlSymsp->TOP));
        Vclockl___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclockl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclockl::eventsPending() { return false; }

uint64_t Vclockl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vclockl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclockl___024root___eval_final(Vclockl___024root* vlSelf);

VL_ATTR_COLD void Vclockl::final() {
    Vclockl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclockl::hierName() const { return vlSymsp->name(); }
const char* Vclockl::modelName() const { return "Vclockl"; }
unsigned Vclockl::threads() const { return 1; }
