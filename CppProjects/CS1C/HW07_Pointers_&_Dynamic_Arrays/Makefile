CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = ManageInventory.o 

all: HW07

HW07: HW07.cpp ManageInventory.o 
	$(CC) $(FLAGS) HW07.cpp -o HW07 $(OBJS)

ManageInventory.o: ManageInventory.cpp ManageInventory.h 
	$(CC) $(FLAGS) -c ManageInventory.cpp -o ManageInventory.o 

clean:
	rm ManageInventory.o HW07 HW07.tar HW07.scr 

tar:
	tar cf HW07.tar HW07.scr Makefile HW07.cpp ManageInventory.h ManageInventory.cpp 