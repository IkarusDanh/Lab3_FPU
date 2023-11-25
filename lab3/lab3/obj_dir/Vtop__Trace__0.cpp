// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((0U == (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire))));
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire),4);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire));
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire),6);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire),6);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__Floating_Point_Unit__DOT__overflow_wire));
        bufp->chgCData(oldp+9,((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                         << 1U))),6);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract),5);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp),3);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign));
        bufp->chgCData(oldp+14,((0xfU & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                          ? ((IData)(1U) 
                                             + (~ (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                          : (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))),4);
    }
    bufp->chgBit(oldp+15,(vlSelf->clk_i));
    bufp->chgIData(oldp+16,(vlSelf->SW),18);
    bufp->chgIData(oldp+17,(vlSelf->LEDR),18);
    bufp->chgCData(oldp+18,(vlSelf->LEDG),8);
    bufp->chgCData(oldp+19,((0xffU & vlSelf->SW)),8);
    bufp->chgCData(oldp+20,((0xffU & (vlSelf->SW >> 8U))),8);
    bufp->chgBit(oldp+21,((1U & (vlSelf->SW >> 0x10U))));
    bufp->chgCData(oldp+22,((7U & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                    ? (vlSelf->SW >> 0xcU)
                                    : (vlSelf->SW >> 4U)))),3);
    bufp->chgCData(oldp+23,((0xfU & ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                      ? (VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract)))
                                          ? (vlSelf->SW 
                                             >> 8U)
                                          : vlSelf->SW)
                                      : (VL_LTS_III(32, 0U, 
                                                    VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                          ? (vlSelf->SW 
                                             >> 8U)
                                          : vlSelf->SW)))),4);
    bufp->chgCData(oldp+24,((7U & (vlSelf->SW >> 4U))),3);
    bufp->chgCData(oldp+25,((7U & (vlSelf->SW >> 0xcU))),3);
    bufp->chgBit(oldp+26,((1U & (vlSelf->SW >> 7U))));
    bufp->chgBit(oldp+27,((1U & (vlSelf->SW >> 0xfU))));
    bufp->chgCData(oldp+28,((0xfU & vlSelf->SW)),4);
    bufp->chgCData(oldp+29,((0xfU & (vlSelf->SW >> 8U))),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
