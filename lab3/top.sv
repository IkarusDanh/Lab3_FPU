/* verilator lint_off UNUSED */
module top (
    input clk_i,
    input logic [7:0] op_A, op_B,
    input logic sel_i,  //0 = add, 1 = sub
    output zero_detect,
    output [7:0] result
);
FPU Floating_Point_Unit (
    .*
);
endmodule
/* verilator lint_off UNUSED */
