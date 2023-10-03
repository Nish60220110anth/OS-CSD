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

run: init icmake