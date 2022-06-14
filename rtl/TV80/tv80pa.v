`timescale 1ps / 1ps
//
// TV80 8-Bit Microprocessor Core
// Based on the VHDL T80 core by Daniel Wallner (jesus@opencores.org)
//
// Copyright (c) 2004 Guy Hutchison (ghutchis@opencores.org)
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

module tv80pa (/*AUTOARG*/
  // Outputs
  m1_n, mreq_n, iorq_n, rd_n, wr_n, rfsh_n, halt_n, busak_n, A, dout,
  // Inputs
  reset_n, clk, cen_p, cen_n, wait_n, int_n, nmi_n, busrq_n, di
  );

  parameter Mode = 0;    // 0 => Z80, 1 => Fast Z80, 2 => 8080, 3 => GB
  parameter T2Write = 1; // 0 => wr_n active in T3, /=0 => wr_n active in T2
  parameter IOWait  = 1; // 0 => Single cycle I/O, 1 => Std I/O cycle


  input         reset_n;
  input         clk;
  input         cen_p;
  input         cen_n;
  input         wait_n;
  input         int_n;
  input         nmi_n;
  input         busrq_n;
  output        m1_n;
  output        mreq_n;
  output        iorq_n;
  output        rd_n;
  output        wr_n;
  output        rfsh_n;
  output        halt_n;
  output        busak_n;
  output reg [15:0] A;
  input [7:0]   di;
  output [7:0]  dout;

  reg           mreq_n;
  reg           iorq_n;
  reg           rd_n;
  reg           wr_n;

  reg           CEN_pol;
  wire          intcycle_n;
  wire          no_read;
  wire          write;
  wire          iorq;
  reg [7:0]     di_reg;
  wire [6:0]    mcycle;
  wire [6:0]    tstate;

  reg [1:0]     intcycled_n;
  wire [15:0]   A_int;
  reg [15:0]    A_last;

  tv80_core #(Mode, IOWait) i_tv80_core
    (
     .cen (cen_p && ~cen_pol),
     .m1_n (m1_n),
     .iorq (iorq),
     .no_read (no_read),
     .write (write),
     .rfsh_n (rfsh_n),
     .halt_n (halt_n),
     .wait_n (wait_n),
     .int_n (int_n),
     .nmi_n (nmi_n),
     .reset_n (reset_n),
     .busrq_n (busrq_n),
     .busak_n (busak_n),
     .clk (clk),
     .IntE (),
     .stop (),
     .A (A_int),
     .dinst (di),
     .di (di_reg),
     .dout (dout),
     .mc (mcycle),
     .ts (tstate),
     .intcycle_n (intcycle_n)
     );

always @(posedge clk) begin

  if (no_read==1'b0 || write==1'b1) begin
        A <= A_int;
  end
  else begin
    A <= A_last;
  end

  if (~reset_n) begin
    wr_n    <= 1'b1;
    rd_n    <= 1'b1;
    iorq_n  <= 1'b1;
    mreq_n  <= 1'b1;
    di_reg  <= 0;
    CEN_pol <= 1'b0;
  end
  else if (cen_p==1'b1 && CEN_pol==1'b0) begin
    CEN_pol <= 1'b1;
    if (mcycle=='b001) begin
      if (tstate==3'b010) begin
        iorq_n <= 1'b1;
        mreq_n <= 1'b1;
        rd_n   <= 1'b1;
      end
    end
    else begin
      if (tstate==3'b001 && iorq==1'b1) begin
        wr_n   <= ~write;
        rd_n   <= write;
        iorq_n <= 1'b0;
      end
    end
  end
  else if (cen_n==1'b1 && CEN_pol==1'b1) begin
    if (tstate==3'b010)
      CEN_pol <= ~wait_n;
    else
      CEN_pol <= 1'b0;
    if (tstate==3'b011 && busak_n==1'b1) di_reg <= di;
    if (mcycle==3'b001) begin
      if (tstate==3'b001) begin
        intcycled_n <= {intcycled_n[0],intcycle_n};
        rd_n   <= ~intcycle_n;
        mreq_n <= ~intcycle_n;
        iorq_n <= intcycled_n[1];
        A_last <= A_int;
      end
      if (tstate==3'b011) begin
        intcycled_n <= 2'b11;
        rd_n   <= 1'b1;
        mreq_n <= 1'b0;
      end
      if (tstate==3'b100) mreq_n <= 1'b1;
    end
    else begin
      if (no_read==1'b0 && iorq==1'b0) begin
        if (tstate==3'b001) begin
          rd_n   <= write;
          mreq_n <= 1'b0;
          A_last <= A_int;
        end
      end
      if (tstate==3'b010) wr_n <= ~write;
      if (tstate==3'b011) begin
        wr_n   <= 1'b1;
        rd_n   <= 1'b1;
        iorq_n <= 1'b1;
        mreq_n <= 1'b1;
      end
    end
  end // if (cen_n==1'b1 && CEN_pol==1'b1)
end // always @ (posedge clk)

endmodule
