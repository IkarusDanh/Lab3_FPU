#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
    dut->op_A = 0b01011000; //3
    dut->op_B = 0b01010100; //2.5
    dut->sel_i = 1;
    // input logic [7:0] op_A, op_B,
    // input logic sel_i,  //0 = add, 1 = sub
    // output zero_detect,
    // output [7:0] result
}
