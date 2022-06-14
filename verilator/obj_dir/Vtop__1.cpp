// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_multiclk__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__11\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__CEN 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    if (((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk_48)) & (IData)(vlTOPp->__Vclklast__TOP__clk_48))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if (((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_48) ^ (IData)(vlTOPp->__Vclklast__TOP__clk_48))) {
        vlTOPp->_multiclk__TOP__9(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_48) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_48))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_48) ^ (IData)(vlTOPp->__Vclklast__TOP__clk_48)) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n)))) {
        vlTOPp->_multiclk__TOP__11(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_48 = vlTOPp->clk_48;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    vlTOPp->__VinpClk__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n ^ vlTOPp->__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n ^ vlTOPp->__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n))) VL_DBG_MSGF("        CHANGE: ../rtl/TV80/tv80pa.v:38: top.zx81a.__Vcellinp__cpu__reset_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_48 & 0xfeU))) {
        Verilated::overWidthError("clk_48");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((inputs & 0xf000U))) {
        Verilated::overWidthError("inputs");}
    if (VL_UNLIKELY((ioctl_download & 0xfeU))) {
        Verilated::overWidthError("ioctl_download");}
    if (VL_UNLIKELY((ioctl_upload & 0xfeU))) {
        Verilated::overWidthError("ioctl_upload");}
    if (VL_UNLIKELY((ioctl_wr & 0xfeU))) {
        Verilated::overWidthError("ioctl_wr");}
    if (VL_UNLIKELY((ioctl_addr & 0xfe000000U))) {
        Verilated::overWidthError("ioctl_addr");}
}
#endif  // VL_DEBUG
