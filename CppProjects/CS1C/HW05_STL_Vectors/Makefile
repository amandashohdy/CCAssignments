CC = g++
FLAGS = -std=c++14 -Wall -g

all: HW05

HW05: HW05.cpp $(OBJS) 
	$(CC) $(FLAGS) HW05.cpp -o HW05 

clean: 
	rm HW05.scr HW05 HW05.tar 

tar:
	tar cf HW05.tar HW05.scr Makefile HW05.cpp 