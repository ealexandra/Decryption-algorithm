`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   18:23:41 11/27/2020
// Design Name:   tester tema2
// Module Name:   tester
// Project Name:  tema2
// Target Device: ISim
// Tool versions: 14.7
// Description:   tester for homework 2: Decryption
////////////////////////////////////////////////////////////////////////////////
 
`define ADDR_WIDTH         8
`define REG_WIDTH         16
`define DATA_WIDTH        32  
`define MAX_ACCESSES    3000

`define SELECT_REG_ADDR         8'h0
`define CAESAR_KEY_REG_ADDR     8'h10
`define SCYTALE_KEY_REG_ADDR    8'h12
`define ZIGZAG_KEY_REG_ADDR     8'h14

module tester;

// Tester
reg clk_mst_reg;                                // master clock
reg clk_sys_reg;
reg rst_n_reg;

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file
integer passed_tests = 0;
integer i, j, k, index[2:0], timeout[2:0];
integer data_file;
reg mismatch;

integer nof_decryptions;

reg[`DATA_WIDTH/4 -1 : 0] input_data[`MAX_ACCESSES - 1 : 0];
reg[`REG_WIDTH - 1 : 0] register_input_data[`MAX_ACCESSES - 1 : 0];
reg[31:0] nof_data_in_aceess[`MAX_ACCESSES - 1 : 0];

reg[`REG_WIDTH - 1 : 0] ref_data[`MAX_ACCESSES:0], tst_data[`MAX_ACCESSES:0];
reg[`MAX_ACCESSES:0] transactions;
integer read_index;
integer data_index;
integer drive_index;
integer total_letters;

initial begin
    data_index = 0;
    total_letters = 0;
    data_file = $fopen("test.data", "r");
    if(!data_file) begin
        $write("error opening data file\n");
        $finish;
    end
    
    if($fscanf(data_file, "nof_decryptions = %d\n", nof_decryptions) != 1) begin
        $write("error reading nof_decryptions\n");
        $finish;
    end
    
    for(i = 0; i < nof_decryptions; i = i + 1) begin
        for(j = 0; j < 4; j = j + 1) 
            if($fscanf(data_file, "%d\n", register_input_data[4*i + j]) != 1) begin
                $write("error reading register_input_data for decryption number %d\n", i);
                $finish;
            end

        if($fscanf(data_file, "nof_data = %d\n", nof_data_in_aceess[i]) != 1) begin
            $write("error reading nof_data for decryption number %0d\n", i);
            $finish;
        end
        
        if(register_input_data[4*i] == 0)
            total_letters = total_letters + nof_data_in_aceess[i];
        else
            total_letters = total_letters + nof_data_in_aceess[i] - 1;

        for(j = 0; j < nof_data_in_aceess[i]; j = j + 1)
            if($fscanf(data_file, "%d\n", input_data[data_index + j]) != 1) begin
                $write("error reading input_data for decryption number %d\n", i);
                $finish;
            end
        data_index = data_index + nof_data_in_aceess[i];
    end
    
    data_index = 0;
    //$write("\n-----------INPUT FILE---------\n\n");
    /*for(i = 0; i < nof_decryptions; i = i + 1) begin
        //$write("Input Data:  %d\n", input_data[i]);
        $write("Registers data: ");
        for(j = 0; j < 4; j = j + 1)
            $write("%0d ", register_input_data[4*i+j]);
        $write("\n");
        $write("Input data: ");
        for(j = 0; j < nof_data_in_aceess[i]; j = j + 1)
            $write("%0d ", input_data[data_index + j]);
        $write("\n");
        data_index = data_index + nof_data_in_aceess[i];
    end
    */
    //$write("---------- END INPUT FILE--------\n");

    $fclose(data_file);

//----------------------------START OF TEST-------------------------
    // initialize inputs
    clk_mst_reg     = 0;
    clk_sys_reg     = 0;
    rst_n_reg       = 1;
    data_in_reg     = 0;
    valid_in_reg    = 0;
    address_reg     = 0;
    write_data_reg  = 0;
    read_reg        = 0;
    write_reg       = 0;
    read_index      = 0;
    
    repeat(5) @(posedge clk_mst);
    rst_n_reg = 0;
    
    repeat(2) @(posedge clk_mst);
    rst_n_reg = 1;
    
    repeat(5) @(posedge clk_mst);

    fork
        begin
            @(posedge clk_mst);         
            drive_instruction();
        end

        begin
            monitor_tst();
        end

        begin
            monitor_ref();
        end

    join
 
    repeat(10) @(posedge clk_mst);
    end_of_test_checks();

    if(passed_tests == nof_decryptions)
        $write("test ok\n");

    percentage = passed_tests * 1.0 / nof_decryptions;
    grade = passed_tests * 1.0 / nof_decryptions;

    // print results
    file = $fopen("result.tester");
    $fwrite(file, "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n", 1 * (grade - 1.0), passed_tests, nof_decryptions, 100.0 * percentage);
    $fclose(file);

    $finish;
end

// Instantiate the Unit Under Test (UUT)

// data interface
wire[`DATA_WIDTH - 1 : 0] data_in;
wire valid_in;
wire[`DATA_WIDTH/4 - 1 : 0] ref_data_out, tst_data_out;
wire ref_valid_out, tst_valid_out, ref_busy, tst_busy;

reg[`DATA_WIDTH - 1 : 0] data_in_reg;
reg valid_in_reg;

//register interface
wire[`ADDR_WIDTH - 1 : 0] address;
wire[`REG_WIDTH - 1 : 0] write_data, ref_read_data, tst_read_data;
wire read, write, ref_done, tst_done, ref_error, tst_error;

reg[`ADDR_WIDTH - 1 : 0] address_reg;
reg[`REG_WIDTH - 1 : 0] write_data_reg;
reg read_reg, write_reg;

ref_decryption_top ref(
    .clk_sys(clk_sys),
    .clk_mst(clk_mst),
    .rst_n(rst_n),
    .data_i(data_in),
    .valid_i(valid_in),
    .busy(ref_busy),
    .data_o(ref_data_out),
    .valid_o(ref_valid_out),
    .addr(address), 
    .read(read), 
    .write(write), 
    .wdata(write_data), 
    .rdata(ref_read_data), 
    .done(ref_done), 
    .error(ref_error)
);

decryption_top uut(
    .clk_sys(clk_sys),
    .clk_mst(clk_mst),
    .rst_n(rst_n),
    .data_i(data_in),
    .valid_i(valid_in),
    .busy(tst_busy),
    .data_o(tst_data_out),
    .valid_o(tst_valid_out),
    .addr(address), 
    .read(read), 
    .write(write), 
    .wdata(write_data), 
    .rdata(tst_read_data), 
    .done(tst_done), 
    .error(tst_error)
);
integer a;
task drive_instruction();
begin
    drive_index = 0;
    for(index[0] = 0; index[0] < nof_decryptions; index[0] = index[0] + 1) begin
        repeat(2)@(posedge clk_mst);
        wait_for_busy(timeout[0], 50, index[0]);

        // send registers configurations
        write_register(`SELECT_REG_ADDR,      register_input_data[4*index[0]], index[0]);
        write_register(`CAESAR_KEY_REG_ADDR,  register_input_data[4*index[0] + 1], index[0]);
        write_register(`SCYTALE_KEY_REG_ADDR, register_input_data[4*index[0] + 2], index[0]);
        write_register(`ZIGZAG_KEY_REG_ADDR,  register_input_data[4*index[0] + 3], index[0]);

        $write("Decryption %0d \n", index[0]);
        //$write("Registers values are: Select = %0d, Caesar = %0d, Scytale = %0d, Zigzag = %0d \n", ref.select, ref.caesar_key,
        //                                                                                        ref.scytale_key, ref.zigzag_key);
        $write("Testing data: ");

        for(i = 0; i < nof_data_in_aceess[index[0]]/4 ; i = i + 1) begin
            valid_in_reg = 1;
            data_in_reg = {input_data[drive_index + 4*i], input_data[drive_index + 4*i + 1], input_data[drive_index + 4*i + 2], 
                                                                                             input_data[drive_index + 4*i + 3]};
            $write("%0s ", data_in_reg);
            @(posedge clk_mst);
            valid_in_reg = 0;
            data_in_reg = 0;

            wait_for_busy(timeout[0], 50, index[0]);
        end
        if(nof_data_in_aceess[index[0]]%4 != 0) begin
            valid_in_reg = 1;
            case(nof_data_in_aceess[index[0]]%4)
                1: data_in_reg = {input_data[drive_index + 4*i], 24'd0};
                2: data_in_reg = {input_data[drive_index + 4*i], input_data[drive_index + 4*i + 1], 16'd0};
                3: data_in_reg = {input_data[drive_index + 4*i], input_data[drive_index + 4*i + 1], input_data[drive_index + 4*i + 2], 8'd0};
                default: begin end
            endcase
            $write("%0s ", data_in_reg);
            @(posedge clk_mst);
            valid_in_reg = 0;
            data_in_reg = 0; 
        end 
        $write("\n");

        drive_index = drive_index + nof_data_in_aceess[index[0]];
    end  
end
endtask

task monitor_ref();
begin
    for(index[1] = 0; index[1] < total_letters; index[1] = index[1] + 1) begin
        timeout[1] = 100;
        
        while(ref_valid_out === 0)
        begin
            timeout[1] = timeout[1] - 1;
            if(timeout[1] == 0)
            begin
                $display("[TIMEOUT]Reference Valid OUT was not asserted during 100cc\n");
                $finish;
            end
            @(posedge clk_sys);
        end

        ref_data[index[1]] = ref_data_out;

        @(posedge clk_sys);
    end    
end
endtask

task monitor_tst();
begin
    for(index[2] = 0; index[2] < total_letters; index[2] = index[2] + 1) begin
        timeout[2] = 100;
        
        while(tst_valid_out === 0)
        begin
            timeout[2] = timeout[2] - 1;
            if(timeout[2] == 0)
            begin
                $display("[TIMEOUT]UUT Valid OUT was not asserted during 100cc");
                $finish;
            end
            @(posedge clk_sys);
        end
        
        tst_data[index[2]] = tst_data_out;

        @(posedge clk_sys);
    end    
end
endtask

task end_of_test_checks();
begin
    data_index = 0;
    for(i = 0;  i < nof_decryptions; i = i + 1) begin
        if(register_input_data[4*i] != 0)
            nof_data_in_aceess[i] = nof_data_in_aceess[i] - 1;

        for(j = 0;  j < nof_data_in_aceess[i]; j = j + 1) begin
            if(ref_data[data_index + j] !== tst_data[data_index + j]) begin
                $write("[ERROR] MISMATCH for decryption %0d in position %0d.\n", i, j);
                $write("Expected Decryption: ");
                for(k = 0;  k < nof_data_in_aceess[i]; k = k + 1) begin
                    $write("%0s ", ref_data[data_index + k]);
                end
                $write("\n");
                $write("Received Decryption: ");
                for(k = 0;  k < nof_data_in_aceess[i]; k = k + 1) begin
                    $write("%0s ", tst_data[data_index + k]);
                end
                $write("\n");
                mismatch = 1;
                
                //force break
                j = nof_data_in_aceess[i];
            end
            else
                mismatch = 0;
        end
                    
        if(mismatch == 0) begin
            $write("[PASSED] Decryption %0d was done correctly: \n", i);
            for(k = 0;  k < nof_data_in_aceess[i]; k = k + 1) begin
                $write("%0s ", tst_data[data_index + k]);
            end
            $write("\n");
            passed_tests = passed_tests + 1;
        end       

        data_index = data_index + nof_data_in_aceess[i];
    end
end
endtask


task wait_for_busy(input integer counter, input integer value, input integer instr_nr);
begin
    counter = value;
    while(ref_busy === 1 || tst_busy === 1) begin
        counter = counter - 1;
        if(counter == 0)
        begin
            $display("[TIMEOUT]Decryption %0d timeout after %0dcc. Busy was kept high for more than %0dcc.", instr_nr, value, value);
            $finish;
        end
        @(posedge clk_mst);
    end
end
endtask

task write_register(input reg[`ADDR_WIDTH - 1 : 0] addr, input reg[`REG_WIDTH - 1 : 0] data, input integer access);
begin
    transactions[read_index] = 0;
    read_index = read_index + 1;

    @(posedge clk_mst);
    $write("Access %0d Writting address: 0x%x with value %0d\n", access, addr, data);
    address_reg = addr;
    write_reg = 1;
    write_data_reg = data;  

    @(posedge clk_mst);
    address_reg  = 0;
    write_reg = 0;
    write_data_reg = 0;

    wait(ref_done == 1 && tst_done == 1);
    
end
endtask


always #5 clk_sys_reg = !clk_sys_reg;
always begin 
	repeat(2) @(posedge clk_sys_reg); 
	clk_mst_reg = !clk_mst_reg;
end

assign clk_sys      = clk_sys_reg;
assign clk_mst      = clk_mst_reg;
assign rst_n        = rst_n_reg;
assign data_in      = data_in_reg;
assign valid_in     = valid_in_reg;
assign address      = address_reg;
assign write_data   = write_data_reg;
assign read         = read_reg;
assign write        = write_reg;

endmodule