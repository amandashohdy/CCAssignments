CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Date.o Employee.o Programmer.o SoftwareArchitect.o

all: HW03

HW03: HW03.cpp $(OBJS) 
	$(CC) $(FLAGS) HW03.cpp -o HW03 $(OBJS)

Date.o: Date.cpp Date.h 
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.cpp Employee.h 
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o 

Programmer.o: Programmer.cpp Programmer.h 
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o 

SoftwareArchitect.o: SoftwareArchitect.cpp SoftwareArchitect.h 
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o 

clean: 
	rm Date.o Employee.o Programmer.o SoftwareArchitect.o HW03.scr HW03 HW03.tar 

tar:
	tar cf HW03.tar HW03.scr Makefile HW03.cpp Date.h Date.cpp Employee.cpp Employee.h Programmer.cpp Programmer.h SoftwareArchitect.cpp SoftwareArchitect.h
