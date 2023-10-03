/*********************************
 * AUTHOR       : AMANDA SHOHDY
 * ASSIGNMENT   : ASSIGNMENT 7
 * CLASS        : CS1B
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 12 DECEMBER 2022
 **********************************/

#ifndef BANK_H_
#define BANK_H_

#include "Account.h"
#include "Checking.h"
#include "Savings.h"
#include "MoneyMarket.h"
#include <string>
#include <list>

class Bank
{
	public :

		/**************
		 ** MUTATORS **
		 **************/
		void OpenAccount(Date date, int number, float amount, string name, string type) ;
		void Deposit(int accNum, Date date, float amount) ;
		void Withdraw(int accNum, Date date, float amount) ;
		void Transfer(int accNum, Date date, float amount, int transfer) ;

		/***************
		 ** ACCESSORS **
		 ***************/
		string GetName(int accNumber) ;
		float GetBalance(int accNumber) ;

	private :
		Account* Find(int accNumber) ;            // HELPER ACCESSOR FUNCTION

		list<Account*> accounts ;                 // PROCESSING - list of pointers to account objects
		const float savingsRate = 0.10 ;          // PROCESSING - constant of savings interest rate
		const float mmRate = 0.20 ;               // PROCESSING - constant of money market interest rate
		const float mmFee = 1.50 ;                // PROCESSING - constant of money market withdrawal fee
		const int cOverDraw = 200 ;               // PROCESSING - constant of checking overdraw limit
		const int cOverFee = 20 ;                 // PROCESSING - constant of checking overdraw fee

} ;

/************************************************************************************************
 * Bank Class
 *    This class represents the Bank object. It manages a list accounts of Accounts object
 *    pointers. It has constants representing the fees, limits, and interest rate of the
 *    subclasses of the Account class.
 ************************************************************************************************/


/**************
 ** MUTATORS **
 **************/

/************************************************************************************************
 * void OpenAccount(Date date, int number, float amount, string name, string type) ;
 *     Mutator  :    Creates an object of the specified class and adds a pointer to the
 *                   object to the accounts list.
 *
 *     Parameter:    date (Date)    // IN - openings date
 *                   number (int)   // IN - account number
 *                   amount (float) // IN - amount of money being deposited
 *                   name (string)  // IN - account holder's name
 *                   type (string)  // IN - type of account being opened
 *     Return   :    none
 ************************************************************************************************/

/************************************************************************************************
 * void Deposit(int accNum, Date date, float amount) ;
 *     Mutator  :    finds the account being accessed in the accounts list based on the
 * 						   account number and calls the respective accounts Deposit() method.
 *
 *     Parameter:    accNum (int)     // IN - account number
 *                   date (Date)      // IN - transaction date
 *                   amount (float)   // IN - amount deposited
 *     Return   :    one
 ************************************************************************************************/

/************************************************************************************************
 * void Withdraw(int accNum, Date date, float amount) ;
 *     Mutator  :    finds the account being accessed in the accounts list based on the
 *                   account number and calls the respective accounts Withdrawal() method.
 *
 *     Parameter:    accNum (int)      // IN - account number
 *                   date (date)       // IN - transaction date
 *                   amount (float)    // IN - amount withdrawn
 *     Return   :    none
 ************************************************************************************************/

/************************************************************************************************
 * void Transfer(int accNum, Date date, float amount, int transfer) ;
 *     Mutator  :    finds the two accounts being accessed in the accounts list based on
 *                   their accounts numbers and calls the TransferFunds() method.
 *
 *     Parameter:    accNum (int)    // IN - account number money is being transferred to
 *                   date (Date)     // IN - transaction date
 *                   amount (float)  // IN - amount transferred
 *                   transfer (int)  // IN - account number money is being transferred from
 *     Return   :    none
 ************************************************************************************************/


/***************
 ** ACCESSORS **
 ***************/

/************************************************************************************************
 * string GetName(int accNumber) ;
 *     Accessor  :    accesses the account holder's name based on the account number
 *
 *     Parameter :    accNumber (int)                    // IN - account number
 *     Return    :    current account's name (string)    // OUT - account holder's name
 ************************************************************************************************/

/************************************************************************************************
 * float GetBalance(int accNumber) ;
 *     Accessor  :    accesses the account's balance based on the account number
 *
 *     Parameter :    accNumber (int)                     // IN - account number
 *     Return    :    current account's balance (float)   // OUT - account balance
 ************************************************************************************************/

/************************************************************************************************
 * Account* Find(int accNumber) ;
 *     Accessor  :    helper function to search through the accounts list and returnt the
 *                    pointer to a specified account
 *
 *     Parameter :    accNumber (int)           // IN - account number
 *     Return    :    currAccount (Account*)    // OUT - pointer to account object being accessed
 ************************************************************************************************/

#endif /* BANK_H_ */
