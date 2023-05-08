CC = g++
FLAGS = -std=c++14 -Wall -g

all: HW06

HW06: HW06.cpp $(OBJS) 
	$(CC) $(FLAGS) HW06.cpp -o HW06 

clean: 
	rm HW06.scr HW06 HW06.tar 

tar:
	tar cf HW06.tar HW06.scr Makefile HW06.cpp 