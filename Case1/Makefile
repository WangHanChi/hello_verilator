verilator := verilator
src_name := design_under_test
testbench := testbench.cpp
flags := --exe --cc
obj_path := obj_dir

.PHONY : all
all : build run

.PHONY : build
build : 
	$(verilator) $(src_name).sv $(testbench) $(flags)
	$(MAKE) -C $(obj_path) -f V$(src_name).mk

.PHONY : run
run : 
	./$(obj_path)/V$(src_name)