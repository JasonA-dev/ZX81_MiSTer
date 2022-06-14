////////////////////////////////////////////////////////////////////////////////
// ****
// T80(c) core. Attempt to finish all undocumented features and provide
//              accurate timings.
// Version 350.
// Copyright (c) 2018 Sorgelig
//  Test passed: ZEXDOC, ZEXALL, Z80Full(*), Z80memptr
//  (*) Currently only SCF and CCF instructions aren't passed X/Y flags check as
//      correct implementation is still unclear.
//
// ****
// T80(b) core. In an effort to merge and maintain bug fixes ....
//
// Ver 303 add undocumented DDCB and FDCB opcodes by TobiFlex 20.04.2010
// Ver 300 started tidyup
// MikeJ March 2005
// Latest version from www.fpgaarcade.com (original www.opencores.org)
//
// ****
// Z80 compatible microprocessor core
//
// Version : 0242
// Copyright (c) 2001-2002 Daniel Wallner (jesus@opencores.org)
// All rights reserved
//
// Redistribution and use in source and synthezised forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// Redistributions in synthesized form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// Neither the name of the author nor the names of other contributors may
// be used to endorse or promote products derived from this software without
// specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// Please report bugs to the author, but before you do so, please
// make sure that this is not a derivative work and that
// you have the latest version of this file.
//
// The latest version of this file can be found at:
//      http://www.opencores.org/cvsweb.shtml/t80/
//
// Limitations :
//
// File history :
//
//      0208 : First complete release
//      0211 : Fixed IM 1
//      0214 : Fixed mostly flags, only the block instructions now fail the zex regression test
//      0235 : Added IM 2 fix by Mike Johnson
//      0238 : Added NoRead signal
//      0238b: Fixed instruction timing for POP and DJNZ
//      0240 : Added (IX/IY+d) states, removed op-codes from mode 2 and added all remaining mode 3 op-codes
//      0240mj1 fix for HL inc/dec for INI, IND, INIR, INDR, OUTI, OUTD, OTIR, OTDR
//      0242 : Fixed I/O instruction timing, cleanup
//
// SystemVerilog Conversion Copyright (c) 2022 Frank Bruno All Rights Reserved
`default_nettype none
module tv80_mcode
  #
  (
   parameter Mode   = 0,
   parameter Flag_C = 0,
   parameter Flag_N = 1,
   parameter Flag_P = 2,
   parameter Flag_X = 3,
   parameter Flag_H = 4,
   parameter Flag_Y = 5,
   parameter Flag_Z = 6,
   parameter Flag_S = 7
   )
  (
   input wire [7:0]   IR,
   input wire [1:0]   ISet,
   input wire [2:0]   MCycle,
   input wire [7:0]   F,
   input wire         NMICycle,
   input wire         IntCycle,
   input wire [1:0]   XY_State,
   output logic [2:0] MCycles,
   output logic [2:0] TStates,
   output logic [1:0] Prefix, // None,CB,ED,DD/FD
   output logic       Inc_PC,
   output logic       Inc_WZ,
   output logic [3:0] IncDec_16, // BC,DE,HL,SP   0 is inc
   output logic       Read_To_Reg,
   output logic       Read_To_Acc,
   output logic [3:0] Set_BusA_To, // B,C,D,E,H,L,DI/DB,A,SP(L),SP(M),0,F
   output logic [3:0] Set_BusB_To, // B,C,D,E,H,L,DI,A,SP(L),SP(M),1,F,PC(L),PC(M),0
   output logic [3:0] ALU_Op,
   // ADD, ADC, SUB, SBC, AND, XOR, OR, CP, ROT, BIT, SET, RES, DAA, RLD, RRD, None
   output logic       Save_ALU,
   output logic       PreserveC,
   output logic       Arith16,
   output logic [2:0] Set_Addr_To, // aNone,aXY,aIOA,aSP,aBC,aDE,aZI
   output logic       IORQ,
   output logic       Jump,
   output logic       JumpE,
   output logic       JumpXY,
   output logic       Call,
   output logic       RstP,
   output logic       LDZ,
   output logic       LDW,
   output logic       LDSPHL,
   output logic [2:0] Special_LD, // A,I;A,R;I,A;R,A;None
   output logic       ExchangeDH,
   output logic       ExchangeRp,
   output logic       ExchangeAF,
   output logic       ExchangeRS,
   output logic       I_DJNZ,
   output logic       I_CPL,
   output logic       I_CCF,
   output logic       I_SCF,
   output logic       I_RETN,
   output logic       I_BT,
   output logic       I_BC,
   output logic       I_BTR,
   output logic       I_RLD,
   output logic       I_RRD,
   output logic       I_INRC,
   output logic [1:0] SetWZ,
   output logic       SetDI,
   output logic       SetEI,
   output logic [1:0] IMode,
   output logic       Halt,
   output logic       NoRead,
   output logic       Write,
   output logic       XYbit_undoc
   );

  localparam aNone = 3'b111;
  localparam aBC   = 3'b000;
  localparam aDE   = 3'b001;
  localparam aXY   = 3'b010;
  localparam aIOA  = 3'b100;
  localparam aSP   = 3'b101;
  localparam aZI   = 3'b110;

  function bit is_cc_true;
    input [7:0]       F;
    input [2:0]       cc;
    begin
      if (Mode == 3) begin
        case (cc)
          3'b000: is_cc_true = ~F[Flag_S]; // NZ
          3'b001: is_cc_true =  F[Flag_S]; // Z
          3'b010: is_cc_true = ~F[Flag_H]; // NC
          3'b011: is_cc_true =  F[Flag_H]; // C
          3'b100: is_cc_true = '0;
          3'b101: is_cc_true = '0;
          3'b110: is_cc_true = '0;
          3'b111: is_cc_true = '0;
        endcase
      end else begin
        case (cc)
          3'b000: is_cc_true = ~F[Flag_Z]; // NZ
          3'b001: is_cc_true =  F[Flag_Z]; // Z
          3'b010: is_cc_true = ~F[Flag_C]; // NC
          3'b011: is_cc_true =  F[Flag_C]; // C
          3'b100: is_cc_true = ~F[Flag_P]; // PO
          3'b101: is_cc_true =  F[Flag_P]; // PE
          3'b110: is_cc_true = ~F[Flag_S]; // P
          3'b111: is_cc_true =  F[Flag_S]; // M
        endcase
      end // else: !if(Mode == 3)
    end
  endfunction // is_cc_true

  always_comb begin

    logic [2:0] DDD;
    logic [2:0] SSS;
    logic [1:0] DPair;
    logic [7:0] IRB;

    DDD   = IR[5:3];
    SSS   = IR[2:0];
    DPair = IR[5:4];
    IRB   = IR;

    MCycles = 3'b001;
    if (MCycle == 3'b001) TStates = 3'b100;
    else                  TStates = 3'b011;

    Prefix      = '0;
    Inc_PC      = '0;
    Inc_WZ      = '0;
    IncDec_16   = '0;
    Read_To_Acc = '0;
    Read_To_Reg = '0;
    Set_BusB_To = '0;
    Set_BusA_To = '0;
    ALU_Op      = {1'b0, IR[5:3]};
    Save_ALU    = '0;
    PreserveC   = '0;
    Arith16     = '0;
    IORQ        = '0;
    Set_Addr_To = aNone;
    Jump        = '0;
    JumpE       = '0;
    JumpXY      = '0;
    Call        = '0;
    RstP        = '0;
    LDZ         = '0;
    LDW         = '0;
    LDSPHL      = '0;
    Special_LD  = '0;
    ExchangeDH  = '0;
    ExchangeRp  = '0;
    ExchangeAF  = '0;
    ExchangeRS  = '0;
    I_DJNZ      = '0;
    I_CPL       = '0;
    I_CCF       = '0;
    I_SCF       = '0;
    I_RETN      = '0;
    I_BT        = '0;
    I_BC        = '0;
    I_BTR       = '0;
    I_RLD       = '0;
    I_RRD       = '0;
    I_INRC      = '0;
    SetDI       = '0;
    SetEI       = '0;
    IMode       = '1;
    Halt        = '0;
    NoRead      = '0;
    Write       = '0;
    XYbit_undoc = '0;
    SetWZ       = '0;

    case (ISet)
      2'b00: begin
        ////////////////////////////////////////////////////////////////////////
        //
        //	Unprefixed instructions
        //
        ////////////////////////////////////////////////////////////////////////

        case (IRB)
          // 8 BIT LOAD GROUP
          8'b01000000, 8'b01000001, 8'b01000010, 8'b01000011,
          8'b01000100, 8'b01000101, 8'b01000111, 8'b01001000,
          8'b01001001, 8'b01001010, 8'b01001011, 8'b01001100,
          8'b01001101, 8'b01001111, 8'b01010000, 8'b01010001,
          8'b01010010, 8'b01010011, 8'b01010100, 8'b01010101,
          8'b01010111, 8'b01011000, 8'b01011001, 8'b01011010,
          8'b01011011, 8'b01011100, 8'b01011101, 8'b01011111,
          8'b01100000, 8'b01100001, 8'b01100010, 8'b01100011,
          8'b01100100, 8'b01100101, 8'b01100111, 8'b01101000,
          8'b01101001, 8'b01101010, 8'b01101011, 8'b01101100,
          8'b01101101, 8'b01101111, 8'b01111000, 8'b01111001,
          8'b01111010, 8'b01111011, 8'b01111100, 8'b01111101,
          8'b01111111: begin
            // LD r,r'
            Set_BusB_To[2:0]  = SSS;
            ExchangeRp        = '1;
            Set_BusA_To[2:0]  = DDD;
            Read_To_Reg       = '1;
          end
          8'b00000110, 8'b00001110, 8'b00010110, 8'b00011110,
          8'b00100110, 8'b00101110, 8'b00111110: begin
            // LD r,n
            MCycles = 3'b010;
            case (MCycle)
              3'd2: begin
                Inc_PC           = '1;
                Set_BusA_To[2:0] = DDD;
                Read_To_Reg      = '1;
              end
            endcase // case (MCycle)
          end
          8'b01000110, 8'b01001110, 8'b01010110, 8'b01011110,
          8'b01100110, 8'b01101110, 8'b01111110: begin
            // LD r,(HL)
            MCycles = 3'b010;
            case (MCycle)
              3'd1: Set_Addr_To = aXY;
              3'd2: begin
                Set_BusA_To[2:0] = DDD;
                Read_To_Reg      = '1;
              end
            endcase // case (MCycle)
          end
          8'b01110000, 8'b01110001, 8'b01110010, 8'b01110011,
          8'b01110100, 8'b01110101, 8'b01110111: begin
            // LD (HL),r
            MCycles = 3'b010;
            case (MCycle)
              3'd1: begin
                Set_Addr_To      = aXY;
                Set_BusB_To[2:0] = SSS;
                Set_BusB_To[3]   = '0;
              end
              3'd2: Write = '1;
            endcase
          end
          8'b00110110: begin
            // LD (HL),n
            MCycles = 3'b011;
            case (MCycle)
              3'd2: begin
                Inc_PC           = '1;
                Set_Addr_To      = aXY;
                Set_BusB_To[2:0] = SSS;
                Set_BusB_To[3]   = '0;
              end
              3'd3: Write = '1;
            endcase
          end
          8'b00001010: begin
            // LD A,(BC)
            MCycles = 3'b010;
            case (MCycle)
              3'd1: Set_Addr_To = aBC;
              3'd2: Read_To_Acc = '1;
            endcase
          end
          8'b00011010: begin
            // LD A,(DE)
            MCycles = 3'b010;
            case (MCycle)
              3'd1: Set_Addr_To = aDE;
              3'd2: Read_To_Acc = '1;
            endcase // case (MCycle)
          end
          8'b00111010: begin
            if (Mode == 3) begin
              // LDD A,(HL)
              MCycles = 3'b010;
              case (MCycle)
                3'd1: Set_Addr_To = aXY;
                3'd2: begin
                  Read_To_Acc = '1;
                  IncDec_16   = 4'b1110;
                end
              endcase // case (MCycle)
            end else begin
              // LD A,(nn)
              MCycles = 3'b100;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd3: begin
                  Set_Addr_To = aZI;
                  Inc_PC      = '1;
                end
                3'd4: Read_To_Acc = '1;
              endcase
            end // else: !if(Mode == 3)
          end
          8'b00000010: begin
            // LD (BC),A
            MCycles = 3'b010;
            case (MCycle)
              3'd1: begin
                Set_Addr_To = aBC;
                Set_BusB_To = 4'b0111;
                SetWZ       = 2'b10;
              end
              3'd2: Write = '1;
            endcase
          end
          8'b00010010: begin
            // LD (DE),A
            MCycles = 3'b010;
            case (MCycle)
              3'd1: begin
                Set_Addr_To = aDE;
                Set_BusB_To = 4'b0111;
                SetWZ       = 2'b10;
              end
              3'd2: Write = '1;
            endcase // case (MCycle)
          end
          8'b00110010: begin
            if (Mode == 3) begin
              // LDD (HL),A
              MCycles = 3'b010;
              case (MCycle)
                3'd1: begin
                  Set_Addr_To = aXY;
                  Set_BusB_To = 4'b0111;
                end
                3'd2: begin
                  Write     = '1;
                  IncDec_16 = 4'b1110;
                end
              endcase
            end else begin
              // LD (nn),A
              MCycles = 3'b100;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd3: begin
                  Set_Addr_To = aZI;
                  SetWZ       = 2'b10;
                  Inc_PC      = '1;
                  Set_BusB_To = 4'b0111;
                end
                3'd4: Write = '1;
              endcase
            end // else: !if(Mode == 3)
          end // case: 8'b00110010

          // 16 BIT LOAD GROUP
          8'b00000001, 8'b00010001, 8'b00100001, 8'b00110001: begin
            // LD dd,nn
            MCycles = 3'b011;
            case (MCycle)
              3'd2: begin
                Inc_PC      = '1;
                Read_To_Reg = '1;
                if (DPair == 2'b11) begin
                  Set_BusA_To[3:0] = 4'b1000;
                end else begin
                  Set_BusA_To[2:1] = DPair;
                  Set_BusA_To[0]   = '1;
                end
              end
              3'd3: begin
                Inc_PC      = '1;
                Read_To_Reg = '1;
                if (DPair == 2'b11) begin
                  Set_BusA_To[3:0] = 4'b1001;
                end else begin
                  Set_BusA_To[2:1] = DPair;
                  Set_BusA_To[0]   = '0;
                end
              end
            endcase // case (MCycle)
          end // case: 8'b00000001, 8'b00010001, 8'b00100001, 8'b00110001
          8'b00101010: begin
            if (Mode == 3) begin
              // LDI A,(HL)
              MCycles = 3'b010;
              case (MCycle)
                3'd1: Set_Addr_To = aXY;
                3'd2: begin
                  Read_To_Acc = '1;
                  IncDec_16   = 4'b0110;
                end
              endcase
            end else begin
              // LD HL,(nn)
              MCycles = 3'b101;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd3: begin
                  Set_Addr_To = aZI;
                  Inc_PC      = '1;
                  LDW         = '1;
                end
                3'd4: begin
                  Set_BusA_To[2:0] = 3'b101; // L
                  Read_To_Reg      = '1;
                  Inc_WZ           = '1;
                  Set_Addr_To      = aZI;
                end
                3'd5: begin
                  Set_BusA_To[2:0] = 3'b100; // H
                  Read_To_Reg      = '1;
                end
              endcase
            end // else: !if(Mode == 3)
          end // case: 8'b00101010
          8'b00100010: begin
            if (Mode == 3) begin
              // LDI (HL),A
              MCycles = 3'b010;
              case (MCycle)
                3'd1: begin
                  Set_Addr_To = aXY;
                  Set_BusB_To = 4'b0111;
                end
                3'd2: begin
                  Write     = '1;
                  IncDec_16 = 4'b0110;
                end
              endcase
            end else begin
              // LD (nn),HL
              MCycles = 3'b101;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd3: begin
                  Set_Addr_To = aZI;
                  Inc_PC      = '1;
                  LDW         = '1;
                  Set_BusB_To = 4'b0101; // L
                end
                3'd4: begin
                  Inc_WZ      = '1;
                  Set_Addr_To = aZI;
                  Write       = '1;
                  Set_BusB_To = 4'b0100; // H
                end
                3'd5: Write = '1;
              endcase
            end // else: !if(Mode == 3)
          end // case: 8'b00100010
          8'b11111001: begin
            // LD SP,HL
            TStates = 3'b110;
            LDSPHL  = '1;
          end
          8'b11000101, 8'b11010101, 8'b11100101, 8'b11110101: begin
            // PUSH qq
            MCycles = 3'b011;
            case (MCycle)
              3'd1: begin
                TStates     = 3'b101;
                IncDec_16   = '1;
                Set_Addr_To = aSP;
                if (DPair == 2'b11) begin
                  Set_BusB_To = 4'b0111;
                end else begin
                  Set_BusB_To[2:1] = DPair;
                  Set_BusB_To[0]   = '0;
                  Set_BusB_To[3]   = '0;
                end
              end
              3'd2: begin
                IncDec_16   = '1;
                Set_Addr_To = aSP;
                if (DPair == 2'b11) begin
                  Set_BusB_To = 4'b1011;
                end else begin
                  Set_BusB_To[2:1] = DPair;
                  Set_BusB_To[0]   = '1;
                  Set_BusB_To[3]   = '0;
                end
                Write = '1;
              end
              3'd3: Write = '1;
            endcase // case (MCycle)
          end // case: 8'b11000101, 8'b11010101, 8'b11100101, 8'b11110101
          8'b11000001, 8'b11010001, 8'b11100001, 8'b11110001: begin
            // POP qq
            MCycles = 3'b011;
            case (MCycle)
              3'd1: Set_Addr_To = aSP;
              3'd2: begin
                IncDec_16   = 4'b0111;
                Set_Addr_To = aSP;
                Read_To_Reg = '1;
                if (DPair == 2'b11) begin
                  Set_BusA_To[3:0] = 4'b1011;
                end else begin
                  Set_BusA_To[2:1] = DPair;
                  Set_BusA_To[0]   = '1;
                end
              end
              3'd3: begin
                IncDec_16   = 4'b0111;
                Read_To_Reg = '1;
                if (DPair == 2'b11) begin
                  Set_BusA_To[3:0] = 4'b0111;
                end else begin
                  Set_BusA_To[2:1] = DPair;
                  Set_BusA_To[0]   = '0;
                end
              end
            endcase
          end // case: 8'b11000001, 8'b11010001, 8'b11100001, 8'b11110001

          // EXCHANGE, BLOCK TRANSFER AND SEARCH GROUP
          8'b11101011: begin
            if (Mode != 3)
              // EX DE,HL
              ExchangeDH = '1;
          end
          8'b00001000: begin
            if (Mode == 3) begin
              // LD (nn),SP
              MCycles = 3'b101;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd3: begin
                  Set_Addr_To = aZI;
                  Inc_PC      = '1;
                  LDW         = '1;
                  Set_BusB_To = 4'b1000;
                end
                3'd4: begin
                  Inc_WZ      = '1;
                  Set_Addr_To = aZI;
                  Write       = '1;
                  Set_BusB_To = 4'b1001;
                end
                3'd5: Write = '1;
              endcase // case (MCycle)
            end else if (Mode < 2) begin
              // EX AF,AF'
              ExchangeAF = '1;
            end
          end // case: 8'b00001000

          8'b11011001: begin
            if (Mode == 3) begin
              // RETI
              MCycles = 3'b011;
              case (MCycle)
                3'd1: Set_Addr_To = aSP;
                3'd2: begin
                  IncDec_16   = 4'b0111;
                  Set_Addr_To = aSP;
                  LDZ         = '1;
                end
                3'd3: begin
                  Jump      = '1;
                  IncDec_16 = 4'b0111;
                  I_RETN    = '1;
                  SetEI     = '1;
                end
              endcase
            end else if (Mode < 2) begin
              // EXX
              ExchangeRS = '1;
            end
          end // case: 8'b11011001
          8'b11100011: begin
            if (Mode != 3) begin
              // EX (SP),HL
              MCycles = 3'b101;
              case (MCycle)
                3'd1: Set_Addr_To = aSP;
                3'd2: begin
                  Read_To_Reg = '1;
                  Set_BusA_To = 4'b0101;
                  Set_BusB_To = 4'b0101;
                  Set_Addr_To = aSP;
                  LDZ         = '1;
                end
                3'd3: begin
                  IncDec_16   = 4'b0111;
                  Set_Addr_To = aSP;
                  TStates     = 3'b100;
                  Write       = '1;
                end
                3'd4: begin
                  Read_To_Reg = '1;
                  Set_BusA_To = 4'b0100;
                  Set_BusB_To = 4'b0100;
                  Set_Addr_To = aSP;
                  LDW         = '1;
                end
                3'd5: begin
                  IncDec_16 = 4'b1111;
                  TStates   = 3'b101;
                  Write     = '1;
                end
              endcase // case (MCycle)
            end // if (Mode != 3)
          end // case: 8'b11100011

          // 8 BIT ARITHMETIC AND LOGICAL GROUP
          8'b10000000, 8'b10000001, 8'b10000010, 8'b10000011,
          8'b10000100, 8'b10000101, 8'b10000111, 8'b10001000,
          8'b10001001, 8'b10001010, 8'b10001011, 8'b10001100,
          8'b10001101, 8'b10001111, 8'b10010000, 8'b10010001,
          8'b10010010, 8'b10010011, 8'b10010100, 8'b10010101,
          8'b10010111, 8'b10011000, 8'b10011001, 8'b10011010,
          8'b10011011, 8'b10011100, 8'b10011101, 8'b10011111,
          8'b10100000, 8'b10100001, 8'b10100010, 8'b10100011,
          8'b10100100, 8'b10100101, 8'b10100111, 8'b10101000,
          8'b10101001, 8'b10101010, 8'b10101011, 8'b10101100,
          8'b10101101, 8'b10101111, 8'b10110000, 8'b10110001,
          8'b10110010, 8'b10110011, 8'b10110100, 8'b10110101,
          8'b10110111, 8'b10111000, 8'b10111001, 8'b10111010,
          8'b10111011, 8'b10111100, 8'b10111101, 8'b10111111: begin
            // ADD A,r
            // ADC A,r
            // SUB A,r
            // SBC A,r
            // AND A,r
            // OR A,r
            // XOR A,r
            // CP A,r
            Set_BusB_To[2:0] = SSS;
            Set_BusA_To[2:0] = '1;
            Read_To_Reg      = '1;
            Save_ALU         = '1;
          end
          8'b10000110, 8'b10001110, 8'b10010110, 8'b10011110,
          8'b10100110, 8'b10101110, 8'b10110110, 8'b10111110: begin
            // ADD A,(HL)
            // ADC A,(HL)
            // SUB A,(HL)
            // SBC A,(HL)
            // AND A,(HL)
            // OR A,(HL)
            // XOR A,(HL)
            // CP A,(HL)
            MCycles = 3'b010;
            case (MCycle)
              3'd1: Set_Addr_To = aXY;
              3'd2: begin
                Read_To_Reg = '1;
                Save_ALU = '1;
                Set_BusB_To[2:0] = SSS;
                Set_BusA_To[2:0] = '1;
              end
            endcase // case (MCycle)
          end
          8'b11000110, 8'b11001110, 8'b11010110, 8'b11011110,
          8'b11100110, 8'b11101110, 8'b11110110, 8'b11111110: begin
            // ADD A,n
            // ADC A,n
            // SUB A,n
            // SBC A,n
            // AND A,n
            // OR A,n
            // XOR A,n
            // CP A,n
            MCycles = 3'b010;
            if (MCycle == 3'b010) begin
              Inc_PC           = '1;
              Read_To_Reg      = '1;
              Save_ALU         = '1;
              Set_BusB_To[2:0] = SSS;
              Set_BusA_To[2:0] = '1;
            end
          end
          8'b00000100, 8'b00001100, 8'b00010100, 8'b00011100,
          8'b00100100, 8'b00101100, 8'b00111100: begin
            // INC r
            Set_BusB_To      = 4'b1010;
            Set_BusA_To[2:0] = DDD;
            Read_To_Reg      = '1;
            Save_ALU         = '1;
            PreserveC        = '1;
            ALU_Op           = '0;
          end
          8'b00110100: begin
            // INC (HL)
            MCycles = 3'b011;
            case (MCycle)
              3'd1: Set_Addr_To = aXY;
              3'd2: begin
                TStates          = 3'b100;
                Set_Addr_To      = aXY;
                Read_To_Reg      = '1;
                Save_ALU         = '1;
                PreserveC        = '1;
                ALU_Op           = 4'b0000;
                Set_BusB_To      = 4'b1010;
                Set_BusA_To[2:0] = DDD;
              end
              3'd3: Write = '1;
            endcase // case (MCycle)
          end
          8'b00000101, 8'b00001101, 8'b00010101, 8'b00011101,
          8'b00100101, 8'b00101101, 8'b00111101: begin
            // DEC r
            Set_BusB_To      = 4'b1010;
            Set_BusA_To[2:0] = DDD;
            Read_To_Reg      = '1;
            Save_ALU         = '1;
            PreserveC        = '1;
            ALU_Op           = 4'b0010;
          end
          8'b00110101: begin
            // DEC (HL)
            MCycles = 3'b011;
            case (MCycle)
              3'd1: Set_Addr_To = aXY;
              3'd2: begin
                TStates          = 3'b100;
                Set_Addr_To      = aXY;
                ALU_Op           = 4'b0010;
                Read_To_Reg      = '1;
                Save_ALU         = '1;
                PreserveC        = '1;
                Set_BusB_To      = 4'b1010;
                Set_BusA_To[2:0] = DDD;
              end
              3'd3: Write = '1;
            endcase // case (MCycle)
          end

          // GENERAL PURPOSE ARITHMETIC AND CPU CONTROL GROUPS
          8'b00100111: begin
            // DAA
            Set_BusA_To[2:0] = 3'b111;
            Read_To_Reg      = '1;
            ALU_Op           = 4'b1100;
            Save_ALU         = '1;
          end
          8'b00101111: I_CPL = '1; // CPL
          8'b00111111: I_CCF = '1; // CCF
          8'b00110111: I_SCF = '1; // SCF
          8'b00000000: begin
            if (NMICycle) begin
              // NMI
              MCycles = 3'b011;
              case (MCycle)
                3'd1: begin
                  TStates     = 3'b101;
                  IncDec_16   = 4'b1111;
                  Set_Addr_To = aSP;
                  Set_BusB_To = 4'b1101;
                end
                3'd2: begin
                  Write       = '1;
                  IncDec_16   = 4'b1111;
                  Set_Addr_To = aSP;
                  Set_BusB_To = 4'b1100;
                end
                3'd3: Write = '1;
              endcase // case (MCycle)
            end else if (IntCycle) begin
              // INT (IM 2)
              MCycles = 3'b101;
              case (MCycle)
                3'd1: begin
                  LDZ         = '1;
                  TStates     = 3'b101;
                  IncDec_16   = 4'b1111;
                  Set_Addr_To = aSP;
                  Set_BusB_To = 4'b1101;
                end
                3'd2: begin
                  //TStates   = 3'b100;
                  Write       = '1;
                  IncDec_16   = 4'b1111;
                  Set_Addr_To = aSP;
                  Set_BusB_To = 4'b1100;
                end
                3'd3: begin
                  //TStates = 3'b100;
                  Write     = '1;
                end
                3'd4: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd5: Jump  = '1;
              endcase
            end // if (IntCycle)
          end // case: 8'b00000000
          8'b01110110: Halt  = '1; // HALT
          8'b11110011: SetDI = '1; // DI
          8'b11111011: SetEI = '1; // EI

          // 16 BIT ARITHMETIC GROUP
          8'b00001001, 8'b00011001, 8'b00101001, 8'b00111001: begin
            // ADD HL,ss
            MCycles = 3'b011;
            case (MCycle)
              3'd2: begin
                NoRead           = '1;
                ALU_Op           = '0;
                Read_To_Reg      = '1;
                Save_ALU         = '1;
                Set_BusA_To[2:0] = 3'b101;
                case (IR[5:4])
                  2'd0, 2'd1, 2'd2: begin
                    Set_BusB_To[2:1] = IR[5:4];
                    Set_BusB_To[0]   = '1;
                  end
                  default: Set_BusB_To = 4'b1000;
                endcase
                TStates = 3'b100;
                Arith16 = '1;
                SetWZ   = '1;
              end // case: 2
              3'd3: begin
                NoRead      = '1;
                Read_To_Reg = '1;
                Save_ALU    = '1;
                ALU_Op      = 4'b0001;
                Set_BusA_To[2:0] = 3'b100;
                case (IR[5:4])
                  2'd0, 2'd1, 2'd2: Set_BusB_To[2:1] = IR[5:4];
                  default: Set_BusB_To      = 4'b1001;
                endcase
                Arith16 = '1;
              end // case: 3
            endcase // case (MCycle)
          end // case: 8'b00001001, 8'b00011001, 8'b00101001, 8'b00111001
          8'b00000011, 8'b00010011, 8'b00100011, 8'b00110011: begin
            // INC ss
            TStates        = 3'b110;
            IncDec_16[3:2] = 2'b01;
            IncDec_16[1:0] = DPair;
          end
          8'b00001011, 8'b00011011, 8'b00101011, 8'b00111011: begin
            // DEC ss
            TStates = 3'b110;
            IncDec_16[3:2] = 2'b11;
            IncDec_16[1:0] = DPair;
          end
          // ROTATE AND SHIFT GROUP
          8'b00000111, // RLCA
            8'b00010111,  // RLA
            8'b00001111,  // RRCA
            8'b00011111: begin // RRA
              Set_BusA_To[2:0] = 3'b111;
              ALU_Op           = 4'b1000;
              Read_To_Reg      = '1;
              Save_ALU         = '1;
            end

          // JUMP GROUP
          8'b11000011: begin
            // JP nn
            MCycles = 3'b011;
            case (MCycle)
              3'd2: begin
                Inc_PC = '1;
                LDZ    = '1;
              end
              3'd3: begin
                Inc_PC = '1;
                Jump   = '1;
                LDW    = '1;
              end
            endcase // case (MCycle)
          end // case: 8'b11000011

          8'b11000010, 8'b11001010, 8'b11010010, 8'b11011010,
          8'b11100010, 8'b11101010, 8'b11110010, 8'b11111010: begin
            if (IR[5] && (Mode == 3)) begin
              case (IRB[4:3])
                2'b00: begin
                  // LD ($FF00+C),A
                  MCycles = 3'b010;
                  case (MCycle)
                    3'd1: begin
                      Set_Addr_To = aBC;
                      Set_BusB_To =  4'b0111;
                    end
                    3'd2: begin
                      Write = '1;
                      IORQ  = '1;
                    end
                  endcase // case (MCycle)
                end
                2'b01: begin
                  // LD (nn),A
                  MCycles = 3'b100;
                  case (MCycle)
                    3'd2: begin
                      Inc_PC = '1;
                      LDZ    = '1;
                    end
                    3'd3: begin
                      Set_Addr_To = aZI;
                      Inc_PC      = '1;
                      Set_BusB_To = 4'b0111;
                    end
                    3'd4: Write = '1;
                  endcase // case (MCycle)
                end // case: 2'b01
                2'b10: begin
                  // LD A,($FF00+C)
                  MCycles = 3'b010;
                  case (MCycle)
                    3'd1: Set_Addr_To = aBC;
                    3'd2: begin
                      Read_To_Acc = '1;
                      IORQ        = '1;
                    end
                  endcase // case (MCycle)
                end // case: 2'b10
                2'b11: begin
                  // LD A,(nn)
                  MCycles = 3'b100;
                  case (MCycle)
                    3'd2: begin
                      Inc_PC = '1;
                      LDZ    = '1;
                    end
                    3'd3: begin
                      Set_Addr_To = aZI;
                      Inc_PC      = '1;
                    end
                    3'd4: Read_To_Acc = '1;
                  endcase // case (MCycle)
                end // case: 2'b11
              endcase // case (IRB[4:3])
            end else begin
              // JP cc,nn
              MCycles = 3'b011;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd3: begin
                  LDW    = '1;
                  Inc_PC = '1;
                  Jump = is_cc_true(F, IR[5:3]);
                end
              endcase // case (MCycle)
            end // else: !if(IR[5] && (Mode == 3))
          end // case: 8'b11000010, 8'b11001010, 8'b11010010, 8'b11011010,...
          8'b00011000: begin
            if (Mode != 2) begin
              // JR e
              MCycles = 3'b011;
              case (MCycle)
                3'd2: Inc_PC = '1;
                3'd3: begin
                  NoRead  = '1;
                  JumpE   = '1;
                  TStates = 3'b101;
                end
              endcase // case (MCycle)
            end // if (Mode != 2)
          end // case: 8'b00011000
          8'b00111000: begin
            if (Mode != 2) begin
              // JR C,e
              MCycles = 3'b011;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  if (~F[Flag_C]) MCycles = 3'b010;
                end
                3'd3: begin
                  NoRead  = '1;
                  JumpE   = '1;
                  TStates = 3'b101;
                end
              endcase
            end // if (Mode != 2)
          end // case: 8'b00111000
          8'b00110000: begin
            if (Mode != 2) begin
              // JR NC,e
              MCycles = 3'b011;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  if (F[Flag_C]) MCycles = 3'b010;
                end
                3'd3: begin
                  NoRead  = '1;
                  JumpE   = '1;
                  TStates = 3'b101;
                end
              endcase
            end // if (Mode != 2)
          end // case: 8'b00110000
          8'b00101000: begin
            if (Mode != 2) begin
              // JR Z,e
              MCycles = 3'b011;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  if (~F[Flag_Z]) MCycles = 3'b010;
                end
                3'd3: begin
                  NoRead  = '1;
                  JumpE   = '1;
                  TStates = 3'b101;
                end
              endcase
            end // if (Mode != 2)
          end // case: 8'b00101000
          8'b00100000: begin
            if (Mode != 2) begin
              // JR NZ,e
              MCycles = 3'b011;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  if (F[Flag_Z]) MCycles = 3'b010;
                end
                3'd3: begin
                  NoRead  = '1;
                  JumpE   = '1;
                  TStates = 3'b101;
                end
              endcase
            end // if (Mode != 2)
          end
          8'b11101001: JumpXY = '1; // JP (HL)
          8'b00010000: begin
            if (Mode == 3) begin
                I_DJNZ = '1;
            end else if (Mode < 2) begin
              // DJNZ,e
              MCycles = 3'b011;
              case (MCycle)
                3'd1: begin
                  TStates          = 3'b101;
                  I_DJNZ           = '1;
                  Set_BusB_To      = 4'b1010;
                  Set_BusA_To[2:0] = 3'b000;
                  Read_To_Reg      = '1;
                  Save_ALU         = '1;
                  ALU_Op           = 4'b0010;
                end
                3'd2: begin
                  I_DJNZ = '1;
                  Inc_PC = '1;
                end
                3'd3: begin
                  NoRead  = '1;
                  JumpE   = '1;
                  TStates = 3'b101;
                end
              endcase // case (MCycle)
            end // if (Mode < 2)
          end // case: 8'b00010000

          // CALL AND RETURN GROUP
          8'b11001101: begin
            // CALL nn
            MCycles = 3'b101;
            case (MCycle)
              3'd2: begin
                Inc_PC = '1;
                LDZ    = '1;
              end
              3'd3: begin
                IncDec_16   = 4'b1111;
                Inc_PC      = '1;
                TStates     = 3'b100;
                Set_Addr_To = aSP;
                LDW         = '1;
                Set_BusB_To = 4'b1101;
              end
              3'd4: begin
                Write       = '1;
                IncDec_16   = '1;
                Set_Addr_To = aSP;
                Set_BusB_To = 4'b1100;
              end
              3'd5: begin
                Write = '1;
                Call  = '1;
              end
            endcase // case (MCycle)
          end // case: 8'b11001101
          8'b11000100, 8'b11001100, 8'b11010100, 8'b11011100,
          8'b11100100, 8'b11101100, 8'b11110100, 8'b11111100: begin
            if (~IR[5] || Mode != 3) begin
              // CALL cc,nn
              MCycles = 3'b101;
              case (MCycle)
                3'd2: begin
                  Inc_PC = '1;
                  LDZ    = '1;
                end
                3'd3: begin
                  Inc_PC = '1;
                  LDW    = '1;
                  if (is_cc_true(F, IR[5:3])) begin
                    IncDec_16   = '1;
                    Set_Addr_To = aSP;
                    TStates     = 3'b100;
                    Set_BusB_To = 4'b1101;
                  end else begin
                    MCycles = 3'b011;
                  end
                end
                3'd4: begin
                  Write       = '1;
                  IncDec_16   = '1;
                  Set_Addr_To = aSP;
                  Set_BusB_To = 4'b1100;
                end
                3'd5: begin
                  Write = '1;
                  Call = '1;
                end
              endcase // case (MCycle)
            end // if (~IR[5] || Mode != 3)
          end // case: 8'b11000100, 8'b11001100, 8'b11010100, 8'b11011100,...
          8'b11001001: begin
            // RET
            MCycles = 3'b011;
            case (MCycle)
              3'd1: begin
                //TStates   = 3'b101;
                Set_Addr_To = aSP;
              end
              3'd2: begin
                IncDec_16   = 4'b0111;
                Set_Addr_To = aSP;
                LDZ         = '1;
              end
              3'd3: begin
                Jump      = '1;
                IncDec_16 = 4'b0111;
              end
            endcase // case (MCycle)
          end // case: 8'b11001001
          8'b11000000, 8'b11001000, 8'b11010000, 8'b11011000,
          8'b11100000, 8'b11101000, 8'b11110000, 8'b11111000: begin
            if (IR[5] && Mode == 3) begin
              case (IRB[4:3])
                2'b00: begin
                  // LD ($FF00+nn),A
                  MCycles = 3'b011;
                  case (MCycle)
                    3'd2: begin
                      Inc_PC      = '1;
                      Set_Addr_To = aIOA;
                      Set_BusB_To = 4'b0111;
                    end
                    3'd3: Write = '1;
                  endcase // case (MCycle)
                end // case: 2'b00
                2'b01: begin
                  // ADD SP,n
                  MCycles = 3'b011;
                  case (MCycle)
                    3'd2: begin
                      ALU_Op      = '0;
                      Inc_PC      = '1;
                      Read_To_Reg = '1;
                      Save_ALU    = '1;
                      Set_BusA_To = 4'b1000;
                      Set_BusB_To = 4'b0110;
                    end
                    3'd3: begin
                      NoRead      = '1;
                      Read_To_Reg = '1;
                      Save_ALU    = '1;
                      ALU_Op      = 4'b0001;
                      Set_BusA_To = 4'b1001;
                      Set_BusB_To = 4'b1110;	// Incorrect unsigned !!!!!!!!!!!!!!!!!!!!!
                    end
                  endcase // case (MCycle)
                end // case: 2'b01
                2'b10: begin
                  // LD A,($FF00+nn)
                  MCycles = 3'b011;
                  case (MCycle)
                    3'd2: begin
                      Inc_PC      = '1;
                      Set_Addr_To = aIOA;
                    end
                    3'd3: Read_To_Acc = '1;
                  endcase // case (MCycle)
                end // case: 2'b10
                2'b11: begin
                  // LD HL,SP+n	// Not correct !!!!!!!!!!!!!!!!!!!
                  MCycles = 3'b101;
                  case (MCycle)
                    3'd2: begin
                      Inc_PC = '1;
                      LDZ    = '1;
                    end
                    3'd3: begin
                      Set_Addr_To = aZI;
                      Inc_PC      = '1;
                      LDW         = '1;
                    end
                    3'd4: begin
                      Set_BusA_To[2:0] = 3'b101; // L
                      Read_To_Reg      = '1;
                      Inc_WZ           = '1;
                      Set_Addr_To      = aZI;
                    end
                    3'd5: begin
                      Set_BusA_To[2:0] = 3'b100; // H
                      Read_To_Reg      = '1;
                    end
                  endcase // case (MCycle)
                end
              endcase // case (IRB[4:3])
            end else begin
              // RET cc
              MCycles = 3'b011;
              case (MCycle)
                3'd1: begin
                  if (is_cc_true(F, IR[5:3])) begin
                    Set_Addr_To = aSP;
                  end else begin
                    MCycles = 3'b001;
                  end
                  TStates = 3'b101;
                end
                3'd2: begin
                  IncDec_16   = 4'b0111;
                  Set_Addr_To = aSP;
                  LDZ         = '1;
                end
                3'd3: begin
                  Jump      = '1;
                  IncDec_16 = 4'b0111;
                end
              endcase
            end // else: !if(IR[5] && Mode == 3)
          end // case: 8'b11000000, 8'b11001000, 8'b11010000, 8'b11011000,...
          8'b11000111, 8'b11001111, 8'b11010111, 8'b11011111,
          8'b11100111, 8'b11101111, 8'b11110111, 8'b11111111: begin
            // RST p
            MCycles = 3'b011;
            case (MCycle)
              3'd1: begin
                TStates     = 3'b101;
                IncDec_16   = '1;
                Set_Addr_To = aSP;
                Set_BusB_To = 4'b1101;
              end
              3'd2: begin
                Write       = '1;
                IncDec_16   = '1;
                Set_Addr_To = aSP;
                Set_BusB_To = 4'b1100;
              end
              3'd3: begin
                Write = '1;
                RstP  = '1;
              end
            endcase // case (MCycle)
          end // case: 8'b11000111, 8'b11001111, 8'b11010111, 8'b11011111,...
          // INPUT AND OUTPUT GROUP
          8'b11011011: begin
            if (Mode != 3) begin
              // IN A,(n)
              MCycles = 3'b011;
              case (MCycle)
                3'd2: begin
                  Inc_PC      = '1;
                  Set_Addr_To = aIOA;
                end
                3'd3: begin
                  Read_To_Acc = '1;
                  IORQ        = '1;
                end
              endcase // case (MCycle)
            end // if (Mode != 3)
          end // case: 8'b11011011
          8'b11010011: begin
            if (Mode != 3) begin
              // OUT (n),A
              MCycles = 3'b011;
              case (MCycle)
                3'd2: begin
                  Inc_PC      = '1;
                  Set_Addr_To = aIOA;
                  Set_BusB_To = 4'b0111;
                end
                3'd3: begin
                  Write = '1;
                  IORQ  = '1;
                end
              endcase
            end // if (Mode != 3)
          end // case: 8'b11010011

          //////////////////////////////////////////////////////////////////////
          //////////////////////////////////////////////////////////////////////
          // MULTIBYTE INSTRUCTIONS
          //////////////////////////////////////////////////////////////////////
          //////////////////////////////////////////////////////////////////////
          8'b11001011: if (Mode != 2) Prefix = 2'b01;
          8'b11101101: if (Mode < 2)  Prefix = 2'b10;
          8'b11011101, 8'b11111101: if (Mode < 2) Prefix = '1;
        endcase // case (IRB)
      end // case: 2'b00
      2'b01: begin
        ////////////////////////////////////////////////////////////////////////
        //
        //	CB prefixed instructions
        //
        ////////////////////////////////////////////////////////////////////////
        Set_BusA_To[2:0] = IR[2:0];
        Set_BusB_To[2:0] = IR[2:0];

        case (IRB)
          8'b00000000, 8'b00000001, 8'b00000010, 8'b00000011,
          8'b00000100, 8'b00000101, 8'b00000111, 8'b00010000,
          8'b00010001, 8'b00010010, 8'b00010011, 8'b00010100,
          8'b00010101, 8'b00010111, 8'b00001000, 8'b00001001,
          8'b00001010, 8'b00001011, 8'b00001100, 8'b00001101,
          8'b00001111, 8'b00011000, 8'b00011001, 8'b00011010,
          8'b00011011, 8'b00011100, 8'b00011101, 8'b00011111,
          8'b00100000, 8'b00100001, 8'b00100010, 8'b00100011,
          8'b00100100, 8'b00100101, 8'b00100111, 8'b00101000,
          8'b00101001, 8'b00101010, 8'b00101011, 8'b00101100,
          8'b00101101, 8'b00101111, 8'b00110000, 8'b00110001,
          8'b00110010, 8'b00110011, 8'b00110100, 8'b00110101,
          8'b00110111, 8'b00111000, 8'b00111001, 8'b00111010,
          8'b00111011, 8'b00111100, 8'b00111101, 8'b00111111: begin
            // RLC r
            // RL r
            // RRC r
            // RR r
            // SLA r
            // SRA r
            // SRL r
            // SLL r (Undocumented) / SWAP r
            if (XY_State == 2'b00) begin
              if (MCycle == 3'b001) begin
                ALU_Op      = 4'b1000;
                Read_To_Reg = '1;
                Save_ALU    = '1;
              end
            end else begin
              // R/S (IX+d),Reg, undocumented
              MCycles     = 3'b011;
              XYbit_undoc = '1;
              case (MCycle)
                3'd1, 3'd7: Set_Addr_To = aXY;
                3'd2: begin
                  ALU_Op      = 4'b1000;
                  Read_To_Reg = '1;
                  Save_ALU    = '1;
                  Set_Addr_To = aXY;
                  TStates     = 3'b100;
                end
                3'd3: Write = '1;
              endcase
            end // else: !if(XY_State == 2'b00)
          end // case: 8'b00000000, 8'b00000001, 8'b00000010, 8'b00000011,...
          8'b00000110, 8'b00010110, 8'b00001110, 8'b00011110,
          8'b00101110, 8'b00111110, 8'b00100110, 8'b00110110: begin
            // RLC (HL)
            // RL (HL)
            // RRC (HL)
            // RR (HL)
            // SRA (HL)
            // SRL (HL)
            // SLA (HL)
            // SLL (HL) (Undocumented) / SWAP (HL)
            MCycles = 3'b011;
            case (MCycle)
              3'd1, 3'd7: Set_Addr_To = aXY;
              3'd2: begin
                ALU_Op      = 4'b1000;
                Read_To_Reg = '1;
                Save_ALU    = '1;
                Set_Addr_To = aXY;
                TStates     = 3'b100;
              end
              3'd3: Write = '1;
            endcase // case (MCycle)
          end // case: 8'b00000110, 8'b00010110, 8'b00001110, 8'b00011110,...
          8'b01000000, 8'b01000001, 8'b01000010, 8'b01000011,
          8'b01000100, 8'b01000101, 8'b01000111, 8'b01001000,
          8'b01001001, 8'b01001010, 8'b01001011, 8'b01001100,
          8'b01001101, 8'b01001111, 8'b01010000, 8'b01010001,
          8'b01010010, 8'b01010011, 8'b01010100, 8'b01010101,
          8'b01010111, 8'b01011000, 8'b01011001, 8'b01011010,
          8'b01011011, 8'b01011100, 8'b01011101, 8'b01011111,
          8'b01100000, 8'b01100001, 8'b01100010, 8'b01100011,
          8'b01100100, 8'b01100101, 8'b01100111, 8'b01101000,
          8'b01101001, 8'b01101010, 8'b01101011, 8'b01101100,
          8'b01101101, 8'b01101111, 8'b01110000, 8'b01110001,
          8'b01110010, 8'b01110011, 8'b01110100, 8'b01110101,
          8'b01110111, 8'b01111000, 8'b01111001, 8'b01111010,
          8'b01111011, 8'b01111100, 8'b01111101, 8'b01111111: begin
            // BIT b,r
            if (XY_State == 2'b00) begin
              if (MCycle == 3'b001) begin
                Set_BusB_To[2:0] = IR[2:0];
                ALU_Op           = 4'b1001;
              end
            end else begin
              // BIT b,(IX+d), undocumented
              MCycles     = 3'b010;
              XYbit_undoc = '1;
              case (MCycle)
                3'd1, 3'd7: Set_Addr_To = aXY;
                3'd2: begin
                  ALU_Op  = 4'b1001;
                  TStates = 3'b100;
                end
              endcase
            end // else: !if(XY_State == 2'b00)
          end // case: 8'b01000000, 8'b01000001, 8'b01000010, 8'b01000011,...
          8'b01000110, 8'b01001110, 8'b01010110, 8'b01011110,
          8'b01100110, 8'b01101110, 8'b01110110, 8'b01111110: begin
            // BIT b,(HL)
            MCycles = 3'b010;
            case (MCycle)
              3'd1, 3'd7: Set_Addr_To = aXY;
              3'd2: begin
                ALU_Op  = 4'b1001;
                TStates = 3'b100;
              end
            endcase // case (MCycle)
          end // case: 8'b01000110, 8'b01001110, 8'b01010110, 8'b01011110,...
          8'b11000000, 8'b11000001, 8'b11000010, 8'b11000011,
          8'b11000100, 8'b11000101, 8'b11000111, 8'b11001000,
          8'b11001001, 8'b11001010, 8'b11001011, 8'b11001100,
          8'b11001101, 8'b11001111, 8'b11010000, 8'b11010001,
          8'b11010010, 8'b11010011, 8'b11010100, 8'b11010101,
          8'b11010111, 8'b11011000, 8'b11011001, 8'b11011010,
          8'b11011011, 8'b11011100, 8'b11011101, 8'b11011111,
          8'b11100000, 8'b11100001, 8'b11100010, 8'b11100011,
          8'b11100100, 8'b11100101, 8'b11100111, 8'b11101000,
          8'b11101001, 8'b11101010, 8'b11101011, 8'b11101100,
          8'b11101101, 8'b11101111, 8'b11110000, 8'b11110001,
          8'b11110010, 8'b11110011, 8'b11110100, 8'b11110101,
          8'b11110111, 8'b11111000, 8'b11111001, 8'b11111010,
          8'b11111011, 8'b11111100, 8'b11111101, 8'b11111111: begin
            // SET b,r
            if (XY_State == 2'b00) begin
              if (MCycle == 3'b001) begin
                ALU_Op      = 4'b1010;
                Read_To_Reg = '1;
                Save_ALU    = '1;
              end
            end else begin
              // SET b,(IX+d),Reg, undocumented
              MCycles     = 3'b011;
              XYbit_undoc = '1;
              case (MCycle)
                3'd1, 3'd7: Set_Addr_To = aXY;
                3'd2: begin
                  ALU_Op      = 4'b1010;
                  Read_To_Reg = '1;
                  Save_ALU    = '1;
                  Set_Addr_To = aXY;
                  TStates     = 3'b100;
                end
                3'd3: Write = '1;
              endcase // case (MCycle)
            end
          end // case: 8'b11000000, 8'b11000001, 8'b11000010, 8'b11000011,...
          8'b11000110, 8'b11001110, 8'b11010110, 8'b11011110,
          8'b11100110, 8'b11101110, 8'b11110110, 8'b11111110: begin
            // SET b,(HL)
            MCycles = 3'b011;
            case (MCycle)
              3'd1, 3'd7: Set_Addr_To = aXY;
              3'd2: begin
                ALU_Op      = 4'b1010;
                Read_To_Reg = '1;
                Save_ALU    = '1;
                Set_Addr_To = aXY;
                TStates     = 3'b100;
              end
              3'd3: Write = '1;
            endcase // case (MCycle)
          end // case: 8'b11000110, 8'b11001110, 8'b11010110, 8'b11011110,...
          8'b10000000, 8'b10000001, 8'b10000010, 8'b10000011,
          8'b10000100, 8'b10000101, 8'b10000111, 8'b10001000,
          8'b10001001, 8'b10001010, 8'b10001011, 8'b10001100,
          8'b10001101, 8'b10001111, 8'b10010000, 8'b10010001,
          8'b10010010, 8'b10010011, 8'b10010100, 8'b10010101,
          8'b10010111, 8'b10011000, 8'b10011001, 8'b10011010,
          8'b10011011, 8'b10011100, 8'b10011101, 8'b10011111,
          8'b10100000, 8'b10100001, 8'b10100010, 8'b10100011,
          8'b10100100, 8'b10100101, 8'b10100111, 8'b10101000,
          8'b10101001, 8'b10101010, 8'b10101011, 8'b10101100,
          8'b10101101, 8'b10101111, 8'b10110000, 8'b10110001,
          8'b10110010, 8'b10110011, 8'b10110100, 8'b10110101,
          8'b10110111, 8'b10111000, 8'b10111001, 8'b10111010,
          8'b10111011, 8'b10111100, 8'b10111101, 8'b10111111: begin
            // RES b,r
            if (XY_State == 2'b00) begin
              if (MCycle == 3'b001) begin
                ALU_Op      = 4'b1011;
                Read_To_Reg = '1;
                Save_ALU    = '1;
              end
            end else begin
              // RES b,(IX+d),Reg, undocumented
              MCycles     = 3'b011;
              XYbit_undoc = '1;
              case (MCycle)
                3'd1, 3'd7: Set_Addr_To = aXY;
                3'd2: begin
                  ALU_Op      = 4'b1011;
                  Read_To_Reg = '1;
                  Save_ALU    = '1;
                  Set_Addr_To = aXY;
                  TStates     = 3'b100;
                end
                3'd3: Write = '1;
              endcase
            end // else: !if(XY_State == 2'b00)
          end // case: 8'b10000000, 8'b10000001, 8'b10000010, 8'b10000011,...
          8'b10000110, 8'b10001110, 8'b10010110, 8'b10011110,
          8'b10100110, 8'b10101110, 8'b10110110, 8'b10111110: begin
            // RES b,(HL)
            MCycles = 3'b011;
            case (MCycle)
              3'd1, 3'd7: Set_Addr_To = aXY;
              3'd2: begin
                ALU_Op      = 4'b1011;
                Read_To_Reg = '1;
                Save_ALU    = '1;
                Set_Addr_To = aXY;
                TStates     = 3'b100;
              end
              3'd3: Write = '1;
            endcase
          end // case: 8'b10000110, 8'b10001110, 8'b10010110, 8'b10011110,...
        endcase // case (IRB)
      end // case: 2'b01

      default: begin

        //////////////////////////////////////////////////////////////////////
        //
        //	ED prefixed instructions
        //
        //////////////////////////////////////////////////////////////////////

        case (IRB)
          8'b00000000, 8'b00000001, 8'b00000010, 8'b00000011,
          8'b00000100, 8'b00000101, 8'b00000110, 8'b00000111,
          8'b00001000, 8'b00001001, 8'b00001010, 8'b00001011,
          8'b00001100, 8'b00001101, 8'b00001110, 8'b00001111,
          8'b00010000, 8'b00010001, 8'b00010010, 8'b00010011,
          8'b00010100, 8'b00010101, 8'b00010110, 8'b00010111,
          8'b00011000, 8'b00011001, 8'b00011010, 8'b00011011,
          8'b00011100, 8'b00011101, 8'b00011110, 8'b00011111,
          8'b00100000, 8'b00100001, 8'b00100010, 8'b00100011,
          8'b00100100, 8'b00100101, 8'b00100110, 8'b00100111,
          8'b00101000, 8'b00101001, 8'b00101010, 8'b00101011,
          8'b00101100, 8'b00101101, 8'b00101110, 8'b00101111,
          8'b00110000, 8'b00110001, 8'b00110010, 8'b00110011,
          8'b00110100, 8'b00110101, 8'b00110110, 8'b00110111,
          8'b00111000, 8'b00111001, 8'b00111010, 8'b00111011,
          8'b00111100, 8'b00111101, 8'b00111110, 8'b00111111,
          8'b10000000, 8'b10000001, 8'b10000010, 8'b10000011,
          8'b10000100, 8'b10000101, 8'b10000110, 8'b10000111,
          8'b10001000, 8'b10001001, 8'b10001010, 8'b10001011,
          8'b10001100, 8'b10001101, 8'b10001110, 8'b10001111,
          8'b10010000, 8'b10010001, 8'b10010010, 8'b10010011,
          8'b10010100, 8'b10010101, 8'b10010110, 8'b10010111,
          8'b10011000, 8'b10011001, 8'b10011010, 8'b10011011,
          8'b10011100, 8'b10011101, 8'b10011110, 8'b10011111,
          8'b10100100, 8'b10100101, 8'b10100110, 8'b10100111,
          8'b10101100, 8'b10101101, 8'b10101110, 8'b10101111,
          8'b10110100, 8'b10110101, 8'b10110110, 8'b10110111,
          8'b10111100, 8'b10111101, 8'b10111110, 8'b10111111,
          8'b11000000, 8'b11000001, 8'b11000010, 8'b11000011,
          8'b11000100, 8'b11000101, 8'b11000110, 8'b11000111,
          8'b11001000, 8'b11001001, 8'b11001010, 8'b11001011,
          8'b11001100, 8'b11001101, 8'b11001110, 8'b11001111,
          8'b11010000, 8'b11010001, 8'b11010010, 8'b11010011,
          8'b11010100, 8'b11010101, 8'b11010110, 8'b11010111,
          8'b11011000, 8'b11011001, 8'b11011010, 8'b11011011,
          8'b11011100, 8'b11011101, 8'b11011110, 8'b11011111,
          8'b11100000, 8'b11100001, 8'b11100010, 8'b11100011,
          8'b11100100, 8'b11100101, 8'b11100110, 8'b11100111,
          8'b11101000, 8'b11101001, 8'b11101010, 8'b11101011,
          8'b11101100, 8'b11101101, 8'b11101110, 8'b11101111,
          8'b11110000, 8'b11110001, 8'b11110010, 8'b11110011,
          8'b11110100, 8'b11110101, 8'b11110110, 8'b11110111,
          8'b11111000, 8'b11111001, 8'b11111010, 8'b11111011,
          8'b11111100, 8'b11111101, 8'b11111110, 8'b11111111: begin end
          // NOP, undocumented
          8'b01111110, 8'b01111111: begin end // NOP, undocumented
          // 8 BIT LOAD GROUP
          8'b01010111: begin
            // LD A,I
            Special_LD = 3'b100;
            TStates    = 3'b101;
          end
          8'b01011111: begin
            // LD A,R
            Special_LD = 3'b101;
            TStates    = 3'b101;
          end
          8'b01000111: begin
            // LD I,A
            Special_LD = 3'b110;
            TStates    = 3'b101;
          end
          8'b01001111: begin
            // LD R,A
            Special_LD = 3'b111;
            TStates    = 3'b101;
          end
          // 16 BIT LOAD GROUP
          8'b01001011, 8'b01011011, 8'b01101011, 8'b01111011: begin
            // LD dd,(nn)
            MCycles = 3'b101;
            case (MCycle)
              3'd2: begin
                Inc_PC = '1;
                LDZ    = '1;
              end
              3'd3: begin
                Set_Addr_To = aZI;
                Inc_PC      = '1;
                LDW         = '1;
              end
              3'd4: begin
                Read_To_Reg = '1;
                if (IR[5:4] == 2'b11) begin
                  Set_BusA_To = 4'b1000;
                end else begin
                  Set_BusA_To[2:1] = IR[5:4];
                  Set_BusA_To[0]   = '1;
                end
                Inc_WZ      = '1;
                Set_Addr_To = aZI;
              end
              3'd5: begin
                Read_To_Reg = '1;
                if (IR[5:4] == 2'b11) begin
                  Set_BusA_To = 4'b1001;
                end else begin
                  Set_BusA_To[2:1] = IR[5:4];
                  Set_BusA_To[0]   = '0;
                end
              end
            endcase // case (MCycle)
          end // case: 8'b01001011, 8'b01011011, 8'b01101011, 8'b01111011
          8'b01000011, 8'b01010011, 8'b01100011, 8'b01110011: begin
            // LD (nn),dd
            MCycles = 3'b101;
            case (MCycle)
              3'd2: begin
                Inc_PC = '1;
                LDZ    = '1;
              end
              3'd3: begin
                Set_Addr_To = aZI;
                Inc_PC      = '1;
                LDW         = '1;
                if (IR[5:4] == 2'b11) begin
                  Set_BusB_To = 4'b1000;
                end else begin
                  Set_BusB_To[2:1] = IR[5:4];
                  Set_BusB_To[0]   = '1;
                  Set_BusB_To[3]   = '0;
                end
              end
              3'd4: begin
                Inc_WZ      = '1;
                Set_Addr_To = aZI;
                Write       = '1;
                if (IR[5:4] == 2'b11) begin
                  Set_BusB_To = 4'b1001;
                end else begin
                  Set_BusB_To[2:1] = IR[5:4];
                  Set_BusB_To[0] = '0;
                  Set_BusB_To[3] = '0;
                end
              end // case: 4
              3'd5: Write = '1;
            endcase // case (MCycle)
          end // case: 8'b01000011, 8'b01010011, 8'b01100011, 8'b01110011
          8'b10100000, 8'b10101000, 8'b10110000, 8'b10111000: begin
            // LDI, LDD, LDIR, LDDR
            MCycles = 3'b100;
            case (MCycle)
              3'd1: begin
                Set_Addr_To = aXY;
                IncDec_16   = 4'b1100; // BC
              end
              3'd2: begin
                Set_BusB_To      = 4'b0110;
                Set_BusA_To[2:0] = 3'b111;
                ALU_Op           = 4'b0000;
                Set_Addr_To      = aDE;
                if (~IR[3]) IncDec_16 = 4'b0110; // IX
                else        IncDec_16 = 4'b1110;
              end
              3'd3: begin
                I_BT    = '1;
                TStates = 3'b101;
                Write   = '1;
                if (~IR[3]) IncDec_16 = 4'b0101; // DE
                else        IncDec_16 = 4'b1101;
              end
              3'd4: begin
                NoRead  = '1;
                TStates = 3'b101;
              end
            endcase // case (MCycle)
          end // case: 8'b10100000, 8'b10101000, 8'b10110000, 8'b10111000
          8'b10100001, 8'b10101001, 8'b10110001, 8'b10111001: begin
            // CPI, CPD, CPIR, CPDR
            MCycles = 3'b100;
            case (MCycle)
              3'd1: begin
                Set_Addr_To = aXY;
                IncDec_16   = 4'b1100; // BC
              end
              3'd2: begin
                Set_BusB_To      = 4'b0110;
                Set_BusA_To[2:0] = 3'b111;
                ALU_Op           = 4'b0111;
                Save_ALU         = '1;
                PreserveC        = '1;
                if (~IR[3]) IncDec_16 = 4'b0110;
                else        IncDec_16 = 4'b1110;
              end
              3'd3: begin
                NoRead  = '1;
                I_BC    = '1;
                TStates = 3'b101;
              end
              3'd4: begin
                NoRead  = '1;
                TStates = 3'b101;
              end
            endcase // case (MCycle)
          end // case: 8'b10100001, 8'b10101001, 8'b10110001, 8'b10111001
          8'b01000100, 8'b01001100, 8'b01010100, 8'b01011100,
          8'b01100100, 8'b01101100, 8'b01110100, 8'b01111100: begin
            // NEG
            ALU_Op      = 4'b0010;
            Set_BusB_To = 4'b0111;
            Set_BusA_To = 4'b1010;
            Read_To_Acc = '1;
            Save_ALU    = '1;
          end
          8'b01000110, 8'b01001110, 8'b01100110, 8'b01101110: begin
            // IM 0
            IMode = 2'b00;
          end
          8'b01010110, 8'b01110110: begin
            // IM 1
            IMode = 2'b01;
          end
          8'b01011110, 8'b01110111: begin
            // IM 2
            IMode = 2'b10;
          end
          // 16 bit arithmetic
          8'b01001010, 8'b01011010, 8'b01101010, 8'b01111010: begin
            // ADC HL,ss
            MCycles = 3'b011;
            case (MCycle)
              3'd2: begin
                NoRead           = '1;
                ALU_Op           = 4'b0001;
                Read_To_Reg      = '1;
                Save_ALU         = '1;
                Set_BusA_To[2:0] = 3'b101;
                case (IR[5:4])
                  2'd0, 2'd1, 2'd2: begin
                    Set_BusB_To[2:1] = IR[5:4];
                    Set_BusB_To[0] = '1;
                  end
                  default: Set_BusB_To = 4'b1000;
                endcase
                TStates = 3'b100;
                SetWZ   = 2'b11;
              end
              3'd3: begin
                NoRead           = '1;
                Read_To_Reg      = '1;
                Save_ALU         = '1;
                ALU_Op           = 4'b0001;
                Set_BusA_To[2:0] = 3'b100;
                case (IR[5:4])
                  2'd0, 2'd1, 2'd2: begin
                    Set_BusB_To[2:1] = IR[5:4];
                    Set_BusB_To[0]   = '0;
                  end
                  default: Set_BusB_To = 4'b1001;
                endcase
              end // case: 3
            endcase // case (MCycle)
          end // case: 8'b01001010, 8'b01011010, 8'b01101010, 8'b01111010
          8'b01000010, 8'b01010010, 8'b01100010, 8'b01110010: begin
            // SBC HL,ss
            MCycles = 3'b011;
            case (MCycle)
              3'd2: begin
                NoRead           = '1;
                ALU_Op           = 4'b0011;
                Read_To_Reg      = '1;
                Save_ALU         = '1;
                Set_BusA_To[2:0] = 3'b101;
                case (IR[5:4])
                  2'd0, 2'd1, 2'd2: begin
                    Set_BusB_To[2:1] = IR[5:4];
                    Set_BusB_To[0]   = '1;
                  end
                  default: Set_BusB_To = 4'b1000;
                endcase
                TStates = 3'b100;
                SetWZ   = 2'b11;
              end
              3'd3: begin
                NoRead           = '1;
                ALU_Op           = 4'b0011;
                Read_To_Reg      = '1;
                Save_ALU         = '1;
                Set_BusA_To[2:0] = 3'b100;
                case (IR[5:4])
                  2'd0, 2'd1, 2'd2: Set_BusB_To[2:1] = IR[5:4];
                  default: Set_BusB_To = 4'b1001;
                endcase // case (IR[5:4])
              end // case: 3
            endcase // case (MCycle)
          end // case: 8'b01000010, 8'b01010010, 8'b01100010, 8'b01110010
          8'b01101111: begin
            // RLD // Read in M2, not M3! fixed by Sorgelig
            MCycles = 3'b100;
            case (MCycle)
              3'd1: Set_Addr_To = aXY;
              3'd2: begin
                Read_To_Reg      = '1;
                Set_BusB_To[2:0] = 3'b110;
                Set_BusA_To[2:0] = 3'b111;
                ALU_Op           = 4'b1101;
                Save_ALU         = '1;
              end
              3'd3: begin
                TStates     = 3'b100;
                I_RLD       = '1;
                NoRead      = '1;
                Set_Addr_To = aXY;
              end
              3'd4: Write = '1;
            endcase // case (MCycle)
          end
          8'b01100111: begin
            // RRD // Read in M2, not M3! fixed by Sorgelig
            MCycles = 3'b100;
            case (MCycle)
              3'd1: Set_Addr_To = aXY;
              3'd2: begin
                Read_To_Reg      = '1;
                Set_BusB_To[2:0] = 3'b110;
                Set_BusA_To[2:0] = 3'b111;
                ALU_Op           = 4'b1110;
                Save_ALU         = '1;
              end
              3'd3: begin
                TStates     = 3'b100;
                I_RRD       = '1;
                NoRead      = '1;
                Set_Addr_To = aXY;
              end
              3'd4: Write = '1;
            endcase
          end // case: 8'b01100111
          8'b01000101, 8'b01001101, 8'b01010101, 8'b01011101,
          8'b01100101, 8'b01101101, 8'b01110101, 8'b01111101: begin
            // RETI/RETN
            MCycles = 3'b011;
            case (MCycle)
              3'd1: Set_Addr_To = aSP;
              3'd2: begin
                IncDec_16   = 4'b0111;
                Set_Addr_To = aSP;
                LDZ         = '1;
              end
              3'd3: begin
                Jump      = '1;
                IncDec_16 = 4'b0111;
                LDW       = '1;
                I_RETN    = '1;
              end
            endcase // case (MCycle)
          end // case: 8'b01000101, 8'b01001101, 8'b01010101, 8'b01011101,...
          8'b01000000, 8'b01001000, 8'b01010000, 8'b01011000,
          8'b01100000, 8'b01101000, 8'b01110000, 8'b01111000: begin
            // IN r,(C)
            MCycles = 3'b010;
            case (MCycle)
              3'd1: begin
                Set_Addr_To = aBC;
                SetWZ       = 2'b01;
              end
              3'd2: begin
                IORQ = '1;
                if (IR[5:3] != 3'b110) begin
                  Read_To_Reg = '1;
                  Set_BusA_To[2:0] = IR[5:3];
                end
                I_INRC = '1;
              end
            endcase // case (MCycle)
          end // case: 8'b01000000, 8'b01001000, 8'b01010000, 8'b01011000,...
          8'b01000001, 8'b01001001, 8'b01010001, 8'b01011001,
          8'b01100001, 8'b01101001, 8'b01110001, 8'b01111001: begin
            // OUT (C),r
            // OUT (C),0
            MCycles = 3'b010;
            case (MCycle)
              3'd1: begin
                Set_Addr_To      = aBC;
                SetWZ            = 2'b01;
                Set_BusB_To[2:0] = IR[5:3];
                if (IR[5:3] == 3'b110) Set_BusB_To[3] = '1;
              end
              3'd2: begin
                Write = '1;
                IORQ  = '1;
              end
            endcase // case (MCycle)
          end // case: 8'b01000001, 8'b01001001, 8'b01010001, 8'b01011001,...
          8'b10100010, 8'b10101010, 8'b10110010, 8'b10111010: begin
            // INI, IND, INIR, INDR
            MCycles = 3'b100;
            case (MCycle)
              3'd1: begin
                TStates      = 3'b101;
                Set_Addr_To  = aBC;
                Set_BusB_To  = 4'b1010;
                Set_BusA_To  = 4'b0000;
                Read_To_Reg  = '1;
                Save_ALU     = '1;
                ALU_Op       = 4'b0010;
                SetWZ        = 2'b11;
                IncDec_16[3] = IR[3];
              end
              3'd2: begin
                IORQ        = '1;
                Set_BusB_To = 4'b0110;
                Set_Addr_To = aXY;
              end
              3'd3: begin
                if (~IR[3]) IncDec_16 = 4'b0110;
                else        IncDec_16 = 4'b1110;
                Write = '1;
                I_BTR = '1;
              end
              3'd4: begin
                NoRead  = '1;
                TStates = 3'b101;
              end
            endcase // case (MCycle)
          end // case: 8'b10100010, 8'b10101010, 8'b10110010, 8'b10111010
          8'b10100011, 8'b10101011, 8'b10110011, 8'b10111011: begin
            // OUTI, OUTD, OTIR, OTDR
            MCycles = 3'b100;
            case (MCycle)
              3'd1: begin
                TStates     = 3'b101;
                Set_Addr_To = aXY;
                Set_BusB_To = 4'b1010;
                Set_BusA_To = 4'b0000;
                Read_To_Reg = '1;
                Save_ALU    = '1;
                ALU_Op      = 4'b0010;
              end
              3'd2: begin
                Set_BusB_To  = 4'b0110;
                Set_Addr_To  = aBC;
                SetWZ        = 2'b11;
                IncDec_16[3] = IR[3];
              end
              3'd3: begin
                if (~IR[3]) IncDec_16 = 4'b0110;
                else        IncDec_16 = 4'b1110;
                IORQ  = '1;
                Write = '1;
                I_BTR = '1;
              end
              3'd4: begin
                NoRead  = '1;
                TStates = 3'b101;
              end
            endcase // case (MCycle)
          end // case: 8'b10100011, 8'b10101011, 8'b10110011, 8'b10111011
        endcase // case IRB
      end // case: default
    endcase // case (ISet)

    if (Mode == 1) begin
      if (MCycle == 3'b001) begin
        // TStates = 3'b100;
      end else begin
        TStates = 3'b011;
      end
    end

    if (Mode == 3) begin
      if (MCycle == 3'b001) begin
        // TStates = 3'b100;
      end else begin
        TStates = 3'b100;
      end
    end

    if (Mode < 2) begin
      if (MCycle == 3'b110) begin
        Inc_PC = '1;
        if (Mode == 1) begin
          Set_Addr_To      = aXY;
          TStates          = 3'b100;
          Set_BusB_To[2:0] = SSS;
          Set_BusB_To[3]   = '0;
        end
        if (IRB == 8'b00110110 || IRB == 8'b11001011) begin
          Set_Addr_To = aNone;
        end
      end
      if (MCycle == 3'b111) begin
        if (Mode == 0) begin
          TStates = 3'b101;
        end
        if (ISet != 2'b01) Set_Addr_To = aXY;
        Set_BusB_To[2:0] = SSS;
        Set_BusB_To[3] = '0;
        if ((IRB == 8'b00110110) || (ISet == 2'b01)) begin
          // LD (HL),n
          Inc_PC = '1;
        end else begin
          NoRead = '1;
        end
      end // if (MCycle = 3'b111)
    end // if (Mode < 2)
  end // always_comb
endmodule // T80_MCode
`default_nettype wire
