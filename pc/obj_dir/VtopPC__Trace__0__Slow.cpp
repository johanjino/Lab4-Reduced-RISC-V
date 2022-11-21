// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VtopPC__Syms.h"


VL_ATTR_COLD void VtopPC___024root__trace_init_sub__TOP__0(VtopPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("topPC ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"pc_out", false,-1, 31,0);
    tracep->declBus(c+6,"next_PC", false,-1, 31,0);
    tracep->declBus(c+7,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("pcReg ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+6,"next_PC", false,-1, 31,0);
    tracep->declBus(c+7,"pc", false,-1, 31,0);
    tracep->declBus(c+5,"another_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+7,"pc", false,-1, 31,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+6,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VtopPC___024root__trace_init_top(VtopPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_init_top\n"); );
    // Body
    VtopPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VtopPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtopPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtopPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VtopPC___024root__trace_register(VtopPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VtopPC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VtopPC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VtopPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VtopPC___024root__trace_full_sub_0(VtopPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VtopPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_full_top_0\n"); );
    // Init
    VtopPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopPC___024root*>(voidSelf);
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VtopPC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VtopPC___024root__trace_full_sub_0(VtopPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VtopPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopPC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->PCsrc));
    bufp->fullIData(oldp+5,(vlSelf->pc_out),32);
    bufp->fullIData(oldp+6,(vlSelf->topPC__DOT__next_PC),32);
    bufp->fullIData(oldp+7,(vlSelf->topPC__DOT__pc),32);
    bufp->fullIData(oldp+8,(0x20U),32);
}
