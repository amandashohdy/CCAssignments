/*********************************
 * AUTHOR		: AMANDA SHOHDY
 * ASSIGNMENT	: ASSIGNMENT 7
 * CLASS			: CS1B
 * SECTION		: MW 1:30 - 3:50p
 * DUE DATE		: 12 DECEMBER 2022
 **********************************/

#include "Checking.h"
#include "TransactionError.h"
#include <string>
using namespace std ;

/*************************************************************************
 * Constructor Checking : Class Checking
 * 		This constructor initializes the members to default values.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		Members are initialized to default values.
 *************************************************************************/
Checking::Checking()
: Account()
{
	overDraft = 0.0 ;
	overFee = 0.0 ;
}

/*************************************************************************
 * Constructor Checking : Class Checking
 * 		This constructor initializes the members to passed values.
 *
 * PRE-CONDITIONS
 * 		openingDate 	: date account was opened
 * 		name 		   	: name of account holder
 * 		accountNum 		: account number
 * 		balance 			: amount being deposited
 * 		over 		   	: overdraft limit
 * 		fee 				: overdraft fee
 * POST-CONDITIONS
 * 		Members are initialized to passed values.
 *************************************************************************/
Checking::Checking(Date openingDate, string name, int accountNum, float balance, float over, float fee)
: Account(openingDate, name, accountNum, balance)
{
	overDraft = over ;
	overFee = fee ;
}

/*************************************************************************
 * Method Withdrawal : Class Checking
 * 		This method overrides the Withdrawal method in the Account class.
 *		A given amount of money is withdrawn with a $200 overdraft limit.
 *		For each transaction that results in a negative balance, a $20
 *		fee is charged.
 *
 * PRE-CONDITIONS
 * 		today 	: transaction date
 * 		amount	: amount being withdrawn
 * POST-CONDITIONS
 * 		The currentBalance member is updates. There is no return value.
 *************************************************************************/
void Checking::Withdrawal(Date today, float amount)
{
	float currentBalance ;

	this->UpdateAcct(today) ;	// update account with most recent transaction date
	currentBalance = this->GetBalance() ;	// get current balance


	if (currentBalance >= amount)	// if balance is enough
	{
		currentBalance -= amount ;	// withdraw amount
		this->SetBalance(currentBalance);	// update balance
	}
	else if (currentBalance >= (amount+overFee)-overDraft)	// if the account will
	{														// overdraw within limit
		currentBalance -= amount+overFee ;	// withdraw amount and charge fee
		this->SetBalance(currentBalance) ;	// update balance
	}
	else
		throw TransactionError("Insufficient funds in account " + to_string(this->GetAcctNum())) ;
}
