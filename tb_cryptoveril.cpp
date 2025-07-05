#include "Vcryptoveril.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vcryptoveril* top = new Vcryptoveril;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    top->clk1 = 0;
    top->clk2 = 0;
    top->clk3 = 0;
    top->rst = 1;

    for (int i
