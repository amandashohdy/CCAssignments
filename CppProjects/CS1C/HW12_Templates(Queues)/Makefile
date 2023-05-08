CC = g++
FLAGS = -std=c++14 -Wall -g

all: HW12

HW12: HW12.cpp 
	$(CC) $(FLAGS) HW12.cpp -o HW12 

clean: 
	rm HW12.scr HW12 HW12.tar 

tar:
	tar cf HW12.tar HW12.scr Makefile HW12.cpp Queue.h