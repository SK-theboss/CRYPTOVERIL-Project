#include "Vcryptoveril.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vcryptoveril* top = new Vcryptoveril;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    for (int i = 0; i < 256; i++) {
        top->clk = 0; top->eval(); tfp->dump(i*2);
        top->clk = 1; top->data_in = i; top->eval(); tfp->dump(i*2+1);
    }

    tfp->close();
    delete top;
    return 0;
}
