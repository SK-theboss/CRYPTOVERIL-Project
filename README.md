# 🔐 CRYPTOVERIL++ — Encryption-Decryption-25

Welcome to **CRYPTOVERIL++**, a digital logic design challenge where you'll implement a pipelined encryption-decryption system using Verilog. This system takes in a 16-bit input and a 6-bit key, processes the input across three clock domains, and outputs the transformed data. You’ll also simulate and analyze the system using Verilator and GTKWave.

---

## 📦 What You’ll Build

You will design:

1. **Three encryption stages:**
   - **enc_stage1.v** — Bit shifting + arithmetic
   - **enc_stage2.v** — FSM-based logic
   - **enc_stage3.v** — Cleanup or reverse of previous effects

2. **Two buffers:**
   - **buffer_1_2.v** — Between stage 1 and 2
   - **buffer_2_3.v** — Between stage 2 and 3

3. **Top module:**
   - **cryptoveril.v** — Connects all stages and buffers

4. **Testbench:**
   - **tb_cryptoveril.cpp** — Simulates the design using Verilator and dumps output to `dump.vcd`

## 🧠 System Architecture

input_data
↓ clk1
[enc_stage1]
↓ buffer_1_2 (clk1 → clk2 sync)
[enc_stage2] ← FSM Logic
↓ buffer_2_3 (clk2 → clk3 sync)
[enc_stage3]
↓
output_data

### Clock Domains

| Stage       | Clock Signal | Speed          |
|-------------|---------------|----------------|
| Stage 1     | clk1          | Fastest        |
| Stage 2     | clk2 = clk1/3 | Medium         |
| Stage 3     | clk3 = clk2/3 | Slowest        |

---

## 🔑 Inputs

| Signal      | Width | Description                      |
|-------------|-------|----------------------------------|
| input_data  | 16    | Main input data                  |
| key_bits    | 6     | Key controlling stage logic      |
| clk1/2/3    | 1     | Clock signals for each stage     |
| rst         | 1     | Active-high reset                |

---

## 🔁 Outputs

| Signal        | Width | Description              |
|---------------|-------|--------------------------|
| output_data   | 16    | Final transformed output |

---

## 🧩 File Descriptions

| File Name        | Description                         |
|------------------|-------------------------------------|
| `enc_stage1.v`   | Performs left shift + add using key |
| `enc_stage2.v`   | FSM logic (4 states)                |
| `enc_stage3.v`   | Removes bits / final cleanup        |
| `buffer_1_2.v`   | Sync data from clk1 to clk2         |
| `buffer_2_3.v`   | Sync data from clk2 to clk3         |
| `cryptoveril.v`  | Top-level pipeline                  |
| `tb_cryptoveril.cpp` | Verilator C++ testbench        |

---
