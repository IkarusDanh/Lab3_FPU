// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->SW = VL_RAND_RESET_I(18);
    vlSelf->LEDR = VL_RAND_RESET_I(18);
    vlSelf->LEDG = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
