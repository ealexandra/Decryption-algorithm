`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:00 11/23/2020 
// Design Name: 
// Module Name:    demux 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module decryption_top#(
			parameter addr_witdth = 8,
			parameter reg_width 	 = 16,
			parameter MST_DWIDTH = 32,
			parameter SYS_DWIDTH = 8
		)(
		// Clock and reset interface
		input clk_sys,
		input clk_mst,
		input rst_n,
		
		// Input interface
		input [MST_DWIDTH -1 : 0] data_i,
		input 						  valid_i,
		output busy,
		
		//output interface
		output [SYS_DWIDTH - 1 : 0] data_o,
		output      					 valid_o,
		
		// Register access interface
		input[addr_witdth - 1:0] addr,
		input read,
		input write,
		input [reg_width - 1 : 0] wdata,
		output[reg_width - 1 : 0] rdata,
		output done,
		output error
		
    );
	
	wire busy_caesar;
	wire busy_scytale;
	wire busy_zigzag;
	
	wire[15:0] caesar_key;
	wire[15:0] scytale_key;
	wire[15:0] zigzag_key;
	
	wire[15:0] select;
	
	wire[7:0] data0_o_demux;
	wire[7:0] data1_o_demux;
	wire[7:0] data2_o_demux;
	wire valid0_o_demux;
	wire valid1_o_demux;
	wire valid2_o_demux;
	
	wire[7:0] data0_i_mux;
	wire[7:0] data1_i_mux;
	wire[7:0] data2_i_mux;
	wire valid0_i_mux;
	wire valid1_i_mux;
	wire valid2_i_mux;
	
	decryption_regfile register(clk_sys, rst_n, addr, read, write, wdata, rdata, done, error, select, caesar_key, scytale_key, zigzag_key);
	demux dmux(clk_sys, clk_mst, rst_n,select[1:0], data_i, valid_i, data0_o_demux, valid0_o_demux, data1_o_demux, valid1_o_demux, data2_o_demux, valid2_o_demux);
	caesar_decryption cae(clk_sys, rst_n, data0_o_demux, valid0_o_demux, caesar_key, data0_i_mux, valid0_i_mux, busy_caesar);
	scytale_decryption scy(clk_sys, rst_n, data1_o_demux, valid1_o_demux, scytale_key[7:0], scytale_key[15:8], data1_i_mux, valid1_i_mux, busy_scytale);
	zigzag_decryption zig(clk_sys, rst_n, data2_o_demux, valid2_o_demux, zigzag_key, data2_i_mux, valid2_i_mux, busy_zigzag);
	or(busy, busy_caesar, busy_scytale, busy_zigzag);
	mux mux_1(clk_sys, rst_n, select[1:0], data_o, valid_o, data0_i_mux, valid0_i_mux, data1_i_mux, valid1_i_mux, data2_i_mux, valid2_i_mux);
	
	
	
	// TODO: Add and connect all Decryption blocks
	

endmodule
