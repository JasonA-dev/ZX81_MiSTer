verilator \
-cc -exe --public --trace --savable \
--compiler msvc +define+SIMULATION=1 \
-O3 --x-assign fast --x-initial fast --noassert \
--converge-limit 6000 \
-Wno-fatal \
--top-module top sim.v \
../rtl/keyboard.sv \
../rtl/glue.sv \
../rtl/TV80/tv80_alu.v \
../rtl/TV80/tv80_core.v \
../rtl/TV80/tv80_mcode.v \
../rtl/TV80/tv80_reg.v \
../rtl/TV80/tv80e.v \
../rtl/TV80/tv80n.v \
../rtl/TV80/tv80s.v \
../rtl/dpram.sv
