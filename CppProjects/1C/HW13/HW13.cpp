/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW13
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 25 April 2023
 * 
 * HW13.cpp
**********************************/

#include "Exceptions.h"
#include "Queue.h"
#include <iostream>
using namespace std ;

int main() 
{
	cout << endl << endl << endl ;
	cout << "*********************" << endl ;
	cout << "*** AMANDA SHOHDY ***" << endl ;
	cout << "***      HW13     ***" << endl ;
	cout << "*********************" << endl << endl << endl ;

	Queue<int> intQueue(5) ;

	try 
	{
		cout << "Adding Value: 1" << endl ;
		intQueue.enqueue(1) ;
		cout << "Adding Value: 2" << endl ;
		intQueue.enqueue(2) ;
		cout << "Adding Value: 3" << endl ;
		intQueue.enqueue(3) ;
		cout << "Adding Value: 4" << endl ;
		intQueue.enqueue(4) ;
		cout << "Adding Value: 5" << endl ;
		intQueue.enqueue(5) ;
		cout << "Adding Value: 6" << endl ;     // Adding to a full queue
		intQueue.enqueue(6) ;
	}
	catch (ExceptionQueueIsEmpty &except) { cout << except.what() << endl ; }
	catch (ExceptionQueueIsFull &except)  { cout << except.what() << endl ; }
	catch (exception &except)             { cout << except.what() << endl ; }

	intQueue.printQueue() ;

	try 
	{
		cout << "Front of Queue: " << intQueue.front() << endl << endl ;
	}
	catch (ExceptionQueueIsEmpty &except) { cout << except.what() << endl ; }
	catch (ExceptionQueueIsFull &except)  { cout << except.what() << endl ; }
	catch (exception &except)             { cout << except.what() << endl ; }

	try 
	{
		cout << "Removing Value..." << endl ;
		intQueue.dequeue() ;
		cout << "Removing Value..." << endl ;
		intQueue.dequeue() ;
		cout << "Removing Value..." << endl ;
		intQueue.dequeue() ;
		cout << endl << "Front of Queue: " << intQueue.front() ;
		intQueue.printQueue() ;
		cout << "Removing Value..." << endl ;
		intQueue.dequeue() ;
		cout << "Removing Value..." << endl ;
		intQueue.dequeue() ;
		cout << "Removing Value..." << endl ;  // Removing from an empty queue
		intQueue.dequeue() ;
	}
	catch (ExceptionQueueIsEmpty &except) { cout << except.what() << endl ; }
	catch (ExceptionQueueIsFull &except)  { cout << except.what() << endl ; }
	catch (exception &except)             { cout << except.what() << endl ; }

	intQueue.printQueue() ;

	try 
	{   // Accessing the front of an empty queue
		cout << "Front of Queue: " << intQueue.front() << endl << endl ;
	}
	catch (ExceptionQueueIsEmpty &except) { cout << except.what() << endl ; }
	catch (ExceptionQueueIsFull &except)  { cout << except.what() << endl ; }
	catch (exception &except)             { cout << except.what() << endl ; }

	cout << endl << endl << endl ;
}
