/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW13
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 25 April 2023
 * 
 * Exceptions.h
**********************************/

#include <exception>
using namespace std ;

class ExceptionQueueIsFull : public exception
{
	public :

		/***************************************
		 * what()
		 *    returns an error message telling
		 *    the user the queue is full when
		 *    ExceptionQueueIsFull is thrown
		 ***************************************/
		const char* what() const noexcept
		{
			return "ERROR: Queue is Full" ;
		}
} ;

class ExceptionQueueIsEmpty : public exception
{
	public :

		/***************************************
		 * what()
		 *     returns an error message telling 
		 *     the user the queue is full when
		 *     ExceptionQueueIsEmpty is thrown
		 ***************************************/
		const char* what() const noexcept
		{
			return "ERROR: Queue is Empty" ;
		}
} ;
