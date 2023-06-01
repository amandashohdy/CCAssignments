/*********************************
 * AUTHOR		: AMANDA SHOHDY
 * ASSIGNMENT	: ASSIGNMENT 7
 * CLASS			: CS1B
 * SECTION		: MW 1:30 - 3:50p
 * DUE DATE		: 12 DECEMBER 2022
 **********************************/

#include <iostream> //for debug only
#include <list>
#include "Bank.h"
#include "Date.h"
#include "TransactionError.h"
using namespace std ;

/***********************************************************************************
 * Method OpenAccount : Class Bank
 * 		This method adds an Account* accPtr to the end of a list based on the type
 * 		of account being opened.
 *
 * PRE-CONDITIONS
 * 		date			: opening date
 * 		number 		: account number
 * 		amount		: money being deposited
 * 		name 		   : account holder name
 * 		type 		   : account type
 * POST-CONDITIONS
 * 		A pointer to an Account object or subclass is added to the end of the
 * 		accounts list. There is no return value.
 ***********************************************************************************/
void Bank::OpenAccount(Date date, int number, float amount, string name, string type)
{
	Account* accPtr ;
	if (type == "Generic")
	{	// creates an Account() object
		accPtr = new Account(date, name, number, amount) ;
	}
	else if (type == "Savings")
	{	//creates a Savings() object
		accPtr = new Savings(date, name, number, amount, savingsRate) ;
	}
	else if (type == "MoneyMarket")
	{	// creates an MoneyMarket() object
		accPtr = new MoneyMarket(date, name, number, amount, mmRate, mmFee) ;
	}
	else if (type == "Checking")
	{	// creates an Checking() object
		accPtr = new Checking(date, name, number, amount, cOverDraw, cOverFee) ;
	}
	accounts.push_back(accPtr) ;		// adds created object to the accounts list
}

/***********************************************************************************
 * Method Deposit : Class Bank
 * 		This method calls the Deposit() function of the Account() class using the
 * 		pointer to the respective account to deposit money.
 *
 * PRE-CONDITIONS
 * 		accNum		: account number
 * 		date 		   : transaction date
 * 		amount		: amount being deposited
 * POST-CONDITIONS
 * 		The currentBalance data member of the account is updated. There is no return
 * 		value.
 ***********************************************************************************/
void Bank::Deposit(int accNum, Date date, float amount)
{
	Account* currAccount ;
	currAccount = Find(accNum) ;		// calls Find() helper function to locate account
	currAccount->Deposit(date, amount) ;		// updates account balance
}

/***********************************************************************************
 * Method Withdraw : Class Bank
 * 		This method calls the Withdrawal() function of the respective Account()
 * 		class using the pointer to the respective account to deposit money.
 *
 * PRE-CONDITIONS
 * 		accNum		: account number
 * 		date 		   : transaction date
 * 		amount		: amount being withdrawn
 * POST-CONDITIONS
 * 		The currentBalance data member of the account is updated. There is no return
 * 		value.
 ***********************************************************************************/
void Bank::Withdraw(int accNum, Date date, float amount)
{
	Account* currAccount ;
	currAccount = Find(accNum) ;		// calls Find() helper function to locate account
	currAccount->Withdrawal(date, amount) ;		// updates account balance
}

/***********************************************************************************
 * Method Transfer : Class Bank
 * 		This method calls the TransferFunds() function of the Account() class using
 * 		the pointer to the two respective accounts to deposit and withdraw money.
 *
 * PRE-CONDITIONS
 * 		accNum		: account number money is being transferred to
 * 		date 		   : transaction date
 * 		amount		: amount being transferred
 * 		transfer		: account number money is being transferred from
 * POST-CONDITIONS
 * 		The currentBalance data member of the two account are updated. There is
 * 		no return value.
 ***********************************************************************************/
void Bank::Transfer(int accNum, Date date, float amount, int transfer)
{
	Account* currAccount ;
	Account* transferAcc ;
	currAccount = Find(accNum) ;		// calls Find() helper function to locate first account
	transferAcc = Find(transfer) ;	// calls Find() helper function to locate second account
	currAccount->TransferFunds(date, transferAcc, amount) ;	// updates both account balances
}

/***********************************************************************************
 * Method GetName : Class Bank
 * 		This method identifies the account holder's name of the account being
 * 		modified.
 *
 * PRE-CONDITIONS
 * 		accNumber 	: account number
 * POST-CONDITIONS
 * 		The name of the account holder is returned.
 ***********************************************************************************/
string Bank::GetName(int accNumber)
{
	Account* currAccount ;
	currAccount = Find(accNumber) ;	// calls Find() helper function to locate account
	return currAccount->GetName() ;	// returns name of account
}

/***********************************************************************************
 * Method GetBalance : Class Bank
 * 		This method identifies the account's balance of the account being modified.
 *
 * PRE-CONDITIONS
 * 		accNumber 	: account number
 * POST-CONDITIONS
 * 		The balance of the account is returned.
 ***********************************************************************************/
float Bank::GetBalance(int accNumber)
{
	Account* currAccount ;
	currAccount = Find(accNumber) ;		// calls Find() helper function to locate account
	return currAccount->GetBalance() ;  // returns balance of account
}

/***********************************************************************************
 * Method Find : Class Bank
 * 		This method finds the pointer to the specified Account object based on the
 * 		account number.
 *
 * PRE-CONDITIONS
 * 		accNumber 	: account number
 * POST-CONDITIONS
 * 		The pointer to the account being searched for is returned.
 ***********************************************************************************/
Account* Bank::Find(int accNumber)
{
	Account* currAccount ;
	bool found = false ;
	for (Account* account : accounts)	// loops through accounts list
	{
		if (account->GetAcctNum() == accNumber)	// if account number found in list
		{
			currAccount = account ;
			found = true ;
		}
	}
	if (found == false)	// if account number is not found
		throw TransactionError("Account " + to_string(accNumber) + " not found") ;
	return currAccount ;		// if account number is found, the pointer is returned
}
