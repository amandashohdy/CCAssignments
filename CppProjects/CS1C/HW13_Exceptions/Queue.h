/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW13
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 25 April 2023
 * 
 * Queue.h
**********************************/

#ifndef QUEUE_H
#define QUEUE_H

#include <memory>
#include <iostream>
#include <string>
#include <cassert>
#include <exception>
using namespace std ;

/************************************************************************************
 * Queue Class
 *      This class represents the Queue object. It manages five attributes: maxSize, 
 * count, frontOfQueue, endOfQueue, and arr.
 ************************************************************************************/
template <class Type> 
class Queue
{
	public :
		
		/******************
		 ** CONSTRUCTORS **
		 ******************/

		/***************************************************************************
		 * Queue<Type>(int size = 100)
		 *     Constructor:    Initalizes class attributes to starting values
		 * 
		 *     Parameters :    size (int) - size of queue 
		 *     Return     :    none
		 ***************************************************************************/
		Queue<Type>(int size = 100) 
		{
			if (size <= 0)
			{
				cout << "Cannot make queue of less than 1 element." << endl ;
				cout << "Creating queue of default size 100." << endl << endl ;
				maxSize = 100 ;
			}
			else
			{
				cout << "Creating queue of size " << size << "." << endl << endl ;
				maxSize = size ;
			}
			count = 0 ;
			frontOfQueue = 0 ;
			endOfQueue = maxSize - 1 ;
			arr = make_unique<Type[]>(maxSize) ;
		}

		/***************************************************************************
		 * Queue<Type>(const Queue<Type>& sourceQueue)
		 *     Constructor:   Copy constructor initializes values to the values of
		 *                    of an existing queue object
		 * 
		 *     Parameters :   sourceQueue (Queue<Type>&) - queue being copied
		 *     Return     :   none
		 ***************************************************************************/
		Queue<Type>(const Queue<Type>& sourceQueue) 
		{
			cout << "Executing Copy Construction" << endl ;

			maxSize = sourceQueue.maxSize ;
			count = sourceQueue.count ;
			frontOfQueue = sourceQueue.frontOfQueue ;
			endOfQueue = sourceQueue.endOfQueue ;
			arr = make_unique<Type[]>(maxSize) ;

			for (int i = frontOfQueue ; i < endOfQueue ; i++)
			{
				arr[i] = sourceQueue.arr[i] ;
			}
		}

		/***************************************************************************
		 * Queue<Type>& operator= (const Queue<Type>& sourceQueue)
		 *     Overloaded Operator:   Overloads the '=' operator to copy information
		 *                            from an existing queue
		 * 
		 *     Parameters         :   sourceQueue (Queue<Type>&) - queue being copied
		 *     Return             :   *this - reference
		 ***************************************************************************/
		Queue<Type>& operator= (const Queue<Type>& sourceQueue) 
		{
			cout << "Executing Copy Assignment" << endl ;
			arr = make_unique<Type[]>(maxSize) ;
			maxSize = sourceQueue.maxSize ;
			count = sourceQueue.count ;
			frontOfQueue = sourceQueue.frontOfQueue ;
			endOfQueue = sourceQueue.endOfQueue ;

			for (int i = frontOfQueue ; i < endOfQueue ; i++)
			{
				arr[i] = sourceQueue.arr[i] ;
			}
			return *this ;
		}

		/***************************************************************************
		 * Queue(Queue<Type>&&) = default ;
		 *     Default move constructor
		 ***************************************************************************/
		Queue(Queue<Type>&&) = default ;

		/***************************************************************************
		 * Queue<Type>& operator= (Queue<Type>&& sourceQueue) noexcept
		 *     Overloaded Operator:   Overloads the '=' operator to move information
		 *                            from a queue
		 * 
		 *     Parameters         :   sourceQueue (Queue<Type>&&) - source queue
		 *     Return             :   *this - reference 
		 ***************************************************************************/
		Queue<Type>& operator= (Queue<Type>&& sourceQueue) noexcept
		{
			cout << "Executing Move Assignment" << endl ;

			arr = move(sourceQueue.arr) ;
			sourceQueue.arr = nullptr ;

			maxSize = sourceQueue.maxSize ;
			count = sourceQueue.count ;
			frontOfQueue = sourceQueue.frontOfQueue ;
			endOfQueue = sourceQueue.endOfQueue ;

			sourceQueue.maxSize = 0 ;
			sourceQueue.count = 0 ;
			sourceQueue.frontOfQueue = 0 ;
			sourceQueue.endOfQueue = 0 ;

			return *this ;
		}

		/**************
		 ** MUTATORS **
		 **************/

		/***************************************************************************
		 * void enqueue(Type addElement)
		 *     Mutator  :   Given that a queue is not full, the passed element is 
		 *                  added to the end of the queue
		 *     Parameter:   addElement (Type) - element to be added
		 *     Return   :   none 
		 ***************************************************************************/
		void enqueue(Type addElement) 
		{
			if (isFull()) throw ExceptionQueueIsFull() ;
			
			arr[count] = addElement ;
			count++ ;
		}

		/***************************************************************************
		 * void dequeue()
		 *     Mutator  :   Given the queue is not empty, the element at the front 
		 *                  of the queue is removed
		 *     Parameter:   none
		 *     Return   :   none
		 ***************************************************************************/
		void dequeue() 
		{
			// assert(!isEmpty()) ;
			if (isEmpty()) throw ExceptionQueueIsEmpty() ;

			for (int i = frontOfQueue ; i < count - 1 ; i++)
			{
				arr[i] = arr[i+1] ;
			}
			count-- ;
		}

		/***************
		 ** ACCESSORS **
		 ***************/

		/***************************************************************************
		 * Type front()
		 *     Accessor  :   Returns the element at the front of the queue
		 * 
		 *     Parameter :   none
		 *     Return    :   (Type) - element at the front of the queue
		 ***************************************************************************/
		Type front() 
		{
			// assert(!isEmpty()) ;

			if (isEmpty()) throw ExceptionQueueIsEmpty() ;
			return arr[frontOfQueue] ;
		}

		/***************************************************************************
		 * int size()
		 *     Accessor  :   Returns the amount of elements in the queue
		 * 
		 *     Parameter :   none
		 *     Return    :   count (int) - amount of elements in queue
		 ***************************************************************************/
		int size() 
		{
			return count ;
		}

		/***************************************************************************
		 * bool isEmpty()
		 *     Accessor  :   Returns true/false depending on if the queue is empty
		 * 
		 *     Parameter :   none
		 *     Return    :   true if count is 0, false if count is not 0
		 ***************************************************************************/
		bool isEmpty() 
		{
			return (count == 0) ;
		}

		/***************************************************************************
		 * bool isFull()
		 *     Accessor  :   Returns true/false depending on if queue is full
		 * 
		 *     Parameter :   none
		 *     Return    :   true if count is maxSize, false otherwise
		 ***************************************************************************/
		bool isFull() 
		{
			return (count == maxSize) ;
		}

		/***************************************************************************
		 * void printQueue()
		 *     Accessor  :   Outputs the contents of the queue
		 * 
		 *     Parameter :   none
		 *     Return    :   none
		 ***************************************************************************/
		void printQueue() 
		{
			cout << endl << "Queue: " ;

			for (int i = 0 ; i < count ; i++)
			{
				cout << arr[i] << " " ;
			}
			cout << endl << endl ;
		}

	private :
		int maxSize ;              // variable that stores the max queue size 
		int count ;                // variable that stores the number of elements in queue
		int frontOfQueue ;         // index of the front element
		int endOfQueue ;           // index of the last element
		unique_ptr<Type[]> arr ;   // pointer to the array that holds the queue elements
} ;

#endif /* QUEUE_H */
