// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VerilatedContext* Vtop::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 6000)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sim.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 6000)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sim.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n;
    vlTOPp->top__DOT__inputs = vlTOPp->inputs;
    vlTOPp->top__DOT__ioctl_upload = vlTOPp->ioctl_upload;
    vlTOPp->top__DOT__ioctl_din = vlTOPp->ioctl_din;
    vlTOPp->top__DOT__playerinput = (0x50U | (((((0x200U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->inputs) 
                                                       >> 0xaU)) 
                                                     << 9U)) 
                                                 | (0x100U 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->inputs) 
                                                         >> 9U)) 
                                                       << 8U))) 
                                                | (0x80U 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->inputs) 
                                                        >> 8U)) 
                                                      << 7U))) 
                                               | (8U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->inputs) 
                                                       >> 7U)) 
                                                     << 3U))) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->inputs) 
                                                       >> 6U)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((IData)(vlTOPp->inputs) 
                                                          >> 5U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((IData)(vlTOPp->inputs) 
                                                           >> 4U)))))));
    vlTOPp->top__DOT__joystick = (((0x80U & ((~ (IData)(vlTOPp->inputs)) 
                                             << 7U)) 
                                   | ((0x40U & ((~ 
                                                 ((IData)(vlTOPp->inputs) 
                                                  >> 1U)) 
                                                << 6U)) 
                                      | ((0x20U & (
                                                   (~ 
                                                    ((IData)(vlTOPp->inputs) 
                                                     >> 2U)) 
                                                   << 5U)) 
                                         | (0x10U & 
                                            ((~ ((IData)(vlTOPp->inputs) 
                                                 >> 3U)) 
                                             << 4U))))) 
                                  | ((8U & ((~ (IData)(vlTOPp->inputs)) 
                                            << 3U)) 
                                     | ((4U & ((~ ((IData)(vlTOPp->inputs) 
                                                   >> 1U)) 
                                               << 2U)) 
                                        | ((2U & ((~ 
                                                   ((IData)(vlTOPp->inputs) 
                                                    >> 2U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((IData)(vlTOPp->inputs) 
                                                  >> 3U)))))));
    vlTOPp->top__DOT__pause = (1U & ((IData)(vlTOPp->inputs) 
                                     >> 0xbU));
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__address_b 
        = (0x3fffU & (vlTOPp->ioctl_addr >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__address_b 
        = (0x3fffU & (vlTOPp->ioctl_addr >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__address_b 
        = (0x3ffU & (vlTOPp->ioctl_addr >> 0U));
    vlTOPp->top__DOT__ioctl_download = vlTOPp->ioctl_download;
    vlTOPp->top__DOT__ioctl_wr = vlTOPp->ioctl_wr;
    vlTOPp->top__DOT__ioctl_addr = vlTOPp->ioctl_addr;
    vlTOPp->top__DOT__ioctl_index = vlTOPp->ioctl_index;
    vlTOPp->top__DOT__reset = vlTOPp->reset;
    vlTOPp->top__DOT__ioctl_dout = vlTOPp->ioctl_dout;
    vlTOPp->top__DOT__clk_48 = vlTOPp->clk_48;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__reset_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__reset_n;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_download = vlTOPp->top__DOT__ioctl_download;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_wr = vlTOPp->top__DOT__ioctl_wr;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_addr = vlTOPp->top__DOT__ioctl_addr;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_index = vlTOPp->top__DOT__ioctl_index;
    vlTOPp->top__DOT__zx81a__DOT__locked = vlTOPp->top__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__reset = vlTOPp->top__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__ioctl_dout = vlTOPp->top__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__clk_sys = vlTOPp->top__DOT__clk_48;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__RESET = vlTOPp->top__DOT__zx81a__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__reset = vlTOPp->top__DOT__zx81a__DOT__reset;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__data_b 
        = vlTOPp->top__DOT__zx81a__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__data_b 
        = vlTOPp->top__DOT__zx81a__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__data_b 
        = vlTOPp->top__DOT__zx81a__DOT__ioctl_dout;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__clock = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__clock = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__clock 
        = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__clock 
        = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CLK = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__clk_sys 
        = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__clk = vlTOPp->top__DOT__zx81a__DOT__clk_sys;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__clk 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__clk;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__clk 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__clk;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__tape_ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__tape_ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v0;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__tapeloader;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v4;
    CData/*7:0*/ __Vdly__top__DOT__zx81a__DOT__sync_counter;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__NMIlatch;
    CData/*4:0*/ __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__CEN_pol;
    CData/*1:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__intcycled_n;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__ram__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__rom__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__rom__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v1;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div;
    CData/*4:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v0;
    CData/*2:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v8;
    CData/*4:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__env_vol;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v0;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v8;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v8;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v9;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v9;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v10;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v10;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v11;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v11;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v12;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v12;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v13;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v13;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v14;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v14;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v15;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v15;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v16;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v16;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v17;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v17;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v18;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v18;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v19;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v19;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v20;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v20;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v20;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v21;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v21;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v21;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v22;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v22;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v22;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v23;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v23;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v24;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v24;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v25;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v25;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v25;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v26;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v26;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v27;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v27;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v27;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v28;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v28;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v29;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v29;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v29;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v30;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v30;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v30;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v31;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v31;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v32;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v32;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v33;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v33;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v33;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v34;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v34;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v34;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v35;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v35;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v36;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v36;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v37;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v37;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v37;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v38;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v38;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v38;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v39;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v39;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v39;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v40;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v40;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v40;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v41;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v41;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v41;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v42;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v42;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v42;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v43;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v43;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v43;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v44;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v44;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v45;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v45;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v45;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v46;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v46;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v46;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v47;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v47;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v47;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v48;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v48;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v48;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v49;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v49;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v49;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v50;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v50;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v50;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v51;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v51;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v51;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v52;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v52;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v52;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v53;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v53;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v53;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v54;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v54;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v54;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v55;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v55;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v55;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v56;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v56;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v56;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v57;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v57;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v57;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v58;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v58;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v58;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v59;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v59;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v59;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v60;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v60;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v60;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v61;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v61;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v61;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v62;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v62;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v62;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v63;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v63;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v63;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v64;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v64;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v64;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v65;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v65;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v65;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v66;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v66;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v66;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v67;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v67;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v67;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v68;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v68;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v68;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v69;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v69;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v69;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v70;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v70;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v70;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v71;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v71;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v71;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v72;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v72;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v72;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v73;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v73;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v73;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v74;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v74;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v74;
    CData/*2:0*/ __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v75;
    CData/*0:0*/ __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v75;
    CData/*0:0*/ __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v75;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__tape_ram__v0;
    SData/*13:0*/ __Vdly__top__DOT__zx81a__DOT__tape_addr;
    SData/*8:0*/ __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt;
    SData/*15:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__ram__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__ram__DOT__mem__v1;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__rom__DOT__mem__v0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__rom__DOT__mem__v1;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1;
    SData/*11:0*/ __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v1;
    SData/*11:0*/ __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v4;
    SData/*11:0*/ __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v7;
    SData/*15:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt;
    IData/*16:0*/ __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17;
    // Body
    __Vdlyvset__top__DOT__zx81a__DOT__tape_ram__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v0 = 0U;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div;
    __Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0U;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v2 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v3 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v4 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v5 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v6 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v7 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v8 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0 = 0U;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__intcycled_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycled_n;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__CEN_pol 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__CEN_pol;
    __Vdly__top__DOT__zx81a__DOT__sync_counter = vlTOPp->top__DOT__zx81a__DOT__sync_counter;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc;
    __Vdly__top__DOT__zx81a__DOT__psg__DOT__env_vol 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol;
    __Vdly__top__DOT__zx81a__DOT__tape_addr = vlTOPp->top__DOT__zx81a__DOT__tape_addr;
    __Vdly__top__DOT__zx81a__DOT__tapeloader = vlTOPp->top__DOT__zx81a__DOT__tapeloader;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v8 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v10 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v12 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v14 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v16 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v18 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v20 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v21 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v22 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v25 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v27 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v29 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v30 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v33 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v34 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v37 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v38 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v39 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v40 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v41 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v42 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v43 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v45 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v46 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v47 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v48 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v49 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v50 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v51 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v52 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v53 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v54 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v55 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v56 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v57 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v58 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v59 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v60 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v61 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v62 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v63 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v64 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v65 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v66 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v67 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v68 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v69 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v70 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v71 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v72 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v73 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v74 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v75 = 0U;
    __Vdly__top__DOT__zx81a__DOT__NMIlatch = vlTOPp->top__DOT__zx81a__DOT__NMIlatch;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v1 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17 = 0U;
    __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg 
        = vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg;
    __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt 
        = vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt;
    __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v0 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v1 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v2 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v3 = 0U;
    __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v4 = 0U;
    if (vlTOPp->top__DOT__zx81a__DOT__ce_psg) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__i = 2U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__i = 3U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__i = 4U;
    }
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk7__DOT__set_m0 = 0U;
    if (vlTOPp->ioctl_wr) {
        if (((0U != (0x1fU & (IData)(vlTOPp->ioctl_index))) 
             & (1U == (7U & ((IData)(vlTOPp->ioctl_index) 
                             >> 5U))))) {
            vlTOPp->top__DOT__zx81a__DOT__unnamedblk7__DOT__set_m0 = 1U;
        } else if ((1U & (~ ((IData)(vlTOPp->ioctl_index) 
                             >> 5U)))) {
            vlTOPp->top__DOT__zx81a__DOT__unnamedblk7__DOT__set_m0 = 0U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__q_b = vlTOPp->top__DOT__zx81a__DOT__ram__DOT__mem
        [vlTOPp->top__DOT__zx81a__DOT__ram__DOT__address_b];
    if (vlTOPp->top__DOT__zx81a__DOT__ram__DOT__wren_b) {
        vlTOPp->top__DOT__zx81a__DOT__ram__DOT__q_b 
            = vlTOPp->top__DOT__zx81a__DOT__ram__DOT__data_b;
    }
    if ((IData)(((0U == (0xa0U & (IData)(vlTOPp->ioctl_index))) 
                 & (0U != (0x1fU & (IData)(vlTOPp->ioctl_index)))))) {
        if (vlTOPp->ioctl_wr) {
            __Vdlyvval__top__DOT__zx81a__DOT__tape_ram__v0 
                = vlTOPp->ioctl_dout;
            __Vdlyvset__top__DOT__zx81a__DOT__tape_ram__v0 = 1U;
            __Vdlyvdim0__top__DOT__zx81a__DOT__tape_ram__v0 
                = (0x3fffU & vlTOPp->ioctl_addr);
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__q_b 
        = vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__mem
        [(0x3ffU & vlTOPp->ioctl_addr)];
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b) {
        vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__q_b 
            = vlTOPp->ioctl_dout;
    }
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__q_b 
        = vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__mem
        [(0x3fffU & vlTOPp->ioctl_addr)];
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b) {
        vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__q_b 
            = vlTOPp->ioctl_dout;
    }
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__q_b = vlTOPp->top__DOT__zx81a__DOT__rom__DOT__mem
        [(0x3fffU & vlTOPp->ioctl_addr)];
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__wren_b) {
        vlTOPp->top__DOT__zx81a__DOT__rom__DOT__q_b 
            = vlTOPp->ioctl_dout;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__rom__DOT__wren_a) {
        __Vdlyvval__top__DOT__zx81a__DOT__rom__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT__rom__DOT__data_a;
        __Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__rom__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__address_a;
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__wren_b) {
        __Vdlyvval__top__DOT__zx81a__DOT__rom__DOT__mem__v1 
            = vlTOPp->ioctl_dout;
        __Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__rom__DOT__mem__v1 
            = (0x3fffU & vlTOPp->ioctl_addr);
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ram__DOT__wren_b) {
        __Vdlyvval__top__DOT__zx81a__DOT__ram__DOT__mem__v1 
            = vlTOPp->top__DOT__zx81a__DOT__ram__DOT__data_b;
        __Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__ram__DOT__mem__v1 
            = vlTOPp->top__DOT__zx81a__DOT__ram__DOT__address_b;
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__wren_a) {
        __Vdlyvval__top__DOT__zx81a__DOT__ram__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__data_a;
        __Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__ram__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT__ram_a;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__input_strobe) {
        if ((((((((((0x59U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)) 
                    | (0x12U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                   | (0x11U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                  | (0x14U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                 | (5U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                | (6U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
               | (4U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
              | (0xcU == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
             | (3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
            if (((0x59U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)) 
                 | (0x12U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                vlTOPp->top__DOT____Vcellout__zx81a__mod 
                    = ((6U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__mod)) 
                       | (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn))));
            } else if ((0x11U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                vlTOPp->top__DOT____Vcellout__zx81a__mod 
                    = ((5U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__mod)) 
                       | (2U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                << 1U)));
            } else if ((0x14U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                vlTOPp->top__DOT____Vcellout__zx81a__mod 
                    = ((3U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__mod)) 
                       | (4U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                << 2U)));
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk7__DOT__old_tapeloader 
        = vlTOPp->top__DOT__zx81a__DOT__tapeloader;
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA;
    }
    vlTOPp->top__DOT__zx81a__DOT__rom_out = vlTOPp->top__DOT__zx81a__DOT__rom__DOT__mem
        [vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__address_a];
    if (vlTOPp->top__DOT__zx81a__DOT__rom__DOT__wren_a) {
        vlTOPp->top__DOT__zx81a__DOT__rom_out = vlTOPp->top__DOT__zx81a__DOT__rom__DOT__data_a;
    }
    vlTOPp->top__DOT__zx81a__DOT__ram_out = vlTOPp->top__DOT__zx81a__DOT__ram__DOT__mem
        [vlTOPp->top__DOT__zx81a__DOT__ram_a];
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__wren_a) {
        vlTOPp->top__DOT__zx81a__DOT__ram_out = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__data_a;
    }
    if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__old_latch)) 
         & (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch))) {
        if ((0x7fU == (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__fcnt))) {
            vlTOPp->top__DOT__zx81a__DOT__slow_mode = 1U;
        } else {
            vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__fcnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__fcnt)));
        }
    }
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__old_halt) 
         & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nHALT)))) {
        vlTOPp->top__DOT__zx81a__DOT__slow_mode = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__fcnt = 0U;
        vlTOPp->top__DOT__zx81a__DOT__slow_mode = 0U;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        if (vlTOPp->top__DOT__zx81a__DOT__data_latch_enable) {
            vlTOPp->top__DOT__zx81a__DOT__nopgen_store 
                = vlTOPp->top__DOT__zx81a__DOT__nopgen;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__old_f1)) 
               & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)))) {
        vlTOPp->top__DOT__zx81a__DOT__qs = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__qs)));
    }
    if ((((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__old_tapeloader) 
          & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader))) 
         & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__qs_set))) {
        vlTOPp->top__DOT__zx81a__DOT__qs = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__zx81a__DOT__qs = 0U;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL) {
            __Vdlyvval__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
            __Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 1U;
            __Vdlyvdim0__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH) {
            __Vdlyvval__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
            __Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 1U;
            __Vdlyvdim0__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__C = (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__MODE) 
                                                  << 5U) 
                                                 | ((1U 
                                                     & (((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                          [7U] 
                                                          >> 2U) 
                                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op) 
                                                            >> 2U)) 
                                                        & ((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                            [7U] 
                                                            >> 5U) 
                                                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__noise_gen_op) 
                                                              >> 2U))))
                                                     ? 
                                                    ((0x10U 
                                                      & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                      [0xaU])
                                                      ? (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol)
                                                      : 
                                                     ((0x1eU 
                                                       & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                          [0xaU] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                            [0xaU] 
                                                            >> 3U))))
                                                     : 0U));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__A = (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__MODE) 
                                                  << 5U) 
                                                 | ((1U 
                                                     & ((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                         [7U] 
                                                         | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)) 
                                                        & ((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                            [7U] 
                                                            >> 3U) 
                                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__noise_gen_op))))
                                                     ? 
                                                    ((0x10U 
                                                      & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                      [8U])
                                                      ? (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol)
                                                      : 
                                                     ((0x1eU 
                                                       & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                          [8U] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                            [8U] 
                                                            >> 3U))))
                                                     : 0U));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__B = (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__MODE) 
                                                  << 5U) 
                                                 | ((1U 
                                                     & (((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                          [7U] 
                                                          >> 1U) 
                                                         | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op) 
                                                            >> 1U)) 
                                                        & ((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                            [7U] 
                                                            >> 4U) 
                                                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__noise_gen_op) 
                                                              >> 1U))))
                                                     ? 
                                                    ((0x10U 
                                                      & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                      [9U])
                                                      ? (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol)
                                                      : 
                                                     ((0x1eU 
                                                       & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                          [9U] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                            [9U] 
                                                            >> 3U))))
                                                     : 0U));
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC 
            = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To)));
        if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY) 
             | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC 
                = (2U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                         << 2U));
        }
        if ((1U & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY) 
                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL)) 
                    & (0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State))) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                      >> 5U)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC 
                = (3U | (4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_psg) {
        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div) {
            if ((0U != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq
                 [0U])) {
                if ((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt
                     [0U] >= (0xfffU & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq
                                        [0U] - (IData)(1U))))) {
                    vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound2 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)));
                    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v0 = 1U;
                    __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
                        = ((6U & (IData)(__Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound2));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound3 
                        = (0xfffU & ((IData)(1U) + 
                                     vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt
                                     [0U]));
                    __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 
                        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound3;
                    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound4 
                    = (1U & (~ (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                [7U] >> 1U)));
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
                    = ((6U & (IData)(__Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound4));
                __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v2 = 1U;
            }
        }
        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div) {
            if ((0U != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq
                 [1U])) {
                if ((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt
                     [1U] >= (0xfffU & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq
                                        [1U] - (IData)(1U))))) {
                    vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound2 
                        = (1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op) 
                                    >> 1U)));
                    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v3 = 1U;
                    __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
                        = ((5U & (IData)(__Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)) 
                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound2) 
                              << 1U));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound3 
                        = (0xfffU & ((IData)(1U) + 
                                     vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt
                                     [1U]));
                    __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v4 
                        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound3;
                    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v4 = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound4 
                    = (1U & (~ (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                [7U] >> 2U)));
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
                    = ((5U & (IData)(__Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)) 
                       | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound4) 
                          << 1U));
                __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v5 = 1U;
            }
        }
        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div) {
            if ((0U != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq
                 [2U])) {
                if ((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt
                     [2U] >= (0xfffU & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq
                                        [2U] - (IData)(1U))))) {
                    vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound2 
                        = (1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op) 
                                    >> 2U)));
                    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v6 = 1U;
                    __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
                        = ((3U & (IData)(__Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)) 
                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound2) 
                              << 2U));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound3 
                        = (0xfffU & ((IData)(1U) + 
                                     vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt
                                     [2U]));
                    __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v7 
                        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound3;
                    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v7 = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound4 
                    = (1U & (~ (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                [7U] >> 3U)));
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
                    = ((3U & (IData)(__Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op)) 
                       | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT____Vlvbound4) 
                          << 2U));
                __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v8 = 1U;
            }
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b) {
        __Vdlyvval__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1 
            = vlTOPp->ioctl_dout;
        __Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1 
            = (0x3ffU & vlTOPp->ioctl_addr);
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a) {
        __Vdlyvval__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
        __Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a;
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b) {
        __Vdlyvval__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1 
            = vlTOPp->ioctl_dout;
        __Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1 
            = (0x3fffU & vlTOPp->ioctl_addr);
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a) {
        __Vdlyvval__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
        __Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0 
            = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a;
    }
    vlTOPp->top__DOT__zx81a__DOT__qs_out = vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__mem
        [vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a];
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a) {
        vlTOPp->top__DOT__zx81a__DOT__qs_out = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r 
            = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To) 
                                >> 1U)));
        if ((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State))) 
             & (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To) 
                             >> 1U))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r 
                = (3U | (4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r 
            = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To) 
                                >> 1U)));
        if ((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State))) 
             & (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To) 
                             >> 1U))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r 
                = (3U | (4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
    }
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_reset) 
         | (IData)(vlTOPp->reset))) {
        if ((4U & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
             [0xdU])) {
            __Vdly__top__DOT__zx81a__DOT__psg__DOT__env_vol = 0U;
            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc = 1U;
        } else {
            __Vdly__top__DOT__zx81a__DOT__psg__DOT__env_vol = 0x1fU;
            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc = 0U;
        }
        __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 0U;
    } else if (vlTOPp->top__DOT__zx81a__DOT__ce_psg) {
        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_ena) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold)))) {
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__env_vol 
                    = (0x1fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc)
                                 ? ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol))
                                 : ((IData)(0x1fU) 
                                    + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol))));
            }
            if ((8U & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                 [0xdU])) {
                if ((1U & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                     [0xdU])) {
                    if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc) {
                        if ((2U & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                             [0xdU])) {
                            if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top) {
                                __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
                            }
                        } else if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top_m1) {
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                    } else if ((2U & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                [0xdU])) {
                        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot) {
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                    } else if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot_p1) {
                        __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
                    }
                } else if ((2U & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                            [0xdU])) {
                    if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc) {
                        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top_m1) {
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top) {
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 0U;
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc = 0U;
                        }
                    } else {
                        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot_p1) {
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot) {
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 0U;
                            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc = 1U;
                        }
                    }
                }
            } else if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc) {
                if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top) {
                    __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
                }
            } else if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot_p1) {
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold = 1U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__zx81a__DOT__zxp_use = 0U;
    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)))) {
        if ((0xa0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_dout))) {
            vlTOPp->top__DOT__zx81a__DOT__zxp_use = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__zx81a__DOT__zxp_out = 0xffU;
    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)))) {
        vlTOPp->top__DOT__zx81a__DOT__zxp_out = 0xffU;
        if ((0xaaU == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_dout))) {
            vlTOPp->top__DOT__zx81a__DOT__zxp_out = 0xf0U;
        }
        if ((0x55U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_dout))) {
            vlTOPp->top__DOT__zx81a__DOT__zxp_out = 0xfU;
        }
        if ((0xa0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_dout))) {
            vlTOPp->top__DOT__zx81a__DOT__zxp_out = 
                ((0xf0U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__joy)) 
                           << 4U)) | (8U & ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__joy) 
                                                >> 4U)) 
                                            << 3U)));
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        if (((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
             & (IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p))) {
            vlTOPp->top__DOT__zx81a__DOT__inverse = 0U;
        }
        vlTOPp->top__DOT__zx81a__DOT__shifter_reg = 
            (0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__shifter_reg) 
                      << 1U));
        vlTOPp->top__DOT__zx81a__DOT__paper_reg = (0xfeU 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__paper_reg) 
                                                      << 1U));
        if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk4__DOT__old_shifter_start)) 
             & (IData)(vlTOPp->top__DOT__zx81a__DOT__shifter_start))) {
            vlTOPp->top__DOT__zx81a__DOT__shifter_reg 
                = (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__nopgen))
                    ? 0U : (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_out));
            vlTOPp->top__DOT__zx81a__DOT__inverse = 
                (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                       >> 7U));
            vlTOPp->top__DOT__zx81a__DOT__paper_reg = 0xffU;
            vlTOPp->top__DOT__zx81a__DOT__attr = ((0x10U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat))
                                                   ? (IData)(vlTOPp->top__DOT__zx81a__DOT__attr_latch)
                                                   : (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_out));
        }
    }
    if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__unnamedblk1__DOT__old_reset)) 
         & (IData)(vlTOPp->reset))) {
        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v0 = 1U;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__input_strobe) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v8 
                                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v8 = 1U;
                                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v8 = 0U;
                                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v9 
                                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v9 = 0U;
                                    }
                                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v10 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v10 = 1U;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v10 = 0U;
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v11 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v11 = 3U;
                                } else {
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v12 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v12 = 1U;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v12 = 0U;
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v13 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v13 = 2U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v14 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v14 = 1U;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v14 = 0U;
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v15 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v15 = 4U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v16 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v16 = 1U;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v16 = 0U;
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v17 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v17 = 4U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v18 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v18 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v18 = 0U;
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v19 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v19 = 0U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v20 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v20 = 1U;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v20 = 0U;
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v21 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v21 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v21 = 0U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v22 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v22 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v22 = 0U;
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v23 
                                    = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                             | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift))));
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v23 = 2U;
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v24 
                                    = ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift));
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v24 = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v25 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v25 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v25 = 0U;
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v26 
                                = ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift));
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v26 = 0U;
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v27 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v27 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v27 = 0U;
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v28 
                                    = ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift));
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v28 = 3U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v29 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v29 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v29 = 0U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v30 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v30 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v30 = 0U;
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v31 
                                = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                         | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift))));
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v31 = 1U;
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v32 
                                = ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift));
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v32 = 2U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v33 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v33 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v33 = 1U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v34 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v34 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v34 = 0U;
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v35 
                                = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                         | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift))));
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v35 = 3U;
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v36 
                                = ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift));
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v36 = 4U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v37 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v37 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v37 = 1U;
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v38 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v38 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v38 = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v39 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v39 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v39 = 0U;
                    } else {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v40 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v40 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v40 = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v41 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v41 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v41 = 2U;
                    } else {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v42 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v42 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v42 = 2U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v43 
                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v43 = 1U;
                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v43 = 0U;
                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v44 
                        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift));
                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v44 = 1U;
                }
            } else if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v45 
                                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v45 = 1U;
                                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v45 = 2U;
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v46 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v46 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v46 = 3U;
                            } else {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v47 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v47 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v47 = 3U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v48 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v48 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v48 = 3U;
                            } else {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v49 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v49 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v49 = 2U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v50 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v50 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v50 = 4U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v51 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v51 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v51 = 4U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v52 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v52 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v52 = 4U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v53 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v53 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v53 = 4U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v54 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v54 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v54 = 4U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v55 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v55 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v55 = 3U;
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v56 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v56 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v56 = 4U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v57 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v57 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v57 = 3U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v58 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v58 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v58 = 4U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v59 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v59 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v59 = 3U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v60 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v60 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v60 = 4U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v61 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v61 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v61 = 0U;
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v62 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v62 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v62 = 2U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v63 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v63 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v63 = 3U;
                    } else {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v64 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v64 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v64 = 2U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v65 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v65 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v65 = 2U;
                    } else {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v66 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v66 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v66 = 2U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v67 
                        = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                    __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v67 = 1U;
                    __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v67 = 3U;
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                                __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v68 
                                    = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                                __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v68 = 1U;
                                __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v68 = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v69 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v69 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v69 = 1U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v70 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v70 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v70 = 0U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v71 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v71 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v71 = 1U;
                        } else {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v72 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v72 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v72 = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                            __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v73 
                                = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                            __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v73 = 1U;
                            __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v73 = 0U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v74 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v74 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v74 = 0U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
                        __Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v75 
                            = vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn;
                        __Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v75 = 1U;
                        __Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v75 = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->top__DOT__zx81) {
        if ((1U & (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                    & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR))) 
                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                      ^ ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                         >> 1U))))) {
            __Vdly__top__DOT__zx81a__DOT__NMIlatch 
                = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                         >> 1U));
        }
    } else {
        __Vdly__top__DOT__zx81a__DOT__NMIlatch = 0U;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hsync)) 
             & (IData)(vlTOPp->top__DOT__zx81a__DOT__hsync))) {
            vlTOPp->top__DOT__zx81a__DOT__row_counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__row_counter)));
        }
        if (vlTOPp->top__DOT__zx81a__DOT__vs) {
            vlTOPp->top__DOT__zx81a__DOT__row_counter = 0U;
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hblank)) 
             & (IData)(vlTOPp->VGA_HB))) {
            vlTOPp->top__DOT__zx81a__DOT__shifter_en = 0U;
        }
        if (((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hblank) 
             & (~ (IData)(vlTOPp->VGA_HB)))) {
            vlTOPp->top__DOT__zx81a__DOT__shifter_en 
                = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch)));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__tapewrite_we = 0U;
    if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
         & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk3__DOT__old_nM1))) {
        if (vlTOPp->top__DOT__zx81) {
            if ((0x347U == (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))) {
                __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v0 = 1U;
                __Vdly__top__DOT__zx81a__DOT__tape_addr = 0U;
                __Vdly__top__DOT__zx81a__DOT__tapeloader = 1U;
                __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v1 = 1U;
            }
            if (((0x3c3U <= (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)) 
                 | (0x347U > (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)))) {
                __Vdly__top__DOT__zx81a__DOT__tapeloader = 0U;
            }
        } else {
            if ((0x207U == (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))) {
                __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v2 = 1U;
                __Vdly__top__DOT__zx81a__DOT__tape_addr = 0U;
                __Vdly__top__DOT__zx81a__DOT__tapeloader = 1U;
                __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v3 = 1U;
            }
            if (((0x24dU <= (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)) 
                 | (0x207U > (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)))) {
                __Vdly__top__DOT__zx81a__DOT__tapeloader = 0U;
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
         & (IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p))) {
        if (((IData)(vlTOPp->top__DOT__zx81a__DOT__tape_addr) 
             < (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_size))) {
            __Vdly__top__DOT__zx81a__DOT__tape_addr 
                = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_addr)));
            vlTOPp->top__DOT__zx81a__DOT__tape_in_byte_r 
                = vlTOPp->top__DOT__zx81a__DOT__tape_in_byte;
            vlTOPp->top__DOT__zx81a__DOT__tapewrite_we = 1U;
        } else {
            __Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v4 = 1U;
        }
    }
    if (((~ (IData)(vlTOPp->VGA_VS)) & (IData)(vlTOPp->top__DOT__zx81a__DOT__hsync2))) {
        vlTOPp->VGA_HS = vlTOPp->top__DOT__zx81a__DOT__vsync2;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v0) {
        vlTOPp->top__DOT__zx81a__DOT__rom__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__rom__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__zx81a__DOT__rom__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__rom__DOT__mem__v1) {
        vlTOPp->top__DOT__zx81a__DOT__rom__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__rom__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__zx81a__DOT__rom__DOT__mem__v1;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v0) {
        vlTOPp->top__DOT__zx81a__DOT__ram__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__ram__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__zx81a__DOT__ram__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__ram__DOT__mem__v1) {
        vlTOPp->top__DOT__zx81a__DOT__ram__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__ram__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__zx81a__DOT__ram__DOT__mem__v1;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vdlyvdim0__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0] 
            = __Vdlyvval__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vdlyvdim0__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0] 
            = __Vdlyvval__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    }
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_op 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__tone_gen_op;
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v0) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v1) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[0U] 
            = __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v1;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v2) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v3) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[1U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v4) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[1U] 
            = __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v4;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v5) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[1U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v6) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[2U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v7) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[2U] 
            = __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v7;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt__v8) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk3__DOT__tone_gen_cnt[2U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0) {
        vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__zx81a__DOT__qschrs__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1) {
        vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__zx81a__DOT__qschrs__DOT__mem__v1;
    }
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_inc;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk5__DOT__env_hold;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__env_vol;
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v0) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] = 0x1fU;
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[1U] = 0x1fU;
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[2U] = 0x1fU;
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[3U] = 0x1fU;
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] = 0x1fU;
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[5U] = 0x1fU;
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] = 0x1fU;
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] = 0x1fU;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v8) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v8))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v8) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v8))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v9))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [7U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v9) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v9))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v10) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v10))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v10) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v10))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v11))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v11) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v11))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v12) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v12))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v12) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v12))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v13))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v13) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v13))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v14) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v14))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v14) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v14))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v15))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v15) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v15))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v16) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v16))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v16) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v16))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[3U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v17))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [3U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v17) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v17))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v18) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v18))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v18) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v18))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v19))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v19) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v19))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v20) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v20))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v20) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v20))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v21) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v21))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v21) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v21))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v22) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v22))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v22) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v22))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v23))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v23) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v23))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v24))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v24) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v24))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v25) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v25))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v25) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v25))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[5U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v26))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [5U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v26) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v26))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v27) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v27))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v27) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v27))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v28))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v28) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v28))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v29) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[5U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v29))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [5U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v29) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v29))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v30) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v30))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v30) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v30))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v31))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v31) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v31))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v32))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v32) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v32))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v33) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v33))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v33) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v33))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v34) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v34))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v34) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v34))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v35))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v35) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v35))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v36))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v36) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v36))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v37) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v37))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [7U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v37) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v37))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v38) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v38))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v38) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v38))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v39) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v39))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v39) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v39))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v40) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[5U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v40))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [5U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v40) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v40))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v41) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[5U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v41))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [5U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v41) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v41))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v42) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v42))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v42) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v42))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v43) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v43))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v43) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v43))));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v44))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [7U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v44) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v44))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v45) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v45))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v45) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v45))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v46) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v46))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v46) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v46))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v47) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[5U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v47))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [5U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v47) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v47))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v48) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v48))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v48) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v48))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v49) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v49))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [7U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v49) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v49))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v50) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[4U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v50))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [4U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v50) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v50))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v51) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[5U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v51))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [5U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v51) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v51))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v52) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[1U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v52))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [1U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v52) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v52))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v53) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[6U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v53))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [6U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v53) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v53))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v54) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v54))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [7U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v54) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v54))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v55) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v55))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [7U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v55) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v55))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v56) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[3U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v56))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [3U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v56) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v56))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v57) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[2U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v57))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [2U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v57) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v57))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v58) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[2U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v58))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [2U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v58) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v58))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v59) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[1U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v59))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [1U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v59) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v59))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v60) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v60))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v60) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v60))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v61) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[7U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v61))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [7U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v61) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v61))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v62) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[3U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v62))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [3U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v62) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v62))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v63) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[3U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v63))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [3U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v63) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v63))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v64) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[2U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v64))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [2U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v64) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v64))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v65) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[1U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v65))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [1U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v65) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v65))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v66) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v66))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v66) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v66))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v67) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v67))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v67) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v67))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v68) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[3U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v68))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [3U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v68) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v68))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v69) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[2U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v69))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [2U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v69) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v69))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v70) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[1U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v70))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [1U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v70) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v70))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v71) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[1U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v71))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [1U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v71) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v71))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v72) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v72))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v72) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v72))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v73) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[3U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v73))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [3U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v73) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v73))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v74) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[2U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v74))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [2U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v74) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v74))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__kbd__DOT__keys__v75) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys[0U] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v75))) 
                & vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                [0U]) | (0x1fU & ((IData)(__Vdlyvval__top__DOT__zx81a__DOT__kbd__DOT__keys__v75) 
                                  << (IData)(__Vdlyvlsb__top__DOT__zx81a__DOT__kbd__DOT__keys__v75))));
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v0) {
        vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[1U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v1) {
        vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[5U] = 7U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v2) {
        vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[1U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v3) {
        vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[5U] = 3U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__tape_loader_patch__v4) {
        vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch[1U] = 0x37U;
    }
    vlTOPp->top__DOT__mod = (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__mod));
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__shift = 
        (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__mod));
    vlTOPp->top__DOT__zx81a__DOT__mod = vlTOPp->top__DOT____Vcellout__zx81a__mod;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__q_a = vlTOPp->top__DOT__zx81a__DOT__rom_out;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__q_a = vlTOPp->top__DOT__zx81a__DOT__ram_out;
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__old_latch 
        = vlTOPp->top__DOT__zx81a__DOT__NMIlatch;
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk5__DOT__old_halt 
        = vlTOPp->top__DOT__zx81a__DOT__nHALT;
    if (vlTOPp->ioctl_wr) {
        if (((0U != (0x1fU & (IData)(vlTOPp->ioctl_index))) 
             & (3U == (7U & ((IData)(vlTOPp->ioctl_index) 
                             >> 5U))))) {
            vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__qs_set = 1U;
        } else if ((1U & (~ ((IData)(vlTOPp->ioctl_index) 
                             >> 5U)))) {
            vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__qs_set = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__qs_set = 0U;
    }
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__old_f1 
        = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn));
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk8__DOT__old_tapeloader 
        = vlTOPp->top__DOT__zx81a__DOT__tapeloader;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlTOPp->top__DOT__zx81a__DOT__psg_ch_c = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable
        [vlTOPp->top__DOT__zx81a__DOT__psg__DOT__C];
    vlTOPp->top__DOT__zx81a__DOT__psg_ch_a = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable
        [vlTOPp->top__DOT__zx81a__DOT__psg__DOT__A];
    vlTOPp->top__DOT__zx81a__DOT__psg_ch_b = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__volTable
        [vlTOPp->top__DOT__zx81a__DOT__psg__DOT__B];
    if (vlTOPp->top__DOT__zx81a__DOT__ce_psg) {
        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div_noise) {
            if ((1U & ((~ (IData)((0U != (0x1fU & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                          [6U])))) 
                       | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt) 
                          >= (0x1fU & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                       [6U] - (IData)(1U))))))) {
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17 
                    = ((0x10000U & (((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17 
                                      << 0x10U) ^ (0xffff0000U 
                                                   & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17 
                                                      << 0xeU))) 
                                    ^ ((~ (IData)((0U 
                                                   != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17))) 
                                       << 0x10U))) 
                       | (0xffffU & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17 
                                     >> 1U)));
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt = 0U;
            } else {
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt 
                    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt)));
            }
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__noise_gen_op 
                = (7U & (- (IData)((1U & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17))));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__q_a 
        = vlTOPp->top__DOT__zx81a__DOT__qs_out;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot 
        = (0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_bot_p1 
        = (1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top_m1 
        = (0x1eU == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__is_top 
        = (0x1fU == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_vol));
    if (vlTOPp->top__DOT__zx81a__DOT__ce_psg) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_ena = 0U;
        if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div) {
            if (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt) 
                 >= (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_gen_comp))) {
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt = 0U;
                vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_ena = 1U;
            } else {
                __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt)));
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v0 = 1U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_reset = 0U;
        __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v1 = 1U;
    } else {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_reset = 0U;
        if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC)))) {
                if ((1U & (~ (IData)((0U != (0xfU & 
                                             ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr) 
                                              >> 4U))))))) {
                    __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
                    __Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17 = 1U;
                    __Vdlyvdim0__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17 
                        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr));
                    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_reset 
                        = (0xdU == (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr));
                }
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__border = (1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__paper_reg) 
                                                   >> 7U)));
    vlTOPp->top__DOT__zx81a__DOT__video_out = (1U & 
                                               ((~ 
                                                 ((IData)(vlTOPp->top__DOT__zx81a__DOT__shifter_reg) 
                                                  >> 7U)) 
                                                ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__inverse)));
    vlTOPp->top__DOT__zx81a__DOT__ch81_dat = 0U;
    if (vlTOPp->ioctl_wr) {
        if (((0U != (0x1fU & (IData)(vlTOPp->ioctl_index))) 
             & (1U == (7U & ((IData)(vlTOPp->ioctl_index) 
                             >> 5U))))) {
            if ((0x400U == vlTOPp->ioctl_addr)) {
                vlTOPp->top__DOT__zx81a__DOT__ch81_dat 
                    = (0xfU & (IData)(vlTOPp->ioctl_dout));
            }
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk4__DOT__old_shifter_start 
            = vlTOPp->top__DOT__zx81a__DOT__shifter_start;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        if (vlTOPp->top__DOT__zx81a__DOT__data_latch_enable) {
            vlTOPp->top__DOT__zx81a__DOT__ram_data_latch 
                = vlTOPp->top__DOT__zx81a__DOT__mem_out;
        }
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        if (vlTOPp->top__DOT__zx81a__DOT__data_latch_enable) {
            vlTOPp->top__DOT__zx81a__DOT__attr_latch 
                = vlTOPp->top__DOT__zx81a__DOT__ch81_out;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__unnamedblk1__DOT__old_reset 
        = vlTOPp->reset;
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hsync 
            = vlTOPp->top__DOT__zx81a__DOT__hsync;
    }
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk4__DOT__old_hblank 
            = vlTOPp->VGA_HB;
    }
    vlTOPp->top__DOT__zx81a__DOT__tape_in_byte = vlTOPp->top__DOT__zx81a__DOT__tape_ram
        [vlTOPp->top__DOT__zx81a__DOT__tape_addr];
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__zx81a__DOT__tape_size = 0U;
    }
    if ((IData)(((0U == (0xa0U & (IData)(vlTOPp->ioctl_index))) 
                 & (0U != (0x1fU & (IData)(vlTOPp->ioctl_index)))))) {
        if (((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk2__DOT__old_download) 
             & (~ (IData)(vlTOPp->ioctl_download)))) {
            vlTOPp->top__DOT__zx81a__DOT__tape_size 
                = (0x3fffU & vlTOPp->ioctl_addr);
            vlTOPp->top__DOT__zx81a__DOT__tape_type 
                = (1U & ((IData)(vlTOPp->ioctl_index) 
                         >> 6U));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk3__DOT__old_nM1 
        = vlTOPp->top__DOT__zx81a__DOT__nM1;
    vlTOPp->top__DOT__zx81a__DOT__addr = ((1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read)) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write)))
                                           ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int)
                                           : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_last));
    vlTOPp->top__DOT__VGA_HS = vlTOPp->VGA_HS;
    vlTOPp->VGA_VS = vlTOPp->top__DOT__zx81a__DOT__hsync2;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__mod = vlTOPp->top__DOT__zx81a__DOT__mod;
    vlTOPp->top__DOT__zx81a__DOT__tapeloader = __Vdly__top__DOT__zx81a__DOT__tapeloader;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CHANNEL_C 
        = vlTOPp->top__DOT__zx81a__DOT__psg_ch_c;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CHANNEL_A 
        = vlTOPp->top__DOT__zx81a__DOT__psg_ch_a;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CHANNEL_B 
        = vlTOPp->top__DOT__zx81a__DOT__psg_ch_b;
    vlTOPp->top__DOT____Vcellout__zx81a__audio_l = 
        (0x3ffU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_a) 
                    << 1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_b)));
    vlTOPp->top__DOT____Vcellout__zx81a__audio_r = 
        (0x3ffU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_c) 
                    << 1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_ch_b)));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__poly17;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk2__DOT__noise_gen_cnt;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk4__DOT__env_gen_cnt;
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v0) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v1) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[1U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[2U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[3U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[4U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[5U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[6U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[7U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[8U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[9U] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[0xaU] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[0xbU] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[0xcU] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[0xdU] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[0xeU] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[0xfU] = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[7U] = 0xffU;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg[__Vdlyvdim0__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17] 
            = __Vdlyvval__top__DOT__zx81a__DOT__psg__DOT__ymreg__v17;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__tape_ram__v0) {
        vlTOPp->top__DOT__zx81a__DOT__tape_ram[__Vdlyvdim0__top__DOT__zx81a__DOT__tape_ram__v0] 
            = __Vdlyvval__top__DOT__zx81a__DOT__tape_ram__v0;
    }
    vlTOPp->top__DOT__zx81a__DOT__tape_addr = __Vdly__top__DOT__zx81a__DOT__tape_addr;
    vlTOPp->top__DOT__zx81a__DOT__VSync = vlTOPp->top__DOT__VGA_HS;
    if (vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__input_strobe) {
        if ((((((((((0x59U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)) 
                    | (0x12U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                   | (0x11U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                  | (0x14U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                 | (5U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
                | (6U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
               | (4U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
              | (0xcU == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) 
             | (3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))) {
            if ((1U & (~ ((0x59U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)) 
                          | (0x12U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code)))))) {
                if ((0x11U != (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                    if ((0x14U != (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
                        vlTOPp->top__DOT__zx81a__DOT__Fn 
                            = ((5U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))
                                ? ((0x7feU & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                   | (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn))))
                                : ((6U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))
                                    ? ((0x7fdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                       | (2U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                << 1U)))
                                    : ((4U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))
                                        ? ((0x7fbU 
                                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                           | (4U & 
                                              ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                               << 2U)))
                                        : ((0xcU == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))
                                            ? ((0x7f7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                               | (8U 
                                                  & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                     << 3U)))
                                            : ((0x7efU 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                               | (0x10U 
                                                  & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                     << 4U)))))));
                    }
                }
            }
        } else if ((0xbU == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
            vlTOPp->top__DOT__zx81a__DOT__Fn = ((0x7dfU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                                | (0x20U 
                                                   & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                      << 5U)));
        } else if ((0x83U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
            vlTOPp->top__DOT__zx81a__DOT__Fn = ((0x7bfU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                                | (0x40U 
                                                   & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                      << 6U)));
        } else if ((0xaU == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
            vlTOPp->top__DOT__zx81a__DOT__Fn = ((0x77fU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                                | (0x80U 
                                                   & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                      << 7U)));
        } else if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
            vlTOPp->top__DOT__zx81a__DOT__Fn = ((0x6ffU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                                | (0x100U 
                                                   & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                      << 8U)));
        } else if ((9U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
            vlTOPp->top__DOT__zx81a__DOT__Fn = ((0x5ffU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                                | (0x200U 
                                                   & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                      << 9U)));
        } else if ((0x78U == (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code))) {
            vlTOPp->top__DOT__zx81a__DOT__Fn = ((0x3ffU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__Fn)) 
                                                | (0x400U 
                                                   & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn)) 
                                                      << 0xaU)));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__audio_l = vlTOPp->top__DOT____Vcellout__zx81a__audio_l;
    vlTOPp->top__DOT__audio_l = (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__audio_l));
    vlTOPp->top__DOT__zx81a__DOT__audio_r = vlTOPp->top__DOT____Vcellout__zx81a__audio_r;
    vlTOPp->top__DOT__audio_r = (1U & (IData)(vlTOPp->top__DOT____Vcellout__zx81a__audio_r));
    if (vlTOPp->top__DOT__zx81a__DOT__ce_psg) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div = 0U;
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div_noise = 0U;
        if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__cnt_div))) {
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__cnt_div 
                = (0xfU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__cnt_div) 
                           - (IData)(1U)));
        } else {
            __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div 
                = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div)));
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__cnt_div 
                = (7U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__SEL) 
                         << 3U));
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div = 1U;
            if (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div) {
                vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ena_div_noise = 1U;
            }
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ACTIVE 
        = (0x3fU & (~ vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                    [7U]));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOA_out 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
        [0xeU];
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOB_out 
        = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
        [0xfU];
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__env_gen_comp 
        = (((0U != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
             [0xcU]) | (0U != vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                        [0xbU])) ? (0xffffU & (((vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [0xcU] 
                                                 << 8U) 
                                                | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                [0xbU]) 
                                               - (IData)(1U)))
            : 0U);
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[0U] 
        = ((0xf00U & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                      [1U] << 8U)) | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
           [0U]);
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[1U] 
        = ((0xf00U & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                      [3U] << 8U)) | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
           [2U]);
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__tone_gen_freq[2U] 
        = ((0xf00U & (vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                      [5U] << 8U)) | vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
           [4U]);
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr = 0U;
    } else if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR) {
        if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC) {
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr 
                = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
        }
    }
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__r = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__r = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__r = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                     >> 1U));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__r = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 5U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__r = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 1U));
    }
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__g = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__g = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__g = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                     >> 2U));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__g = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 6U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__g = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 2U));
    }
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__b = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__b = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__b = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__b = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 4U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__b = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__attr));
    }
    if ((8U == (0xfffffff8U & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                      >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__i = 0U;
    } else if ((0U == (0xfffffffcU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__i = vlTOPp->top__DOT__zx81a__DOT__video_out;
    } else if ((6U == (0xfffffffeU & ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                             >> 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out)))))) {
        vlTOPp->top__DOT__i = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                                     >> 3U));
    } else if ((5U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__i = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 7U));
    } else if ((4U == ((4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_dat) 
                              >> 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__border) 
                                          << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__video_out))))) {
        vlTOPp->top__DOT__i = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__attr) 
                                     >> 3U));
    }
    vlTOPp->top__DOT__zx81a__DOT__ch81_out = vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__mem
        [vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a];
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a) {
        vlTOPp->top__DOT__zx81a__DOT__ch81_out = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    }
    vlTOPp->top__DOT__tape_ready = (0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_size));
    if ((IData)(((0U == (0xa0U & (IData)(vlTOPp->ioctl_index))) 
                 & (0U != (0x1fU & (IData)(vlTOPp->ioctl_index)))))) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk2__DOT__old_download 
            = vlTOPp->ioctl_download;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A = vlTOPp->top__DOT__zx81a__DOT__addr;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__addr = vlTOPp->top__DOT__zx81a__DOT__addr;
    vlTOPp->top__DOT__zx81a__DOT__rom_a = (0x1fffU 
                                           & ((IData)(vlTOPp->top__DOT__zx81a__DOT__nRFSH)
                                               ? (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)
                                               : ((0x1e00U 
                                                   & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                        >> 9U) 
                                                       + 
                                                       (1U 
                                                        & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                             >> 0xdU) 
                                                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                                               >> 7U)) 
                                                           & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                              >> 8U)))) 
                                                      << 9U)) 
                                                  | ((0x1f8U 
                                                      & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                                         << 3U)) 
                                                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__row_counter)))));
    vlTOPp->top__DOT__zx81a__DOT__joy_kbd = (0x1fU 
                                             & ((- (IData)((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_use))) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                                   >> 0xcU)))) 
                                                    | (~ 
                                                       (((IData)(vlTOPp->top__DOT__zx81a__DOT__joys1) 
                                                         | (IData)(vlTOPp->top__DOT__zx81a__DOT__joyc1)) 
                                                        | (IData)(vlTOPp->top__DOT__zx81a__DOT__joyzx)))) 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                                     >> 0xbU)))) 
                                                      | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__joyc2))))));
    vlTOPp->top__DOT__zx81a__DOT__key_data = ((((((
                                                   (((0x100U 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                      ? 0x1fU
                                                      : 
                                                     vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                     [0U]) 
                                                    & ((0x200U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                        ? 0x1fU
                                                        : 
                                                       vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                       [1U])) 
                                                   & ((0x400U 
                                                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                       ? 0x1fU
                                                       : 
                                                      vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                      [2U])) 
                                                  & ((0x800U 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                      ? 0x1fU
                                                      : 
                                                     vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                     [3U])) 
                                                 & ((0x1000U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                     ? 0x1fU
                                                     : 
                                                    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                    [4U])) 
                                                & ((0x2000U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                    ? 0x1fU
                                                    : 
                                                   vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                   [5U])) 
                                               & ((0x4000U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                   ? 0x1fU
                                                   : 
                                                  vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                  [6U])) 
                                              & ((0x8000U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))
                                                  ? 0x1fU
                                                  : 
                                                 vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__keys
                                                 [7U]));
    vlTOPp->top__DOT__zx81a__DOT__qs_e = ((IData)(vlTOPp->top__DOT__zx81a__DOT__nRFSH)
                                           ? (0x21U 
                                              == (0x3fU 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 0xaU)))
                                           : ((IData)(vlTOPp->top__DOT__zx81a__DOT__qs) 
                                              & (0xfU 
                                                 == 
                                                 (0x7fU 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 9U)))));
    vlTOPp->top__DOT__zx81a__DOT__low16k_e = (IData)(
                                                     ((0x8000U 
                                                       != 
                                                       (0x8000U 
                                                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))) 
                                                      | (2U 
                                                         != 
                                                         (2U 
                                                          & (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size)))));
    vlTOPp->top__DOT__VGA_VS = vlTOPp->VGA_VS;
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt 
            = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt)));
        if ((0x19dU == (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt))) {
            __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt = 0U;
        }
        if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt))) {
            vlTOPp->top__DOT__zx81a__DOT__hsync2 = 1U;
        }
        if ((0x20U == (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt))) {
            vlTOPp->top__DOT__zx81a__DOT__hsync2 = 0U;
        }
        if ((0x190U == (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt))) {
            vlTOPp->VGA_HB = 1U;
        }
        if ((0x48U == (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt))) {
            vlTOPp->VGA_HB = 0U;
        }
        if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__old_hsync)) 
             & (IData)(vlTOPp->top__DOT__zx81a__DOT__hsync))) {
            __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg 
                = ((0x1eU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg) 
                             << 1U)) | (IData)(vlTOPp->top__DOT__zx81a__DOT__vsync));
            vlTOPp->VGA_VB = ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg)) 
                              | (IData)(vlTOPp->top__DOT__zx81a__DOT__vsync));
            vlTOPp->top__DOT__zx81a__DOT__vsync2 = 
                (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg) 
                       >> 2U));
            if ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg) 
                              >> 2U)))) {
                __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt = 0U;
            }
        }
    }
    vlTOPp->AUDIO_L = ((IData)(vlTOPp->top__DOT__audio_l) 
                       << 6U);
    vlTOPp->AUDIO_R = ((IData)(vlTOPp->top__DOT__audio_r) 
                       << 6U);
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div 
        = __Vdly__top__DOT__zx81a__DOT__psg__DOT__unnamedblk1__DOT__noise_div;
    vlTOPp->top__DOT__zx81a__DOT__r = vlTOPp->top__DOT__r;
    vlTOPp->top__DOT__zx81a__DOT__g = vlTOPp->top__DOT__g;
    vlTOPp->top__DOT__zx81a__DOT__b = vlTOPp->top__DOT__b;
    vlTOPp->top__DOT__zx81a__DOT__i = vlTOPp->top__DOT__i;
    vlTOPp->top__DOT__VGA_R = (((IData)(vlTOPp->top__DOT__r) 
                                << 3U) | (7U & (- (IData)(
                                                          ((IData)(vlTOPp->top__DOT__i) 
                                                           & (IData)(vlTOPp->top__DOT__r))))));
    vlTOPp->top__DOT__VGA_G = (((IData)(vlTOPp->top__DOT__g) 
                                << 3U) | (7U & (- (IData)(
                                                          ((IData)(vlTOPp->top__DOT__i) 
                                                           & (IData)(vlTOPp->top__DOT__g))))));
    vlTOPp->top__DOT__VGA_B = (((IData)(vlTOPp->top__DOT__b) 
                                << 3U) | (7U & (- (IData)(
                                                          ((IData)(vlTOPp->top__DOT__i) 
                                                           & (IData)(vlTOPp->top__DOT__b))))));
    if (__Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0) {
        vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__zx81a__DOT__chroma81__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1) {
        vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__mem[__Vdlyvdim0__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__zx81a__DOT__chroma81__DOT__mem__v1;
    }
    vlTOPp->top__DOT__zx81a__DOT__tape_ready = vlTOPp->top__DOT__tape_ready;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__address_a 
        = ((((IData)(vlTOPp->top__DOT__zx81) ? (1U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a) 
                                                   >> 0xcU))
              : 2U) << 0xcU) | (0xfffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a)));
    if (vlTOPp->top__DOT__zx81a__DOT__nRFSH) {
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a 
            = (0x3fffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr));
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a 
            = (0x3ffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr));
    } else {
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a 
            = (0x3fffU & ((0x200U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                     << 2U)) | (0x1ffU 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a))));
        vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a 
            = (0x3ffU & ((0x200U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__ram_data_latch) 
                                    << 2U)) | (0x1ffU 
                                               & (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a))));
    }
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__key_data 
        = vlTOPp->top__DOT__zx81a__DOT__key_data;
    vlTOPp->top__DOT__zx81a__DOT__ramLo_e = ((IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x6000U 
                                                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)))) 
                                             & (IData)(vlTOPp->top__DOT__zx81a__DOT__low16k_e));
    vlTOPp->top__DOT__zx81a__DOT__rom_e = (((IData)(
                                                    (0U 
                                                     == 
                                                     (0x6000U 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)))) 
                                            & ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                   >> 0xcU)) 
                                               | (IData)(vlTOPp->top__DOT__zx81))) 
                                           & (IData)(vlTOPp->top__DOT__zx81a__DOT__low16k_e));
    vlTOPp->top__DOT__zx81a__DOT__HSync = vlTOPp->top__DOT__VGA_VS;
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt 
        = __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__cnt;
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg 
        = __Vdly__top__DOT__zx81a__DOT__unnamedblk6__DOT__vreg;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__Fn = vlTOPp->top__DOT__zx81a__DOT__Fn;
    vlTOPp->top__DOT__FnReset = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__Fn) 
                                       >> 0xaU));
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__input_strobe = 0U;
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__unnamedblk2__DOT__old_state) 
         != (1U & ((IData)(vlTOPp->top__DOT__ps2_key) 
                   >> 0xaU)))) {
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__release_btn 
            = (1U & (~ ((IData)(vlTOPp->top__DOT__ps2_key) 
                        >> 9U)));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__code 
            = (0xffU & (IData)(vlTOPp->top__DOT__ps2_key));
        vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__input_strobe = 1U;
    }
    vlTOPp->top__DOT__AUDIO_L = vlTOPp->AUDIO_L;
    vlTOPp->top__DOT__AUDIO_R = vlTOPp->AUDIO_R;
    vlTOPp->VGA_R = vlTOPp->top__DOT__VGA_R;
    vlTOPp->VGA_G = vlTOPp->top__DOT__VGA_G;
    vlTOPp->VGA_B = vlTOPp->top__DOT__VGA_B;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__q_a 
        = vlTOPp->top__DOT__zx81a__DOT__ch81_out;
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__address_a;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__address_a;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__address_a;
    vlTOPp->top__DOT__VGA_HB = vlTOPp->VGA_HB;
    vlTOPp->top__DOT__VGA_VB = vlTOPp->VGA_VB;
    if (vlTOPp->top__DOT__zx81a__DOT__ce_6m5) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk6__DOT__old_hsync 
            = vlTOPp->top__DOT__zx81a__DOT__hsync;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__hsync)))) {
        vlTOPp->top__DOT__zx81a__DOT__vsync = vlTOPp->top__DOT__zx81a__DOT__vs;
    }
    vlTOPp->top__DOT__zx81a__DOT__FnReset = vlTOPp->top__DOT__FnReset;
    vlTOPp->top__DOT__zx81a__DOT__hblank = vlTOPp->top__DOT__VGA_HB;
    vlTOPp->top__DOT__zx81a__DOT__vblank = vlTOPp->top__DOT__VGA_VB;
    vlTOPp->top__DOT__zx81a__DOT__kbd__DOT__unnamedblk2__DOT__old_state 
        = (1U & ((IData)(vlTOPp->top__DOT__ps2_key) 
                 >> 0xaU));
    if (vlTOPp->top__DOT__zx81a__DOT__ce_3m25) {
        __Vdly__top__DOT__zx81a__DOT__sync_counter 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__sync_counter)));
        if ((0xceU == (IData)(vlTOPp->top__DOT__zx81a__DOT__sync_counter))) {
            __Vdly__top__DOT__zx81a__DOT__sync_counter = 0U;
        }
        if ((0xfU == (IData)(vlTOPp->top__DOT__zx81a__DOT__sync_counter))) {
            vlTOPp->top__DOT__zx81a__DOT__hsync = 1U;
        }
        if ((0x1fU == (IData)(vlTOPp->top__DOT__zx81a__DOT__sync_counter))) {
            vlTOPp->top__DOT__zx81a__DOT__hsync = 0U;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
               & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ))))) {
        vlTOPp->top__DOT__zx81a__DOT__hsync = 0U;
        __Vdly__top__DOT__zx81a__DOT__sync_counter = 0U;
    }
    if ((1U & (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR))) 
               & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch))))) {
        vlTOPp->top__DOT__zx81a__DOT__vs = 0U;
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
               & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch))))) {
        vlTOPp->top__DOT__zx81a__DOT__vs = 1U;
    }
    vlTOPp->top__DOT__zx81a__DOT__sync_counter = __Vdly__top__DOT__zx81a__DOT__sync_counter;
    vlTOPp->top__DOT__zx81a__DOT__NMIlatch = __Vdly__top__DOT__zx81a__DOT__NMIlatch;
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (((IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p) 
             & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__CEN_pol)))) {
            __Vdly__top__DOT__zx81a__DOT__cpu__DOT__CEN_pol = 1U;
            if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mcycle))) {
                if ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate))) {
                    vlTOPp->top__DOT__zx81a__DOT__nIORQ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__nMREQ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__nRD = 1U;
                }
            } else if (((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate)) 
                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq))) {
                vlTOPp->top__DOT__zx81a__DOT__nWR = 
                    (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write)));
                vlTOPp->top__DOT__zx81a__DOT__nRD = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write;
                vlTOPp->top__DOT__zx81a__DOT__nIORQ = 0U;
            }
        } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_n) 
                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__CEN_pol))) {
            __Vdly__top__DOT__zx81a__DOT__cpu__DOT__CEN_pol 
                = ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate)) 
                   & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT)));
            if (((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate)) 
                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busak_n))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg 
                    = vlTOPp->top__DOT__zx81a__DOT__cpu_din;
            }
            if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mcycle))) {
                if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate))) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__intcycled_n 
                        = ((2U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycled_n) 
                                  << 1U)) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n));
                    vlTOPp->top__DOT__zx81a__DOT__nRD 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n)));
                    vlTOPp->top__DOT__zx81a__DOT__nMREQ 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n)));
                    vlTOPp->top__DOT__zx81a__DOT__nIORQ 
                        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycled_n) 
                                 >> 1U));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_last 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int;
                }
                if ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate))) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__intcycled_n = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__nRD = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__nMREQ = 0U;
                }
                if ((4U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate))) {
                    vlTOPp->top__DOT__zx81a__DOT__nMREQ = 1U;
                }
            } else {
                if ((1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read)) 
                           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq))))) {
                    if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate))) {
                        vlTOPp->top__DOT__zx81a__DOT__nRD 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write;
                        vlTOPp->top__DOT__zx81a__DOT__nMREQ = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_last 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int;
                    }
                }
                if ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate))) {
                    vlTOPp->top__DOT__zx81a__DOT__nWR 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write)));
                }
                if ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate))) {
                    vlTOPp->top__DOT__zx81a__DOT__nWR = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__nRD = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__nIORQ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__nMREQ = 1U;
                }
            }
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__nWR = 1U;
        vlTOPp->top__DOT__zx81a__DOT__nRD = 1U;
        vlTOPp->top__DOT__zx81a__DOT__nIORQ = 1U;
        vlTOPp->top__DOT__zx81a__DOT__nMREQ = 1U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__CEN_pol = 0U;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__CEN_pol 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__CEN_pol;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycled_n 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__intcycled_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mreq_n 
        = vlTOPp->top__DOT__zx81a__DOT__nMREQ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__rd_n = vlTOPp->top__DOT__zx81a__DOT__nRD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__di 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wr_n = vlTOPp->top__DOT__zx81a__DOT__nWR;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a 
        = (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ))) 
           & (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a 
        = (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ))) 
           & (IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq_n 
        = vlTOPp->top__DOT__zx81a__DOT__nIORQ;
    vlTOPp->top__DOT__zx81a__DOT__zxp_sel = ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                             & (0xe007U 
                                                == (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    vlTOPp->top__DOT__zx81a__DOT__kbd_n = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ) 
                                                  | (IData)(vlTOPp->top__DOT__zx81a__DOT__nRD)) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    vlTOPp->top__DOT__zx81a__DOT__psg_sel = ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                             & (0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))));
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__wren_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_a;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__wren_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_a;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel) 
           & ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                            >> 6U))) ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)));
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__BDIR = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__BC = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout = 0xffU;
    if ((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BDIR)) 
          & (IData)(vlTOPp->top__DOT__zx81a__DOT____Vcellinp__psg__BC)) 
         & (~ (IData)((0U != (0xfU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr) 
                                      >> 4U))))))) {
        if (((((((((0U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))) 
                   | (1U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                  | (2U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                 | (3U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                | (4U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
               | (5U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
              | (6U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
             | (7U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))))) {
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout 
                = ((0U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                    ? vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                   [0U] : ((1U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                            ? (0xfU & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                               [1U]) : ((2U == (0xfU 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                         ? vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                        [2U] : ((3U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                 ? 
                                                (0xfU 
                                                 & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [3U])
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                  ? 
                                                 vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [4U]
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                   ? 
                                                  (0xfU 
                                                   & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                   [5U])
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                    ? 
                                                   (0x1fU 
                                                    & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                    [6U])
                                                    : 
                                                   vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                   [7U])))))));
        } else if (((((((((8U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))) 
                          | (9U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                         | (0xaU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                        | (0xbU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                       | (0xcU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                      | (0xdU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                     | (0xeU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))) 
                    | (0xfU == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr))))) {
            vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout 
                = ((8U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                    ? (0x1fU & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                       [8U]) : ((9U == (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                 ? (0x1fU & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                    [9U]) : ((0xaU 
                                              == (0xfU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                              ? (0x1fU 
                                                 & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [0xaU])
                                              : ((0xbU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                  ? 
                                                 vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                 [0xbU]
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                   ? 
                                                  vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                  [0xcU]
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                    ? 
                                                   (0xfU 
                                                    & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                    [0xdU])
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__addr)))
                                                     ? 
                                                    ((0x40U 
                                                      & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                     [0xeU]
                                                      : (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOA_in))
                                                     : 
                                                    ((0x80U 
                                                      & vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     vlTOPp->top__DOT__zx81a__DOT__psg__DOT__ymreg
                                                     [0xfU]
                                                      : (IData)(vlTOPp->top__DOT__zx81a__DOT__psg__DOT__IOB_in)))))))));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__psg_out = vlTOPp->top__DOT__zx81a__DOT__psg__DOT__dout;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__DO = vlTOPp->top__DOT__zx81a__DOT__psg_out;
    if ((8U == (0xfffffff8U & ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                                      << 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                                  << 2U) 
                                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                                     << 1U) 
                                                    | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel))))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = (((IData)(vlTOPp->top__DOT__tape_in) 
                                                  << 7U) 
                                                 | (((IData)(vlTOPp->top__DOT__hz50) 
                                                     << 6U) 
                                                    | ((IData)(vlTOPp->top__DOT__zx81a__DOT__key_data) 
                                                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__joy_kbd))));
    } else if ((4U == (0xfffffffcU & ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                                             << 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel))))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = vlTOPp->top__DOT__zx81a__DOT__zxp_out;
    } else if ((2U == (0xfffffffeU & ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                                             << 3U)) 
                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel))))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = 0xdfU;
    } else if ((1U == ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                              << 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel)))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = vlTOPp->top__DOT__zx81a__DOT__psg_out;
    } else if ((0U == ((8U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__kbd_n)) 
                              << 3U)) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__zxp_sel) 
                                          << 2U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_sel) 
                                           << 1U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__psg_sel)))))) {
        vlTOPp->top__DOT__zx81a__DOT__io_dout = 0xffU;
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
    CData/*6:0*/ __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc;
    CData/*6:0*/ __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
    CData/*2:0*/ __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num;
    CData/*3:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    CData/*1:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    CData/*1:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    CData/*7:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    CData/*2:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    CData/*0:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    SData/*15:0*/ __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    // Body
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (VL_UNLIKELY(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dirset)) {
            VL_WRITEF("(before PC %x)\n(after PC %x)\n",
                      16,vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC,
                      16,(IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC));
            vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dir;
        } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
            __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
            vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r 
                = ((((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                     & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op) 
                           >> 2U))) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op)) 
                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                      >> 2U));
            if ((1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                       & (IData)((0U != (0xeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate))))))) {
                if ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT))) {
                    if ((1U & (((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump)) 
                                  & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call))) 
                                 & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) 
                                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle))) 
                               & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF) 
                                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt)))))) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    }
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet = 0U;
                    if ((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                            __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State 
                                = ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 2U : 1U);
                        } else {
                            if ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                                __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                            }
                            __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
                        }
                    } else {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                    }
                    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                         & (1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))) {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR = 0xffU;
                    } else if ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF) 
                                 | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                                    & (2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))) 
                                | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR = 0U;
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                            = ((0xff00U & (IData)(__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_din));
                    } else {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu_din;
                    }
                }
            } else {
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate)));
                }
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r 
                        = ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT) 
                             | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC)) 
                            | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR)) 
                           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR)));
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int 
                            = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                                << 8U) | (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                                << 8U) | (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
                    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call) 
                                | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
                    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int = 0x66U;
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC = 0x66U;
                    } else if (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)) 
                                & (2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int 
                            = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I) 
                                << 8U) | (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I) 
                                << 8U) | (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int 
                            = (0xffffU & ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                           ? ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC)
                                                   : 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr))
                                                    : 
                                                   (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)))))
                                               : ((1U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP)
                                                   : 
                                                  (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg))))
                                           : ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State))
                                                    ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC)
                                                    : 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)
                                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC)
                                                     : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr))))
                                               : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC))));
                    }
                    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                            = (0xffU & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC)));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xcfU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (0x10U | (0x20U & 
                                           ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                                >> 5U)) 
                                            << 5U))));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC) 
                                            >> 3U)) 
                                        << 3U)));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (2U | (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC)) 
                                  | ((0x10U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                               << 4U)) 
                                     | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC)))));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (1U | (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | (0x28U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC)));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    }
                }
                if ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT))) {
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP) {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                            = (0x38U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR));
                    }
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet)) 
                         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                            >> 6U))) {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu_din;
                    }
                }
                if ((1U & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT)) 
                           | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                               >> 4U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    if ((7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
                    }
                }
                if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                            >> 3U) & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 5U)))) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16;
                }
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL) {
                    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
                }
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF) {
                    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Ap;
                    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Fp;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Ap 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Fp 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                }
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 1U;
                    if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet = 1U;
                    }
                }
            }
            if ((3U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IStatus 
                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
            }
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD))) {
                    if ((0U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I;
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I)) 
                                  | ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I)) 
                                     << 6U)));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    } else if ((1U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC = 0U;
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                               | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I)) 
                                  | ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I)) 
                                     << 6U)));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                    } else if ((2U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
                    }
                }
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xff00U & (IData)(__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg));
                }
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xffU & (IData)(__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                              << 8U));
                }
            }
            if ((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ)) 
                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r)) 
                 | (9U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((1U & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)));
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r)))) {
                    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                        = ((0xfeU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                           | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)));
                }
            }
            if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res) 
                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC))) {
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = (0xefU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0x3fU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg)) 
                          | ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg)) 
                             << 6U)));
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg))) 
                                << 2U)));
            }
            if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                        >> 1U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu_dout 
                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu_dout 
                        = ((0xf0U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                     << 4U)) | (0xfU 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                }
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu_dout 
                        = ((0xf0U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                     << 4U)) | (0xfU 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                                   >> 4U)));
                }
            }
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
            if ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT))) {
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xc7U & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | ((0x20U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q) 
                                    << 4U)) | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q))));
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F));
            }
            if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC) 
                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT))) {
                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)) 
                       | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ) 
                          << 2U));
            }
            if ((1U & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 1U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                        & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                       | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                          & (7U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                    vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
                                }
                            } else {
                                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP 
                                    = ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))
                                        ? ((0xffU & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP)) 
                                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux) 
                                              << 8U))
                                        : ((0xff00U 
                                            & (IData)(vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux)));
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu_dout 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
                            }
                        }
                    }
                }
            }
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
            if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r 
                    = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg) 
                        << 4U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0x17U;
                }
            }
        }
    } else {
        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC = 0U;
        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F = 0xffU;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IStatus = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu_dout = 0U;
        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC = 0xffU;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Ap = 0xffU;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Fp = 0xffU;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I = 0U;
        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP = 0xffffU;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC_r = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind = 0U;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__TmpAddr;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__A 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__A_int;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__DI = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__dout = vlTOPp->top__DOT__zx81a__DOT__cpu_dout;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__data_a 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader)
            ? (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_in_byte_r)
            : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu_dout));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet;
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) {
            __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1 
                = ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res)) 
                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait) 
                      | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i) 
                         & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2)))));
            __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 
                = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1) 
                   & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res)));
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle)))) {
                        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
                    }
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
                }
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
                }
            }
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI) {
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                }
            }
            if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF = 0U;
            }
            if ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                     >> 2U)) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT))) {
                vlTOPp->top__DOT__zx81a__DOT__nM1 = 1U;
            }
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s) 
                          & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck))))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = 0U;
                if ((1U & (~ (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                               >> 2U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT)))))) {
                    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res) {
                        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF = 1U;
                        }
                        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = 1U;
                        } else {
                            vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate = 2U;
                            if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch) {
                                __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
                                __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout 
                                    = ((0x40U & (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                        ? 7U : ((0x20U 
                                                 & (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                 ? 6U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                  ? 5U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    & (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     & (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                     ? 2U
                                                     : 1U))))));
                                __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M 
                                    = __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
                                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle = 0x20U;
                                if ((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M = 2U;
                                }
                            } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
                                __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M)));
                                __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout 
                                    = ((1U == (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                        ? 1U : ((2U 
                                                 == (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                 ? 2U
                                                 : 
                                                ((3U 
                                                  == (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                  ? 4U
                                                  : 
                                                 ((4U 
                                                   == (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                     ? 0x20U
                                                     : 
                                                    ((7U 
                                                      == (IData)(__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                      ? 0x40U
                                                      : 0U)))))));
                                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
                                    = __Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
                            } else if ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle) 
                                         | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR)) 
                                        | ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U) 
                                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                           & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ)))) {
                                vlTOPp->top__DOT__zx81a__DOT__nM1 = 0U;
                                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle = 0U;
                                __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle = 0U;
                                if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s) 
                                     & (0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix)))) {
                                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle = 1U;
                                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                } else if (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1) 
                                              & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__INT_s)) 
                                             & (0U 
                                                == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix))) 
                                            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle = 1U;
                                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                    __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                                }
                            } else {
                                vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
                                    = ((0x7eU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                 << 1U)) 
                                       | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U)));
                            }
                        }
                    } else if ((1U & ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait) 
                                          & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2)))) 
                                      & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i) 
                                            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))))))) {
                        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate 
                            = ((0x7eU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                         << 1U)) | 
                               (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                      >> 6U)));
                    }
                }
            }
            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
                vlTOPp->top__DOT__zx81a__DOT__nM1 = 0U;
            }
        }
    } else {
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle = 1U;
        vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate = 1U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle = 0U;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0U;
        __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0U;
        vlTOPp->top__DOT__zx81a__DOT__nM1 = 1U;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dout 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__dout;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__data_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__data_a;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF2;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntE_FF1;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busak_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusAck)));
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s 
                = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__wait_n)));
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusReq_s = 0U;
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__INT_s 
                = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nINT)));
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__INT_s = 0U;
    }
    vlTOPp->top__DOT__zx81a__DOT__nHALT = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt_FF)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__m1_n = vlTOPp->top__DOT__zx81a__DOT__nM1;
    if ((0x20U == (0xffffffe0U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                   << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                              << 4U) 
                                             | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                 << 2U) 
                                                | (3U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                      >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (0x3fffU 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__tape_type)
                                                      ? 
                                                     ((IData)(8U) 
                                                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__tape_addr))
                                                      : 
                                                     ((IData)(vlTOPp->top__DOT__zx81a__DOT__tape_addr) 
                                                      - (IData)(1U)))));
    } else if ((0x10U == (0xfffffff0U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                          << 5U) | 
                                         (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                           << 4U) | 
                                          (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                            << 2U) 
                                           | (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                               >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x2000U 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_a));
    } else if ((0U == (0xfffffffcU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                       << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                                  << 4U) 
                                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                     << 2U) 
                                                    | (3U 
                                                       & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                          >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (0x3ffU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    } else if ((((4U == (0xfffffffcU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                         << 5U) | (
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                                    << 4U) 
                                                   | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                       << 2U) 
                                                      | (3U 
                                                         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                            >> 0xeU))))))) 
                 | (8U == (0xfffffffaU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                           << 5U) | 
                                          (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                            << 4U) 
                                           | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                               << 2U) 
                                              | (3U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                    >> 0xeU)))))))) 
                | (0xbU == (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                             << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                        << 4U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                   << 2U) 
                                                  | (3U 
                                                     & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                        >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (0x3fffU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    } else if ((0xaU == (0xfffffffbU & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                         << 5U) | (
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                                    << 4U) 
                                                   | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                       << 2U) 
                                                      | (3U 
                                                         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                            >> 0xeU)))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x8000U 
                                               | (0x3fffU 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr)));
    } else if ((0xfU == (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                          << 5U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ramLo_e) 
                                     << 4U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                << 2U) 
                                               | (3U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 0xeU))))))) {
        vlTOPp->top__DOT__zx81a__DOT__ram_a = (0x4000U 
                                               | (((IData)(vlTOPp->top__DOT__zx81a__DOT__nM1) 
                                                   << 0xfU) 
                                                  | (0x3fffU 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__addr))));
    }
    vlTOPp->top__DOT__zx81a__DOT__ramHi_e = (1U & (
                                                   (((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                     >> 0xfU) 
                                                    & ((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size) 
                                                       >> 1U)) 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                        >> 0xeU)) 
                                                      | ((IData)(vlTOPp->top__DOT__zx81a__DOT__nM1) 
                                                         & (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_size)))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle)));
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) {
            if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s = 0U;
            } else if (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nNMI)) 
                        & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Oldnmi_n))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s = 1U;
            }
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMI_s = 0U;
    }
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR 
                = ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT) 
                     & ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                            >> 4U)) | (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                          >> 2U)))) 
                    | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC) 
                       & (IData)(((0x10U != (0x10U 
                                             & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) 
                                  | (4U != (0x44U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))))))) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR) 
                      & ((~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                             >> 4U)) | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                        >> 6U))));
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__No_BTR = 0U;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__busak_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__busak_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__halt_n 
        = vlTOPp->top__DOT__zx81a__DOT__nHALT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__m1_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__m1_n;
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__address_a 
        = vlTOPp->top__DOT__zx81a__DOT__ram_a;
    vlTOPp->top__DOT__zx81a__DOT__ram_e = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                  >> 0xeU) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__ramHi_e)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__intcycle_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__intcycle_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR 
        = __Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__halt_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__halt_n;
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__wren_a 
        = (((((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nWR)) 
              & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ))) 
             & (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e))) 
           | (IData)(vlTOPp->top__DOT__zx81a__DOT__tapewrite_we));
    vlTOPp->top__DOT__zx81a__DOT__mem_out = ((0x10U 
                                              == (0xfffffff0U 
                                                  & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                      << 4U) 
                                                     | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                            << 2U) 
                                                           | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                               << 1U) 
                                                              | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                              ? ((6U 
                                                  >= 
                                                  (7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                      - 
                                                      ((IData)(vlTOPp->top__DOT__zx81)
                                                        ? 0x347U
                                                        : 0x207U))))
                                                  ? 
                                                 vlTOPp->top__DOT__zx81a__DOT__tape_loader_patch
                                                 [(7U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                      - 
                                                      ((IData)(vlTOPp->top__DOT__zx81)
                                                        ? 0x347U
                                                        : 0x207U)))]
                                                  : 0U)
                                              : ((8U 
                                                  == 
                                                  (0xfffffff8U 
                                                   & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                       << 4U) 
                                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                          << 3U) 
                                                         | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                             << 2U) 
                                                            | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__qs_out)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0xfffffffcU 
                                                    & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                        << 4U) 
                                                       | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                           << 3U) 
                                                          | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                              << 2U) 
                                                             | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                 << 1U) 
                                                                | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                                   ? (IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_out)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xfffffffeU 
                                                     & (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e)))))))
                                                    ? (IData)(vlTOPp->top__DOT__zx81a__DOT__rom_out)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (((IData)(vlTOPp->top__DOT__zx81a__DOT__tapeloader) 
                                                       << 4U) 
                                                      | (((IData)(vlTOPp->top__DOT__zx81a__DOT__qs_e) 
                                                          << 3U) 
                                                         | (((IData)(vlTOPp->top__DOT__zx81a__DOT__ch81_e) 
                                                             << 2U) 
                                                            | (((IData)(vlTOPp->top__DOT__zx81a__DOT__rom_e) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_e))))))
                                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__ram_out)
                                                     : 0xffU)))));
    if (vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n) {
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Oldnmi_n 
                = vlTOPp->top__DOT__zx81a__DOT__nNMI;
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Oldnmi_n = 0U;
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = (0x3fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                    >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
            ? ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 0x80U : 0x40U) : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                         ? 0x20U : 0x10U))
            : ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                    ? 8U : 4U) : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                   ? 2U : 1U)));
    vlTOPp->top__DOT__zx81a__DOT__ram__DOT__wren_a 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__ram__wren_a;
    vlTOPp->top__DOT__zx81a__DOT__nopgen = ((((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                              >> 0xfU) 
                                             & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__mem_out) 
                                                   >> 6U))) 
                                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__nHALT));
    vlTOPp->top__DOT__zx81a__DOT__cpu_din = ((1U == 
                                              (((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
                                                << 1U) 
                                               | (1U 
                                                  & (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
                                                      | (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__nRD)))))
                                              ? (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__nopgen))
                                                  ? 0U
                                                  : (IData)(vlTOPp->top__DOT__zx81a__DOT__mem_out))
                                              : ((2U 
                                                  == 
                                                  (((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nM1)) 
                                                          | (IData)(vlTOPp->top__DOT__zx81a__DOT__nIORQ)) 
                                                         | (IData)(vlTOPp->top__DOT__zx81a__DOT__nRD)))))
                                                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__io_dout)
                                                  : 0xffU));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di = vlTOPp->top__DOT__zx81a__DOT__cpu_din;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__dinst 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__top__DOT__zx81a__DOT__unnamedblk1__DOT__counter;
    // Body
    __Vdly__top__DOT__zx81a__DOT__unnamedblk1__DOT__counter 
        = vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter;
    __Vdly__top__DOT__zx81a__DOT__unnamedblk1__DOT__counter 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter)));
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__slow_mode) 
         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__turbo) 
            >> 1U))) {
        vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p = (1U 
                                                  & (((~ 
                                                       ((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter) 
                                                        >> 2U)) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter)))))) 
                                                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__turbo)));
        vlTOPp->top__DOT__zx81a__DOT__ce_cpu_n = (1U 
                                                  & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter) 
                                                       >> 2U) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter)))))) 
                                                     | (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__turbo)));
    } else {
        vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p = (1U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter) 
                                                       >> 3U)) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (7U 
                                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter)))))));
        vlTOPp->top__DOT__zx81a__DOT__ce_cpu_n = (1U 
                                                  & (((IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter) 
                                                      >> 3U) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (7U 
                                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter)))))));
    }
    vlTOPp->top__DOT__zx81a__DOT__ce_3m25 = (1U & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter))))));
    vlTOPp->top__DOT__zx81a__DOT__ce_6m5 = (1U & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter))))));
    vlTOPp->top__DOT__zx81a__DOT__ce_psg = (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter)))));
    vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__counter 
        = __Vdly__top__DOT__zx81a__DOT__unnamedblk1__DOT__counter;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__cen_n = vlTOPp->top__DOT__zx81a__DOT__ce_cpu_n;
    vlTOPp->top__DOT__zx81a__DOT__psg__DOT__CE = vlTOPp->top__DOT__zx81a__DOT__ce_psg;
    vlTOPp->ce_pix = vlTOPp->top__DOT__zx81a__DOT__ce_6m5;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__cen_p = vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__cen_pol)));
    if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__slow_mode)))) {
        vlTOPp->top__DOT__zx81a__DOT__unnamedblk1__DOT__turbo 
            = vlTOPp->top__DOT__slowmode;
    }
    vlTOPp->top__DOT__ce_pix = vlTOPp->ce_pix;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__cen 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT____Vcellinp__i_tv80_core__cen;
    vlTOPp->top__DOT__zx81a__DOT__ce_pix = vlTOPp->top__DOT__ce_pix;
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__wren_b 
        = ((IData)(vlTOPp->ioctl_wr) & (~ (IData)((0U 
                                                   != (IData)(vlTOPp->ioctl_index)))));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b 
        = ((((IData)(vlTOPp->ioctl_wr) & (0U != (0x1fU 
                                                 & (IData)(vlTOPp->ioctl_index)))) 
            & (3U == (7U & ((IData)(vlTOPp->ioctl_index) 
                            >> 5U)))) & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (vlTOPp->ioctl_addr 
                                                        >> 0xaU))))));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b 
        = ((((IData)(vlTOPp->ioctl_wr) & (0U != (0x1fU 
                                                 & (IData)(vlTOPp->ioctl_index)))) 
            & (1U == (7U & ((IData)(vlTOPp->ioctl_index) 
                            >> 5U)))) & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (vlTOPp->ioctl_addr 
                                                        >> 0xaU))))));
    vlTOPp->top__DOT__zx81a__DOT____Vcellinp__cpu__reset_n 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->top__DOT__zx81a__DOT__rom__DOT__wren_b 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__rom__wren_b;
    vlTOPp->top__DOT__zx81a__DOT__qschrs__DOT__wren_b 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__qschrs__wren_b;
    vlTOPp->top__DOT__zx81a__DOT__chroma81__DOT__wren_b 
        = vlTOPp->top__DOT__zx81a__DOT____Vcellinp__chroma81__wren_b;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL));
    vlTOPp->top__DOT__zx81a__DOT__nINT = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__addr) 
                                                >> 6U));
    vlTOPp->top__DOT__zx81a__DOT__nNMI = (1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch)) 
                                                | (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__hsync))));
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA 
            = (0xffU & ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                         ? ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? 0U : ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                      ? 0U : ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                               ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                 ? ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg))
                                 : ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA)
                                     : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To))
                              ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA)
                              : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                                 >> 8U)))));
    }
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB 
            = (0xffU & ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                         ? ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? 0U : ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                          ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC) 
                                             >> 8U)
                                          : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC)))
                             : ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)
                                     : 1U) : ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg))
                                 : ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB)
                                     : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To))
                              ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB)
                              : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB) 
                                 >> 8U)))));
    }
    if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ClkEn) {
        if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ) 
             & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ 
                = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out) 
                         >> 6U));
        }
        if (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
               >> 2U) | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
             & (4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDecZ 
                = (0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__int_n = vlTOPp->top__DOT__zx81a__DOT__nINT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__nmi_n = vlTOPp->top__DOT__zx81a__DOT__nNMI;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__di_reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__int_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__int_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__nmi_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__nmi_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB;
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__zx81a__DOT__data_latch_enable 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__nRFSH) 
            & (IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p)) 
           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ)));
    vlTOPp->top__DOT__zx81a__DOT__shifter_start = (
                                                   ((((IData)(vlTOPp->top__DOT__zx81a__DOT__nMREQ) 
                                                      & (IData)(vlTOPp->top__DOT__zx81a__DOT__nopgen_store)) 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__ce_cpu_p)) 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__shifter_en)) 
                                                   & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__NMIlatch)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__10\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__zx81a__DOT__nWAIT = (1U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__nHALT)) 
                                                 | (IData)(vlTOPp->top__DOT__zx81a__DOT__nNMI)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC 
        = vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ACC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC 
        = vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP 
        = vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F 
        = vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r 
        = vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate 
        = vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle 
        = vlTOPp->__Vdly__top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wait_n 
        = vlTOPp->top__DOT__zx81a__DOT__nWAIT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0xf0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0xfU & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout)));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout) 
                 >> 3U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x8fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x70U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout) 
                       << 4U)));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
        = (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x7fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x80U & ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout) 
                       << 7U)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
           ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 >> 0U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles)) 
                                                    & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 6U)))))))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mcycle 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS 
        = (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair 
        = (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 4U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates 
        = ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))
            ? 4U : 3U);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op 
        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 3U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((1U == 
                                             (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        } else if (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((2U == 
                                             (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                                = (
                                                   (8U 
                                                    & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F 
                                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__F) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout) {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI = 1U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F 
                                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__F) 
                                                    >> 6U))))));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                            = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                    }
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                            ? 7U : 
                                           ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U));
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                            ? 0xbU : 
                                           (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                  << 1U)));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((4U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((5U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__F) 
                                                     >> 6U))))));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                        = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0xbU : ((8U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                  | (1U 
                                                     | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                        << 1U))));
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                   << 1U)));
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 2U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((4U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((5U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__F) 
                                                     >> 6U))))));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                        = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U));
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                     << 1U)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__F) 
                                                    >> 6U))))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                    = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                    << 1U))));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 7U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                               << 1U)));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 3U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__F) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((4U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((5U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__F) 
                                                     >> 6U))))));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                        = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U));
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                     << 1U)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__F) 
                                                    >> 6U))))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                    = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                    << 1U))));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 7U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                               << 1U)));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__F) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__F) 
                                                    >> 6U))))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                    = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 7U : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U));
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 0xbU : (1U | 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                               << 1U)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__F) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                            vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__F) 
                                                   >> 6U))))));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump 
                                = vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                          | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                   << 1U))));
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 7U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                           << 1U)));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
                            = (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U));
                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F 
                            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
                            = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                      ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                 >> 7U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                  >> 7U)))
                                          : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                 >> 2U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                  >> 2U))))
                                      : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F)
                                              : (~ (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F)))
                                          : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                 >> 6U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__F) 
                                                  >> 6U))))));
                        if (vlTOPp->__Vfunc_top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U == (7U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF = 1U;
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            }
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                            = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                                 << 1U))));
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                                ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                           << 1U)));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        }
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                      >> 6U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        }
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                             << 1U))));
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                       << 1U)));
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    }
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                             << 1U))));
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                            ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                       << 1U)));
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                        = (0xcU | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16 = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DDD));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 6U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                    = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                        ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                         << 1U))));
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair))
                        ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__DPair) 
                                   << 1U)));
            }
        } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NMICycle) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
            }
        } else if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IntCycle) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
               | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
               | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
        if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    }
                }
            } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                        if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                             | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                         | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                }
            } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
                if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                     | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            }
        } else if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XY_State))) {
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__XYbit_undoc = 1U;
            if (((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                 | (7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)) 
                                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)) 
                                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)));
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))
                                    ? 0xdU : 5U);
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((2U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((3U == (7U 
                                                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                }
                            } else {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))))
                                        : 8U);
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (6U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))
                                        : 9U);
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                            }
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)));
                            }
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode 
                            = ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (6U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                            }
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (6U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 2U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                        } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                    } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | (6U 
                                                 & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                    } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode = 0U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 8U
                            : (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 3U))));
                } else if ((4U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 9U
                            : (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)));
                } else if ((5U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 3U;
                } else if ((3U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                >> 3U)));
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = (8U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To));
                }
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write = 1U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
            }
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetWZ = 1U;
            } else if ((2U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i = 1U;
                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                }
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC = 1U;
            }
        }
    }
    if ((6U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        if (((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB)) 
             | (0xcbU == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
        }
    }
    if ((7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates = 5U;
        if ((1U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
        }
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__SSS;
        if (((0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__unnamedblk1__DOT__IRB)) 
             | (1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__wait_n 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__wait_n;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0U;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xf0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                           | (0xfU & ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                          >> 4U) : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB))));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x1fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              | (((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                  << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                    << 2U)));
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xf0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                       | (0xfU & ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                                      >> 4U) : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB))));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x1fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          | (((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                << 2U)));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                    = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA;
                if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F))) {
                    if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        if ((5U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
                            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                                = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                        }
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = ((0x100U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                               | (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                           - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                         - (IData)(0x160U)));
                    }
                } else {
                    if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                               | ((9U < (0xfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                  << 4U));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(6U) 
                                         + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x1fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(0x60U) 
                                         + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                }
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                   >> 8U))));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                          | ((0U == (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                             << 6U)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                << 2U)));
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                       & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                    : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                       | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
        } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB) 
                   & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0x40U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (4U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xbfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            }
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0x10U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            if ((6U != (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (0x7fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                        >> 1U));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                    } else {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (1U | (0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                              << 1U)));
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                        >> 7U)));
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)) 
                           | (0x7fU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                       >> 1U)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = (0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                    << 1U));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F) 
                                     << 7U)) | (0x7fU 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                   >> 1U)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                     << 1U)) | (1U 
                                                & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0x80U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                             >> 1U)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA)));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xfeU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                 << 1U)) | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 7U)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                                >> 7U)));
            }
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0x1fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                      | (((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                            << 2U)));
            if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ISet))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0xc0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
            }
        }
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
            = (0xfcU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfcU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (2U | (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                       << 4U)));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                              << 2U));
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                           | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB));
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = (0x10U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfcU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (2U | (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x10U & ((~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                               << 4U)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
                      << 4U));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        }
        if ((7U == (7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)));
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        }
        if ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0x40U | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
            if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Z16_r) {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xbfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x40U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
            }
        } else {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = (0xbfU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out));
        }
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
            = ((0x7fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
               | (0x80U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                    << 2U)));
                }
            } else {
                vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                << 2U)));
            }
        }
        if (vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16_r) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0x3fU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0xc0U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F)));
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ts 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mc 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__mcycle;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycles_d;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Prefix;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_PC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Inc_WZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PreserveC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Arith16;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Jump;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpXY;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Call 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Call;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RstP;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDW;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__LDSPHL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Special_LD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeAF;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRS;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CPL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_CCF;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_SCF;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RETN;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BT;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_BTR;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RLD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_RRD;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_INRC;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetDI;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SetEI;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IMode;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Halt;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__stop 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__I_DJNZ;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IR)))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__no_read 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__no_read;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__write 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__write;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__JumpE)
            ? ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg))
            : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BTR_r)
                ? 0xfffeU : 1U));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC) 
                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__PC16_B)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq_i;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate 
        = (1U & ((0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                  ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate)
                  : ((1U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                      ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                         >> 1U) : ((2U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                    ? ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) : ((3U 
                                                  == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstates)) 
                                                    & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                       >> 6U)))))))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16;
    if ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusC;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B 
            = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg));
    } else {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A 
            = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP;
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B 
            = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))
                ? 0xffffU : 1U);
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_A) 
                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__SP16_B)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA 
        = (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) | ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                        & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                           >> 2U))) & (0U == (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State)))
            ? (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))
            : (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 2U) | ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)) 
                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                               >> 2U))) & (2U == (3U 
                                                  & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U))) : (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                                            & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                               >> 3U))
                                            ? (2U | 
                                               ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                                << 2U))
                                            : (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                                                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U))
                                                ? (1U 
                                                   | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH = 0U;
    if ((1U & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH 
                            = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT)) 
                           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL 
                            = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                    }
                } else {
                    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL 
                        = (1U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & (((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__nWAIT)) 
                           & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL = 1U;
        }
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__F_Out;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_alu__DOT__Q 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__DI_Reg)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__no_read;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__write;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__iorq 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__iorq;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__T_Res 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__last_tstate;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegWEL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA 
        = (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH) 
            << 8U) | (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16_B)));
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB));
    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r));
    } else if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16));
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusB) 
                        >> 8U));
    } else if (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegBusA_r) 
                        >> 8U));
    } else if ((1U & (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__ID16) 
                        >> 8U));
    }
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIL 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIL;
    vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__i_reg__DOT__DIH 
        = vlTOPp->top__DOT__zx81a__DOT__cpu__DOT__i_tv80_core__DOT__RegDIH;
}
