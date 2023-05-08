CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Rectangle.o Triangle.o

all: HW09

HW09: HW09.cpp $(OBJS) 
	$(CC) $(FLAGS) HW09.cpp -o HW09 $(OBJS)

Rectangle.o: Rectangle.cpp Rectangle.h 
	$(CC) $(FLAGS) -c Rectangle.cpp -o Rectangle.o 

Triangle.o: Triangle.cpp Triangle.h 
	$(CC) $(FLAGS) -c Triangle.cpp -o Triangle.o 

clean: 
	rm Shape.o Rectangle.o Triangle.o HW09.scr HW09 HW09.tar 

tar:
	tar cf HW09.tar HW09.scr Makefile HW09.cpp Shape.h Rectangle.h Rectangle.cpp Triangle.cpp Triangle.h 