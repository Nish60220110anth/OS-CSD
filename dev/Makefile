mvimages:
	cp ./face/out/*.h  ./../src/faces

whole:
 	cd ../../src/core && gcc os.c && ./a.out && cp memory.txt ./../../dev/mem_vis && cd ../../dev/mem_vis && g++ mem_vis.cpp && ./a.out && cd ../script && python mem_conv.py