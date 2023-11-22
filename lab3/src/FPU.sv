module FPU (
    input logic [7:0] op_A, op_B,
    input logic sel_i,  //0 = add, 1 = sub
    output zero_detect,
    output [7:0] result
);
logic [3:0] exp_diff_wire;
logic [2:0] final_exp_wire;
exp_comp exp_compare_module (
    .exp_A(op_A[6:4]), 
    .exp_B(op_B[6:4]),
    .exp_diff(exp_diff_wire),
    .final_exp(final_exp_wire)
);
logic [3:0] bigger_fract_wire;
logic [3:0] smaller_fract_wire;
logic small_A_wire;
logic sign_big_wire;
logic sign_small_wire;
frac_comp fraction_compare_module (
    .sign_A(op_A[7]), 
    .sign_B(op_B[7]),
    .fract_A(op_A[3:0]), 
    .fract_B(op_B[3:0]),
    .exp_diff(exp_diff_wire),
    .sign_big(sign_big_wire),
    .sign_small(sign_small_wire),
    .bigger_fract(bigger_fract_wire), 
    .smaller_fract(smaller_fract_wire),
    .smaller_is_A(small_A_wire)
);
logic [5:0] shifted_fract_wire;
shift_fract shift_right_module (
    .smaller_fract(smaller_fract_wire),
    .exp_diff(exp_diff_wire),
    .shifted_fract(shifted_fract_wire)
);
logic [5:0] result_wire;
logic overflow_wire;
add_sub_module add_sub (
    .sign_big(sign_big_wire), 
    .sign_small(sign_small_wire),
    .bigger_fract(bigger_fract_wire),
    .smaller_fract(shifted_fract_wire), //bigger_fract = A, smaller_fract = B
    .sel_i(sel_i),  //0 = add, 1 = sub
    .result_o(result_wire),
    .overflow_flag(overflow_wire)
);
normalize_result normalize_module (
    .temp_fract(result_wire),
    .final_exp(final_exp_wire),
    .overflow_flag(overflow_wire),
    .result_fract(result[3:0]),
    .result_exp(result[6:4])
);
sign_of_res result_sign_module(
    .smaller_is_A(small_A_wire), // = 0 smaller is B, = 1 smaller is A
    .sel_i(sel_i),
    .exp_A(op_A[6:4]), 
    .exp_B(op_B[6:4]),
    .fract_A(op_A[3:0]), 
    .fract_B(op_B[3:0]),
    .sign_A(op_A[7]), 
    .sign_B(op_B[7]),
    .result_sign(result[7])
);
always_comb begin : Detect_zero_module
    if (result_wire==0) begin
        zero_detect = 1'b1;
    end
    else zero_detect = 1'b0;
end
endmodule
