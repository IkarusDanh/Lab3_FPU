#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
    // dut->SW[7:0] = 0b01011000; //3
    // dut->SW[15:8] = 0b01010100; //2.5
    // dut->SW[17] = 1;
    dut->SW = (sim_unit >= 10) ? 0b010101010001011000 : 0b000101010001011000 ;
    // input logic [7:0] op_A, op_B,
    // input logic sel_i,  //0 = add, 1 = sub
    // output zero_detect,
    // output [7:0] result
}
