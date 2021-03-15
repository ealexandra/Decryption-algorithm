`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:08 11/23/2020 
// Design Name: 
// Module Name:    ceasar_decryption 
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
module caesar_decryption#(
				parameter D_WIDTH = 8,
				parameter KEY_WIDTH = 16
			)(
			// Clock and reset interface
			input clk,
			input rst_n,
			
			// Input interface
			input[D_WIDTH - 1:0] data_i,
			input valid_i,
			
			// Decryption Key
			input[KEY_WIDTH - 1 : 0] key,
			
			// Output interface
			output reg[D_WIDTH - 1:0] data_o,
			output reg valid_o,
			output reg busy
    );

// TODO: Implement Caesar Decryption here

reg [D_WIDTH - 1:0] data_aux;                                                  //valoare auxiliara pentru data_o
reg valid_aux;                                                                 //valoare auxiliara pentru valid_o

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		data_aux <= 0;
		valid_aux <= 0;
	end 
	else if (valid_i) begin                                                 //atata timp cat semnalul valid_i este 1
		data_aux <= {8'b0,data_i} - key;                                //pun pe output valoarea decriptata 
		valid_aux <= 1;                                                 //semnalul valid_o trebuie sa fie validat 
	end  
	else begin                                                              //altfel output-urile vor fi 0
		data_aux <= 0;
		valid_aux <= 0;
	end
end 

always @(*) begin
	data_o = data_aux[D_WIDTH - 1:0];
	valid_o = valid_aux;
	busy = 0;                                                              //modulul are un semnal busy care este mereu pe 0
end
endmodule
