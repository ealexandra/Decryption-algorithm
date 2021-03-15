`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:53:30 11/26/2020 
// Design Name: 
// Module Name:    mux 
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
module mux #(
		parameter D_WIDTH = 8
	)(
		// Clock and reset interface
		input clk,
		input rst_n,
		
		//Select interface
		input[1:0] select,
		
		// Output interface
		output reg[D_WIDTH - 1 : 0] data_o,
		output reg						 valid_o,
				
		//output interfaces
		input [D_WIDTH - 1 : 0] 	data0_i,
		input   							valid0_i,
		
		input [D_WIDTH - 1 : 0] 	data1_i,
		input   							valid1_i,
		
		input [D_WIDTH - 1 : 0] 	data2_i,
		input     						valid2_i
    );
	
	//TODO: Implement MUX logic here


reg[7:0] state;
reg[7:0] next_state;
	 
reg[7:0] reg_aux;
	 
	 
	 always@(posedge clk, negedge rst_n) begin
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
			
			next_state= 8'h10;
		end
		
		8'h10: begin
			valid_o = 0;
			case(select)
				2'b0:begin
					if(valid0_i ==1) begin
						reg_aux = data0_i;
						next_state = 8'h20;
					end
				end
				2'b01:begin
					if(valid1_i == 1) begin
						reg_aux = data1_i;
						next_state = 8'h20;
					end
				end
				2'b10:begin
					if(valid2_i == 1) begin
						reg_aux = data2_i;
						next_state = 8'h20;
					end
				end
			endcase
			
		end
		
		8'h20: begin
			valid_o = 1;
			data_o = reg_aux;
			next_state = 8'h10;
		end
		
	endcase
end
endmodule
