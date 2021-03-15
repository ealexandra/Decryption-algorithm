`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:12 11/27/2020 
// Design Name: 
// Module Name:    scytale_decryption 
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
module scytale_decryption#(
			parameter D_WIDTH = 8, 
			parameter KEY_WIDTH = 8, 
			parameter MAX_NOF_CHARS = 50,
			parameter START_DECRYPTION_TOKEN = 8'hFA
		)(
			// Clock and reset interface
			input clk,
			input rst_n,
			
			// Input interface
			input[D_WIDTH - 1:0] data_i,
			input valid_i,
			
			// Decryption Key
			input[KEY_WIDTH - 1 : 0] key_N,
			input[KEY_WIDTH - 1 : 0] key_M,
			
			// Output interface
			output reg[D_WIDTH - 1:0] data_o,
			output reg valid_o,
			
			output reg busy
    );

// TODO: Implement Scytale Decryption here

reg i;
integer j, k;
reg [D_WIDTH - 1:0] array [49:0];                                      //vector cu 50 elemente pe 8 biti fiecare
reg busy_aux, valid_aux;                                               //valoare auxiliara pentru busy si valid_o
reg [D_WIDTH - 1:0] data_aux;                                          //valoare auxiliara pentru data_o

always @(posedge clk, negedge rst_n) begin                   
	if(rst_n == 0) begin                                               //in cazul in care se apasa pe butonul de reset se reinitializeaza semnalele cu 0                                 
		data_aux <= 0;
		valid_aux <= 0;
		busy_aux <= 0;
		i <= 0;
	end  
	else if(valid_i == 1 ) begin                                
			if (data_i != 8'hFA) begin                                   // punem intr-un vector input-urile atata timp cat semnalul valid_o este valid si                        
				array[i] <= data_i;                                       // nu am intalnit caracterul special care anunta sfarsitul transferului de date
				i <= i + 1;
				busy_aux <= 0;
				data_aux <= 0;
				valid_aux <= 0;
			end
			else begin
				busy_aux <= 1;                                            //daca am ajuns la caracterul special punem semnalul busy pe 1
				j <= 0;
				k <= 0;
			end
		 end  
	 else begin	                                                      //dupa ce s-a terminat transferul de date parcurgem vectorul si assignam 	
			if ( j < key_N ) begin                                      //output-ului iesirea corespunzatoare cu ajutorul a 2 indecsi
			   valid_aux <= 1;
				if ( k < key_N ) begin
					data_aux <= array[j + (k * key_N)];
					k <= k + 1;
				end
				else
					j <= j + 1;
					k <= 0;
			end
			else begin                                                  //dupa ce am terminat de parcurs vectorul si am terminat afisarea                                     
				valid_aux <= 0;                                          //punem semnalele pe 0
				busy_aux <= 0;
				i <= 0;
			end		
	 end	
	end
	
always @(*) begin                                                   //pun pe iesire valorile auxiliare din partea secventiala
	busy = busy_aux;
	data_o = data_aux;
	valid_o = valid_aux;
end

endmodule
