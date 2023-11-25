module sign_of_res (
    input smaller_is_A, // = 0 smaller is B, = 1 smaller is A
    input sel_i,
    input logic [2:0] exp_A, exp_B,
    input logic [3:0] fract_A, fract_B,
    input logic sign_A, sign_B,
    output result_sign
);
// always_comb begin : Result_Sign
//     if (exp_B > exp_A) begin
//         result_sign = sign_B;
//     end
//     else if (exp_A > exp_B) begin
//         result_sign = sign_A;
//     end
//     else begin  //exp_A = exp_B
//         if (fract_B > fract_A) begin
//             result_sign = sign_B;
//         end
//         else result_sign = sign_A;
//     end
// end
always_comb begin : Result_Sign
    case (sel_i)
        1'b0: begin //ADD
            if (exp_B > exp_A) begin
                result_sign = sign_B;
            end
            else if (exp_A > exp_B) begin
                result_sign = sign_A;
            end
            else begin  //exp_A = exp_B
                if (fract_B > fract_A) begin
                    result_sign = sign_B;
                end
                else result_sign = sign_A;
            end
        end 
        1'b1: begin
            case ({sign_A,sign_B})
                2'b00: begin
                    if (smaller_is_A) begin
                        result_sign = 1'b1;
                    end
                    else result_sign = 1'b0;
                end
                2'b11: begin
                    if (smaller_is_A) begin
                        result_sign = 1'b0;
                    end
                    else result_sign = 1'b1;
                end
                2'b10: result_sign = 1'b1;
                2'b01: result_sign = 1'b0;
            endcase
        end
    endcase
end
endmodule
