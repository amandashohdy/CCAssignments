/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW12
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 18 April 2023
 * 
 * HW12.cpp
**********************************/

#include "Queue.h"
#include <iostream>
#include <memory>
#include <string> 
using namespace std ;

int main()
{
	cout << endl << endl << endl ;
	cout << "*********************" << endl ;
	cout << "*** AMANDA SHOHDY ***" << endl ;
	cout << "***      HW07     ***" << endl ;
	cout << "*********************" << endl << endl << endl ;

	// Queue objects 
	Queue<int>    intQueue(15) ;
	Queue<double> doubleQueue(10) ;
	Queue<string> stringQueue(5) ;

	cout << "*****************" << endl ;
	cout << "*** INT QUEUE ***" << endl ;
	cout << "*****************" << endl << endl ;
	cout << "*** SIX ADDITIONS ***" << endl ;
	cout << "Adding Value 1" << endl ;
	intQueue.enqueue(1) ;
	cout << "Adding Value 2" << endl ;
	intQueue.enqueue(2) ;
	cout << "Adding Value 3" << endl ;
	intQueue.enqueue(3) ;
	cout << "Adding Value 4" << endl ;
	intQueue.enqueue(4) ;
	cout << "Adding Value 5" << endl ;
	intQueue.enqueue(5) ;
	cout << "Adding Value 6" << endl ;
	intQueue.enqueue(6) ;
	intQueue.printQueue() ;   

	cout << "*** FOUR DELETIONS ***" << endl ;
	cout << "Removing Value: " << intQueue.dequeue() << endl ;
	cout << "Removing Value: " << intQueue.dequeue() << endl ;
	cout << "Removing Value: " << intQueue.dequeue() << endl ;
	cout << "Removing Value: " << intQueue.dequeue() << endl ;
	intQueue.printQueue() ;

	cout << "*** FIVE ADDITIONS ***" << endl ;
	cout << "Adding Value 7" << endl ;
	intQueue.enqueue(7) ;
	cout << "Adding Value 8" << endl ;
	intQueue.enqueue(8) ;
	cout << "Adding Value 9" << endl ;
	intQueue.enqueue(9) ;
	cout << "Adding Value 10" << endl ;
	intQueue.enqueue(10) ;
	cout << "Adding Value 11" << endl ;
	intQueue.enqueue(11) ;
	intQueue.printQueue() ;

	cout << "*** THREE DELETIONS ***" << endl ;
	cout << "Removing Value: " << intQueue.dequeue() << endl ;
	cout << "Removing Value: " << intQueue.dequeue() << endl ;
	cout << "Removing Value: " << intQueue.dequeue() << endl ;
	intQueue.printQueue() ;

	cout << "*** front() METHOD ***" << endl ;
	cout << "Front of Queue: " << intQueue.front() << endl << endl ;


	cout << "********************" << endl ;
	cout << "*** DOUBLE QUEUE ***" << endl ;
	cout << "********************" << endl << endl ;
	cout << "*** SIX ADDITIONS ***" << endl ;
	cout << "Adding Value 0.1" << endl ;
	doubleQueue.enqueue(0.1) ;
	cout << "Adding Value 0.2" << endl ;
	doubleQueue.enqueue(0.2) ;
	cout << "Adding Value 0.3" << endl ;
	doubleQueue.enqueue(0.3) ;
	cout << "Adding Value 0.4" << endl ;
	doubleQueue.enqueue(0.4) ;
	cout << "Adding Value 0.5" << endl ;
	doubleQueue.enqueue(0.5) ;
	cout << "Adding Value 0.6" << endl ;
	doubleQueue.enqueue(0.6) ;
	doubleQueue.printQueue() ;

	cout << "*** FOUR DELETIONS ***" << endl ;
	cout << "Removing Value: " << doubleQueue.dequeue() << endl ;
	cout << "Removing Value: " << doubleQueue.dequeue() << endl ;
	cout << "Removing Value: " << doubleQueue.dequeue() << endl ;
	cout << "Removing Value: " << doubleQueue.dequeue() << endl ;
	doubleQueue.printQueue() ;

	cout << "*** FIVE ADDITIONS ***" << endl ;
	cout << "Adding Value 0.7" << endl ;
	doubleQueue.enqueue(0.7) ;
	cout << "Adding Value 0.8" << endl ;
	doubleQueue.enqueue(0.8) ;
	cout << "Adding Value 0.9" << endl ;
	doubleQueue.enqueue(0.9) ;
	cout << "Adding Value 1.1" << endl ;
	doubleQueue.enqueue(1.1) ;
	cout << "Adding Value 1.2" << endl ;
	doubleQueue.enqueue(1.2) ;
	doubleQueue.printQueue() ;

	cout << "*** THREE DELETIONS ***" << endl ;
	cout << "Removing Value: " << doubleQueue.dequeue() << endl ;
	cout << "Removing Value: " << doubleQueue.dequeue() << endl ;
	cout << "Removing Value: " << doubleQueue.dequeue() << endl ;
	doubleQueue.printQueue() ;

	cout << "*** front() METHOD ***" << endl ;
	cout << "Front of Queue: " << doubleQueue.front() << endl << endl ;


	cout << "********************" << endl ;
	cout << "*** STRING QUEUE ***" << endl ;
	cout << "********************" << endl << endl ;
	cout << "*** SIX ADDITIONS ***" << endl ;
	cout << "Adding Value one" << endl ;
	stringQueue.enqueue("one") ;
	cout << "Adding Value two" << endl ;
	stringQueue.enqueue("two") ;
	cout << "Adding Value three" << endl ;
	stringQueue.enqueue("three") ;
	cout << "Adding Value four" << endl ;
	stringQueue.enqueue("four") ;
	cout << "Adding Value five" << endl ;
	stringQueue.enqueue("five") ;
	cout << "Adding Value six" << endl ;
	stringQueue.enqueue("six") ;
	stringQueue.printQueue() ;

	cout << "*** FOUR DELETIONS ***" << endl ;
	cout << "Removing Value: " << stringQueue.dequeue() << endl ;
	cout << "Removing Value: " << stringQueue.dequeue() << endl ;
	cout << "Removing Value: " << stringQueue.dequeue() << endl ;
	cout << "Removing Value: " << stringQueue.dequeue() << endl ;
	stringQueue.printQueue() ;

	cout << "*** FIVE ADDITIONS ***" << endl ;
	cout << "Adding Value seven" << endl ;
	stringQueue.enqueue("seven") ;
	cout << "Adding Value eight" << endl ;
	stringQueue.enqueue("eight") ;
	cout << "Adding Value nine" << endl ;
	stringQueue.enqueue("nine") ;
	cout << "Adding Value ten" << endl ;
	stringQueue.enqueue("ten") ;
	cout << "Adding Value eleven" << endl ;
	stringQueue.enqueue("eleven") ;
	stringQueue.printQueue() ;

	cout << "*** THREE DELETIONS ***" << endl ;
	cout << "Removing Value: " << stringQueue.dequeue() << endl ;
	cout << "Removing Value: " << stringQueue.dequeue() << endl ;
	cout << "Removing Value: " << stringQueue.dequeue() << endl ;
	stringQueue.printQueue() ;

	cout << "*** front() METHOD ***" << endl ;
	cout << "Front of Queue: " << stringQueue.front() << endl << endl ;

	cout << "************************" << endl ;
	cout << "*** COPY CONSTRUCTOR ***" << endl ;
	cout << "************************" << endl ;
	Queue<string> copyStringQueue = stringQueue ;
	cout << endl << "Original" ;
	stringQueue.printQueue() ;
	cout << "Copy" ;
	copyStringQueue.printQueue() ;

	cout << "***********************" << endl ;
	cout << "*** COPY ASSIGNMENT ***" << endl ;
	cout << "***********************" << endl ;
	Queue<int> copyIntQueue ;
	copyIntQueue = intQueue ;
	cout << endl << "Original" ;
	intQueue.printQueue() ;
	cout << "Copy" ;
	copyIntQueue.printQueue() ;

	cout << "************************" << endl ;
	cout << "*** MOVE CONSTRUCTOR ***" << endl ;
	cout << "************************" << endl ;
	cout << "Executing Move Construction" ;
	Queue<int> moveConstructorQueue = move(copyIntQueue) ;
	moveConstructorQueue.printQueue() ;

	cout << "***********************" << endl ;
	cout << "*** MOVE ASSIGNMENT ***" << endl ;
	cout << "***********************" << endl << endl ;
	Queue<int> moveAssignmentQueue ;
	moveAssignmentQueue = move(moveConstructorQueue) ;
	moveAssignmentQueue.printQueue() ;

	cout << "************************************" << endl ;
	cout << "*** REMOVING FROM AN EMPTY QUEUE ***" << endl ;
	cout << "************************************" << endl << endl ;

	Queue<int> emptyQueue(5) ;
	cout << "Test is commented out to avoid Abort()" << endl << endl ;
	//emptyQueue.dequeue() ;
}
