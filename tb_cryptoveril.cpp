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

<<<<<<< HEAD
=======
    vluint64_t main_time = 0;

    // Init
>>>>>>> a0fa7d5 (Updated)
    top->clk1 = 0;
    top->clk2 = 0;
    top->clk3 = 0;
    top->rst = 1;
<<<<<<< HEAD

    for (int i
=======
    top->eval();
    tfp->dump(main_time++);

    // Deassert reset
    top->rst = 0;
    top->input_data = 0x1234;
    top->key_bits = 0b101011;

    for (int i = 0; i < 300; i++) {
        top->clk1 = !top->clk1;
        if (i % 3 == 0) top->clk2 = !top->clk2;
        if (i % 9 == 0) top->clk3 = !top->clk3;

        top->eval();
        tfp->dump(main_time++);
    }

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
>>>>>>> a0fa7d5 (Updated)
