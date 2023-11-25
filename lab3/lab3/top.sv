/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */
module top (
    input clk_i,
    input logic [17:0] SW,
    output logic [17:0] LEDR,
	 output logic [7:0] LEDG 
);

assign LEDR[16:0] = SW[16:0] ;

FPU Floating_Point_Unit (
    .op_A        (SW[7:0]) , 
    .op_B        (SW[15:8]) ,
    .sel_i       (SW[16]) ,  //0 = add, 1 = sub
    .zero_detect (LEDR[17]) ,
    .result      (LEDG)
);
always @(posedge clk_i) begin
    
end
endmodule
/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */
