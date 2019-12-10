all:
	g++ -g -Wall HW5.cpp -o hw05
clean:
	rm -rf hw05

tar:
	tar cf HW5.scr makefile HW5.tar HW5.cpp STLVector.txt
