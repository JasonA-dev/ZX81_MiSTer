//
// dpram.sv
//
// sdram controller implementation for the MiSTer board by
//
// Copyright (c) 2020 Frank Bruno
//
// This source file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This source file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

module dpram #(
    parameter DATAWIDTH = 8,
    parameter ADDRWIDTH = 14,
    parameter NUMWORDS = 12288,
    parameter MEM_INIT_FILE = ""        
) (
    // Port A
    input   wire                     clock,
    input   wire                     clocken0,    
    input   wire                     wren_a,
    input   wire    [ADDRWIDTH-1:0]  address_a,
    input   wire    [DATAWIDTH-1:0]  data_a,
    output  logic   [DATAWIDTH-1:0]  q_a,

    // Port B
    input   wire                     clock1,
    input   wire                     clocken1,    
    input   wire                     wren_b,
    input   wire    [ADDRWIDTH-1:0]  address_b,
    input   wire    [DATAWIDTH-1:0]  data_b,
    output  logic   [DATAWIDTH-1:0]  q_b
);

// Shared memory
logic [DATAWIDTH-1:0] mem [(2**ADDRWIDTH)-1:0];


initial begin
   // $display("Loading rom.");
   // $display(MEM_INIT_FILE);
    if (MEM_INIT_FILE>0)
        $readmemh(MEM_INIT_FILE, mem);
end


// Port A
always @(posedge clock) begin
    q_a      <= mem[address_a];
    if(wren_a) begin
        q_a      <= data_a;
        mem[address_a] <= data_a;
    end
end

// Port B
always @(posedge clock) begin
    q_b      <= mem[address_b];
    if(wren_b) begin
        q_b      <= data_b;
        mem[address_b] <= data_b;
    end
end

endmodule