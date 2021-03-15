`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:49 11/23/2020 
// Design Name: 
// Module Name:    decryption_regfile 
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
module decryption_regfile #(
			parameter addr_witdth = 8,
			parameter reg_width 	 = 16
		)(
			// Clock and reset interface
			input clk, 
			input rst_n,
			
			// Register access interface
			input[addr_witdth - 1:0] addr,
			input read,
			input write,
			input [reg_width -1 : 0] wdata,
			output reg [reg_width -1 : 0] rdata,
			output reg done,
			output reg error,
			
			// Output wires
			output reg[reg_width - 1 : 0] select,
			output reg[reg_width - 1 : 0] caesar_key,
			output reg[reg_width - 1 : 0] scytale_key,
			output reg[reg_width - 1 : 0] zigzag_key
    );

// TODO implementati bancul de registre.
reg [reg_width : 0] select_register, ceasar_key_register, scytale_key_register, zigzag_key_register;        //declar cei 4 registri in care voi pune valorea wdata data ca input

always@(posedge clk, negedge rst_n) begin
	                                                                                       // initializez cu 0 semnalul error
	if(rst_n == 0) begin                                                                               // reset-ul registrilor
		select_register <= 16'h00;
		ceasar_key_register <= 16'h00;
		scytale_key_register <= 16'hFFFF;
		zigzag_key_register <= 16'h2;
	end
	else if(write == 1) begin                                                                          // verific daca semnalul de write este valid
		case(addr)                                                                                 // si in functie de adresa pun input-ul in registrul corespunzator
			16'h00: begin
				select_register <= wdata;
				done <= 1;                                                                 // fac semnalul done valid pentru a marcha incheierea tranzactiei
			end
			16'h10: begin
				ceasar_key_register <= wdata;
				done <= 1;
			end
			16'h12: begin
				scytale_key_register <= wdata;
				done <= 1;
			end
			16'h14: begin
				zigzag_key_register <= wdata;
				done <= 1;
			end
			default: begin                                                                    // tratez cazul in care nu am o adresa valida
				error <= 1;
				done <= 1;
			end
		endcase
	end
		else if(read == 1) begin                                                                   // verific daca semnalul de read este valid
		case(addr)
			16'h00: begin                                                                      // si in functie de adresa pun in output valoarea registrului corespunzator
				rdata <= {14'b0, select_register[1:0]};
				done <= 1;                                                                 // fac semnalul done valid pentru a marcha incheierea tranzactiei
			end
			16'h10: begin
				rdata <= ceasar_key_register;
				done <= 1;
			end
			16'h12: begin
				rdata <= scytale_key_register;
				done <= 1;
			end
			16'h14: begin
				rdata <= zigzag_key_register;
				done <= 1;
			end
			default: begin                                                                      // tratez cazul in care nu am o adresa valida
				error <= 1;
				done <= 1;
			end
		endcase
	end
	else if (read == 0 && write == 0)  begin                                                            // tratez si cazul in care semnalele de read si write sunt amandoua pe 0
		done <= 0;
	end	
end

always @(*) begin                                                                                          // assignez valorile stocata in registri catre output-uri
	select = {14'b0, select_register[1:0]};                                                            // in cazul registrului select doar bitii [1:0] sunt importanti
	caesar_key = ceasar_key_register;
	scytale_key = scytale_key_register;
	zigzag_key = zigzag_key_register;
end
endmodule
