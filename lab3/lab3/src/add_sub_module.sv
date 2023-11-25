module add_sub_module (
    input logic sign_big, sign_small,
    input logic [3:0] bigger_fract,
    input logic [5:0] smaller_fract, //bigger_fract = A, smaller_fract = B
    input logic sel_i,  //0 = add, 1 = sub
    output [5:0] result_o,
    output overflow_flag
);
logic [5:0] bigger_fract_00;
assign bigger_fract_00 = {1'b1, bigger_fract, 1'b0};
always_comb begin : ADD_SUB
    if (!sel_i) begin
        case ({sign_big, sign_small})
            2'b00, 2'b11: {overflow_flag, result_o} = smaller_fract + bigger_fract_00;
            2'b10, 2'b01: {overflow_flag, result_o} = bigger_fract_00 - smaller_fract;
        endcase

    end
    else begin
        case ({sign_big, sign_small})
            2'b00, 2'b11: {overflow_flag, result_o} = bigger_fract_00 - smaller_fract;
            2'b01, 2'b10: {overflow_flag, result_o} = bigger_fract_00 + smaller_fract;
        endcase
    end
end
endmodule
