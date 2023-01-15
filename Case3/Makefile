verilator := verilator
src_name := top
testbench := top_main.cpp
flags := --exe --cc
extra_flag := --build --trace
obj_path := obj_dir

.PHONY : all
all : 
	$(verilator) $(src_name).v $(testbench) $(flags) $(extra_flag)
	./$(obj_path)/V$(src_name)

.PHONY : build
build : 
	$(verilator) $(src_name).sv $(testbench) $(flags)
	$(MAKE) -C $(obj_path) -f V$(src_name).mk

.PHONY : run
run : 
	./$(obj_path)/V$(src_name)

.PHONY : trace
trace: 
	gtkwave $(obj_path)/wave.vcd
