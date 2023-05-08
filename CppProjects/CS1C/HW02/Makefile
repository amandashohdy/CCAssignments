CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = CardDeck.o 

all: HW02

HW02: HW02.cpp CardDeck.o 
	$(CC) $(FLAGS) HW02.cpp -o HW02 $(OBJS)

CardDeck.o: CardDeck.cpp CardDeck.h 
	$(CC) $(FLAGS) -c CardDeck.cpp -o CardDeck.o 

clean:
	rm CardDeck.o HW02 HW02.tar HW02.scr

tar:
	tar cf HW02.tar HW02.scr Makefile HW02.cpp CardDeck.h CardDeck.cpp 