/*********************************
 * AUTHOR        : AMANDA SHOHDY
 * ASSIGNMENT    : ASSIGNMENT 7
 * CLASS         : CS1B
 * SECTION       : MW 1:30 - 3:50p
 * DUE DATE      : 12 DECEMBER 2022
 **********************************/

#ifndef SAVINGS_H_
#define SAVINGS_H_

#include "Date.h"
#include "Account.h"
#include <iostream>
#include <math.h>

class Savings : public Account
{
	public :

		/******************
		 ** CONSTRUCTORS **
		 ******************/
		Savings() ;
		Savings(Date openingDate, string name, int accountNum, float balance, float intRate) ;

		/*************
		 ** MUTATOR **
		 *************/
		void UpdateAcct(Date today) override ;
	private :
		float interestRate ;		// PROCESSING - interest rate
} ;

/******************************************************************************************
 * Savings Class : Inherited from Account Class
 *    This class represents the Savings object. It manages 5 attributes inherited from
 *    the Account Class: clientName, accNumber, currentBalance, openDate, and
 *    lastAccessDate. It has a constant representing the interest rate.
 ******************************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/******************************************************************************************
 * Savings() ;
 *    Constructor :    initializes class attributes to default values
 *
 *    Parameter	:    none
 *    Return    :    none
 ******************************************************************************************/

/******************************************************************************************
 * Savings(Date openingDate, string name, int accountNum, float balance, float intRate) ;
 *    Constructor :    initializes class attributes to passed values
 *
 *    Parameter	:    openingDate (Date)    // IN - date account was opened
 *                   name (string)         // IN - name of account holder
 *                   accountNum (int)      // IN - account number
 *                   balance (float)       // IN - amount being deposited
 *                   intRate (float)       // PROCESSINGS - interest rate
 *    Return    :    none
 ******************************************************************************************/


/*************
 ** MUTATOR **
 *************/

/******************************************************************************************
 * void UpdateAcct(Date today) override ;
 *    Mutator   :    Overrides the UpdateAcct function in the Account class. Every first
 *                      of the month, the account makes interest.
 *
 *    Parameter :    today (Date)    // IN - transaction date
 *    Return    :    none
 ******************************************************************************************/

#endif /* SAVINGS_H_ */
