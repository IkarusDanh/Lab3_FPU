module exp_comp (
    input logic [2:0] exp_A, exp_B,
    output signed [3:0] exp_diff,
    output [2:0] final_exp
);
assign exp_diff = exp_A - exp_B;
always_comb begin : FinalExp
    if (exp_diff[3]) begin
        final_exp = exp_B;
    end   
    else final_exp = exp_A;
end
endmodule
