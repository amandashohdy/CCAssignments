// this file is called Account.h
/**********************************************************
 * AUTHOR        : George Eaton
 **********************************************************/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "Date.h"
#include <iostream>

using namespace std;


class Account
{

	public:
	/*****************************************************
 	 	 CONSTRUCTORS
	 *****************************************************/
	Account();
	Account(Date openingDate, string name, int accountNum, float balance);

	/*****************************************************
 	 	 MUTATORS
	 *****************************************************/

   void SetLastTransDate(Date lastDate);
   void SetBalance(float balance);

	/*********************************************************************
	 * Deposit
	 * -------------------------------------------------------------------
	 * Adds the amount into the account
	 *********************************************************************/
	void Deposit(Date today, float amount);

	/*********************************************************************
	 * Withdrawal
	 * ------------------------------------------------------------------
	 * Deducts amount from account
	 *
	 *********************************************************************/
	virtual void Withdrawal(Date today, float amount);

	/*********************************************************************
	 * TransferFunds
	 * ------------------------------------------------------------------
	 * Transfers amount from the transferAcct to this account
	 *********************************************************************/
	void TransferFunds(Date today, Account *transferAcct, float amount);

	/*********************************************************************
	 * UpdateAcct
	 * ------------------------------------------------------------------
	 * Updates lastAccessDate to today
	 * This is called with each transaction
	 ********************************************************************/
	virtual void UpdateAcct(Date today);

	/******************************************************
 	 	 ACCESSORS
	 ******************************************************/
	Date GetOpenDate()  const;
	string GetName()  const;
	int GetAcctNum() const;
	float GetBalance() const;
	Date GetLastTransDate() const;

private:
   // helper mutator functions
	void SetAllValues(Date openingDate, string name, int accountNum, float balance);
	void SetValue(string name);
	void SetValue(int accountNum);
	void SetValue(float balance);
	void SetValue(Date openingDate);

	string clientName;      // clients name
	int acctNumber;         // account number
	float currentBalance;   // currentBalance, updated by transactions
	Date openDate;          // account opening date, set when the account is created
	Date lastAccessDate;    // last date the account was access (i.e. there was a transaction)

};

#endif /* ACCOUNT_H_ */
