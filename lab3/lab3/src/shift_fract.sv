module shift_fract (
    input logic [3:0] smaller_fract,
    input logic signed [3:0] exp_diff,
    output [5:0] shifted_fract
);
logic [3:0] shift_value;
always_comb begin : get_shift_value
    if (exp_diff[3]) begin
    shift_value = (exp_diff ^ 4'hF) + 1;
    end
    else shift_value = exp_diff;
end
assign shifted_fract = {1'b1,smaller_fract,1'b0} >> shift_value;
endmodule
