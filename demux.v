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

module demux #(
		parameter MST_DWIDTH = 32,
		parameter SYS_DWIDTH = 8
	)(
		// Clock and reset interface
		input clk_sys,
		input clk_mst,
		input rst_n,
		
		//Select interface
		input[1:0] select,
		
		// Input interface
		input [MST_DWIDTH -1  : 0]	 data_i,
		input 						 	 valid_i,
		
		//output interfaces
		output reg [SYS_DWIDTH - 1 : 0] 	data0_o,
		output reg     						valid0_o,
		
		output reg [SYS_DWIDTH - 1 : 0] 	data1_o,
		output reg     						valid1_o,
		
		output reg [SYS_DWIDTH - 1 : 0] 	data2_o,
		output reg     						valid2_o
    );
	 
	 reg[7:0] state;
	 reg[7:0] next_state;
	 
	 reg[31:0] reg_aux;
	 
	 
	 always@(posedge clk_sys, negedge rst_n) begin
		if(rst_n == 0) begin
			state <= 8'h00;
		end
		else begin
			state <= next_state;
		end
	end

always @(*) begin
	case(state)
	
		8'h00: begin
			//resetare
			reg_aux = 0;
			valid0_o = 0;
			valid1_o = 0;
			valid2_o = 0;
			data0_o = 0;
			data1_o = 0;
			data2_o = 0;
			
			next_state= 8'h10;
		end
		
		8'h10: begin
			valid0_o = 0;
			valid1_o = 0;
			valid2_o = 0;
			
			if(valid_i == 1) begin
				reg_aux = data_i;
				next_state = 8'h20;
			end
			else begin
				next_state = 8'h10;
			end
		end
		
		8'h20: begin
			if(valid_i == 0) begin
				case (select)
					2'b0: begin
								data0_o = reg_aux[7:0];
								valid0_o = 1;
							end
					2'b01: begin
								data1_o = reg_aux[7:0];
								valid1_o = 1;
							end
					2'b10: begin
								data2_o = reg_aux[7:0];
								valid2_o = 1;
							end
				endcase
				next_state = 8'h21;
			end
			else begin
				next_state = 8'h20;
			end
		end
		
		8'h21: begin
				case (select)
					2'b0: begin
								data0_o = reg_aux[15:8];
								valid0_o = 1;
							end
					2'b01: begin
								data1_o = reg_aux[15:8];
								valid1_o = 1;
							end
					2'b10: begin
								data2_o = reg_aux[15:8];
								valid2_o = 1;
							end
				endcase
				next_state = 8'h22;
		 end
		 
		 8'h22: begin
				case (select)
					2'b0: begin
								data0_o = reg_aux[23:16];
								valid0_o = 1;
							end
					2'b01: begin
								data1_o = reg_aux[23:16];
								valid1_o = 1;
							end
					2'b10: begin
								data2_o = reg_aux[23:16];
								valid2_o = 1;
							end
				endcase
				next_state = 8'h23;
		 end
		 
		 8'h23: begin
				case (select)
					2'b0: begin
								data0_o = reg_aux[31:24];
								valid0_o = 1;
							end
					2'b01: begin
								data1_o = reg_aux[31:24];
								valid1_o = 1;
							end
					2'b10: begin
								data2_o = reg_aux[31:24];
								valid2_o = 1;
							end
				endcase
				next_state = 8'h10;
		 end
	endcase
	
end
	 
	
	

endmodule
