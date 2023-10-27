FILE = main

icmake:
	@cmake -S . -G "Unix Makefiles" -B ./build/ 

clean:
	@rm --recursive ./build

execute:
	# @cd ./build && make && ./$(FILE)
	@cd ./build && make

init:
	@mkdir  build

wholeC:
	cd ./dev/ && bash conda_run.sh

wholeP:
	cd ./dev/ && bash python_run.sh

run: init icmake

## to run os.c and display the memory_out.txt ( run inside dev/somefolder )


## cd ../../src/core && gcc os.c && ./a.out && 
## cp memory.txt ./../../dev/mem_vis && cd ../../dev/mem_vis && 
## g++ mem_vis.cpp && ./a.out && cd ../script && python mem_conv.py

## cd ../../src/core && gcc os.c && ./a.out && cp memory.txt ./../../dev/mem_vis && cd ../../dev/mem_vis && g++ mem_vis.cpp && ./a.out && cd ../script && python mem_conv.py