CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Shapes.o

all: HW09EC

HW09EC: HW09EC.cpp $(OBJS) 
	$(CC) $(FLAGS) HW09EC.cpp -o HW09EC $(OBJS)

Shapes.o: Shapes.cpp Shapes.h 
	$(CC) $(FLAGS) -c Shapes.cpp -o Shapes.o 

clean: 
	rm Shapes.o HW09EC.scr HW09EC HW09EC.tar 

tar:
	tar cf HW09EC.tar HW09EC.scr Makefile HW09EC.cpp Shapes.h Shapes.cpp