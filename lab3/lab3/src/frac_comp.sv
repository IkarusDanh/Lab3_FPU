module frac_comp (
    input sign_A, sign_B,
    input logic [3:0] fract_A, fract_B,
    input logic signed [3:0] exp_diff,
    output [3:0] bigger_fract, smaller_fract,
    output sign_big, sign_small,
    output smaller_is_A
);
logic signed [4:0] subtract_fract;
assign subtract_fract = fract_A - fract_B;
always_comb begin : Compare_Fract_module
    case (exp_diff)
        0: begin
            if (subtract_fract >= 0) begin
                bigger_fract = fract_A;
                smaller_fract = fract_B;
                smaller_is_A = 0;
                sign_big = sign_A;
                sign_small = sign_B;
            end
            else begin
                bigger_fract = fract_B;
                smaller_fract = fract_A;
                smaller_is_A = 1;
                sign_big = sign_B;
                sign_small = sign_A;
            end
        end
        default: begin
            if (exp_diff > 0) begin
                bigger_fract = fract_A;
                smaller_fract = fract_B;
                smaller_is_A = 0;
                sign_big = sign_A;
                sign_small = sign_B;
            end
            else begin
                bigger_fract = fract_B;
                smaller_fract = fract_A;
                smaller_is_A = 1;
                sign_big = sign_B;
                sign_small = sign_A;
            end
        end
    endcase
end
endmodule
