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
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire),4);
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__Floating_Point_Unit__DOT__small_A_wire));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire),6);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__Floating_Point_Unit__DOT__result_wire),6);
        bufp->chgCData(oldp+7,((0x20U | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                         << 1U))),6);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract),5);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_fract),4);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__normalize_module__result_exp),3);
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__Floating_Point_Unit__DOT____Vcellout__result_sign_module__result_sign));
        bufp->chgCData(oldp+12,((0xfU & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                          ? ((IData)(1U) 
                                             + (~ (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                          : (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))),4);
    }
    bufp->chgBit(oldp+13,(vlSelf->clk_i));
    bufp->chgCData(oldp+14,(vlSelf->op_A),8);
    bufp->chgCData(oldp+15,(vlSelf->op_B),8);
    bufp->chgBit(oldp+16,(vlSelf->sel_i));
    bufp->chgBit(oldp+17,(vlSelf->zero_detect));
    bufp->chgCData(oldp+18,(vlSelf->result),8);
    bufp->chgCData(oldp+19,((7U & ((8U & (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire))
                                    ? ((IData)(vlSelf->op_B) 
                                       >> 4U) : ((IData)(vlSelf->op_A) 
                                                 >> 4U)))),3);
    bufp->chgCData(oldp+20,((0xfU & ((0U == VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                      ? (VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,5, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__fraction_compare_module__DOT__subtract_fract)))
                                          ? (IData)(vlSelf->op_B)
                                          : (IData)(vlSelf->op_A))
                                      : (VL_LTS_III(32, 0U, 
                                                    VL_EXTENDS_II(32,4, (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__exp_diff_wire)))
                                          ? (IData)(vlSelf->op_B)
                                          : (IData)(vlSelf->op_A))))),4);
    bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->sel_i)
                                  ? (1U & (((0x20U 
                                             | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                << 1U)) 
                                            - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                           >> 6U)) : 
                                 ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_big_wire)
                                   ? ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire)
                                       ? (1U & (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                                                 + 
                                                 (0x20U 
                                                  | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                     << 1U))) 
                                                >> 6U))
                                       : (1U & (((0x20U 
                                                  | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                     << 1U)) 
                                                 - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                                >> 6U)))
                                   : ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__sign_small_wire)
                                       ? (1U & (((0x20U 
                                                  | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                     << 1U)) 
                                                 - (IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire)) 
                                                >> 6U))
                                       : (1U & (((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__shifted_fract_wire) 
                                                 + 
                                                 (0x20U 
                                                  | ((IData)(vlSelf->top__DOT__Floating_Point_Unit__DOT__bigger_fract_wire) 
                                                     << 1U))) 
                                                >> 6U))))))));
    bufp->chgCData(oldp+22,((7U & ((IData)(vlSelf->op_A) 
                                   >> 4U))),3);
    bufp->chgCData(oldp+23,((7U & ((IData)(vlSelf->op_B) 
                                   >> 4U))),3);
    bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->op_A) 
                                 >> 7U))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->op_B) 
                                 >> 7U))));
    bufp->chgCData(oldp+26,((0xfU & (IData)(vlSelf->op_A))),4);
    bufp->chgCData(oldp+27,((0xfU & (IData)(vlSelf->op_B))),4);
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
