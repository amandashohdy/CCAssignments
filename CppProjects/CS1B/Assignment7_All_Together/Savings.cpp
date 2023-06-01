/*********************************
 * AUTHOR		: AMANDA SHOHDY
 * ASSIGNMENT	: ASSIGNMENT 7
 * CLASS			: CS1B
 * SECTION		: MW 1:30 - 3:50p
 * DUE DATE		: 12 DECEMBER 2022
 **********************************/

#include "Savings.h"
#include "TransactionError.h"
#include <string>
using namespace std ;

/********************************************************************
 * Constructor Savings : Class Savings
 * 		This constructors initializes the members to default values.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		Members are initialized to default values
 ********************************************************************/
Savings::Savings()
: Account()
{
	interestRate = 0.0 ;
}

/********************************************************************
 * Constructor Savings : Class Savings
 * 		This constructors initializes the members to passed values.
 *
 * PRE-CONDITIONS
 * 		openingDate 	: date account was opened
 * 		name 		   	: name of account holder
 * 		accountNum 		: account number
 * 		balance 			: amount being deposited
 * 		intRate 			: interest rate
 * POST-CONDITIONS
 * 		Members are initialized to passed values
 ********************************************************************/
Savings::Savings(Date openingDate, string name, int accountNum, float balance, float intRate)
: Account(openingDate, name, accountNum, balance)
{

	interestRate = intRate ;
}

/********************************************************************
 * Method UpdateAcct : Class Savings
 * 		This constructors initializes the members to passed values.
 *
 * PRE-CONDITIONS
 * 		today 	: transaction date
 * POST-CONDITIONS
 * 		The currentBalance and lastTransDate members are updated.
 * 		There is no return value.
 ********************************************************************/
void Savings::UpdateAcct(Date today)
{
	float current ;
	int lastMonth = this->GetLastTransDate().GetMonth() ;
	int interest = today.GetMonth() - lastMonth ; // how many months passed
	if (today.GetDay() == 1)		// if the first of the month
	{
		for (int i = 0 ; i < interest ; i++)	 // for each month that has
		{									 // passed since an update
			current = this->GetBalance() ;
			current += current*interestRate ; // add interest
			this->SetBalance(current) ;
		}
	}
	this->SetLastTransDate(today) ;		// update transaction date
}
