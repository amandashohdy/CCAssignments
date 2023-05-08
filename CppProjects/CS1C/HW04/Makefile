CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Date.o Employee.o Programmer.o SoftwareArchitect.o

all: HW04

HW04: HW04.cpp $(OBJS) 
	$(CC) $(FLAGS) HW04.cpp -o HW04 $(OBJS)

Date.o: Date.cpp Date.h 
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.cpp Employee.h 
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o 

Programmer.o: Programmer.cpp Programmer.h 
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o 

SoftwareArchitect.o: SoftwareArchitect.cpp SoftwareArchitect.h 
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o 

clean: 
	rm Date.o Employee.o Programmer.o SoftwareArchitect.o HW04.scr HW04 HW04.tar 

tar:
	tar cf HW04.tar HW04.scr Makefile HW04.cpp Date.h Date.cpp Employee.h Employee.cpp Programmer.cpp Programmer.h SoftwareArchitect.cpp SoftwareArchitect.h