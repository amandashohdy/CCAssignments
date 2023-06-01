/*********************************
 * AUTHOR		  : AMANDA SHOHDY
 * ASSIGNMENT	: ASSIGNMENT 7
 * CLASS			: CS1B
 * SECTION		: MW 1:30 - 3:50p
 * DUE DATE		: 12 DECEMBER 2022
 **********************************/

#ifndef TRANSACTIONERROR_H_
#define TRANSACTIONERROR_H_

#include <string>

class TransactionError
{
	public :

		/*****************
		 ** CONSTRUCTOR **
		 *****************/
		TransactionError(string message)	{errorMessage = message ;}

		/**************
		 ** ACCESSOR **
		 **************/
		string what() {return errorMessage ;	}
	private :
		string errorMessage ;	// PROCESSING - error message
} ;

/********************************************************************
 * TransactionError Class
 * 		This class represents the TransactionError object. It manages
 * 		an attribute errorMessage.
 ********************************************************************/


/*****************
 ** CONSTRUCTOR **
 *****************/

/********************************************************************
 * TransactionError(string message) ;
 * 		Constructor :	initializes attribute to passed message
 *
 * 		Parameter   :	message (string) - generated error message
 * 		Return 		:	none
 ********************************************************************/


/**************
 ** ACCESSOR **
 **************/

/********************************************************************
 * string what() ;
 * 		Accessor  : 	Returns stored error message
 *
 * 		Parameter :		none
 * 		Return	 :		errorMessage (string) // OUT - error message
 ********************************************************************/

#endif /* TRANSACTIONERROR_H_ */
