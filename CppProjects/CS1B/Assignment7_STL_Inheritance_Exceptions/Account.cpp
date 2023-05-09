// this file is called Account.cpp
/**********************************************************
 * AUTHOR        : George Eaton
 **********************************************************/

#include "Account.h"
#include "TransactionError.h"


/*********************************************************************
 * Default constructor
 * -------------------------------------------------------------------
 * sets current balance and account number to 0
 * -------------------------------------------------------------------
 *********************************************************************/
Account::Account() {

	currentBalance = 0.0;
	acctNumber = 0;

}


/*********************************************************************
 * Constructor
 * -------------------------------------------------------------------
 * sets opening date, name, account number, balance, and lastAccessDate
 * -------------------------------------------------------------------
 *********************************************************************/
Account::Account(Date openingDate,	// IN - opening date
				 string name, 		      // IN - account holder's name
				 int accountNum, 	      // IN - account number
				 float balance)		   // IN - account balance
{

	// set all the attribute values
	this->SetAllValues(openingDate, name, accountNum, balance);

}


/*********************************************************************
 * SetValue
 * -------------------------------------------------------------------
 * overloaded - sets attribute base on parameter type - sets clientName
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::SetValue(string name)
{
	clientName = name;
}


/*********************************************************************
 * SetValue
 * -------------------------------------------------------------------
 * overloaded - sets attribute base on parameter type - sets acctNumber
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::SetValue(int accountNum)
{
	acctNumber = accountNum;
}


/*********************************************************************
 * SetValue
 * -------------------------------------------------------------------
 * overloaded - sets attribute base on parameter type - sets balance
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::SetValue(float balance)
{
	currentBalance = balance;
}


/*********************************************************************
 * SetValue
 * -------------------------------------------------------------------
 * overloaded - sets attribute base on parameter type - sets openingDate
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::SetValue(Date openingDate)
{
	openDate = openingDate;
}


/*********************************************************************
 * SetAllValue
 * -------------------------------------------------------------------
 * sets all values
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::SetAllValues(Date openingDate,	// IN - opening date
		 	 	 	 	   string name, 		// IN - account holder's name
						   int accountNum, 		// IN - account number
						   float balance)		// IN - account balance
{

	// initialize attributes
	this->SetValue( openingDate);
	this->SetValue( name);
	this->SetValue( accountNum);
	this->SetValue( balance);

	// initialize last access date to the opening date
	lastAccessDate = openingDate;

}

/*********************************************************************
 * SetLastTransDate
 * -------------------------------------------------------------------
 * sets the last access date
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::SetLastTransDate(Date lastDate) {
   lastAccessDate = lastDate;
}


/*********************************************************************
 * SetBalance
 * -------------------------------------------------------------------
 * sets the current balance to the new balance
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::SetBalance(float newBalance) {
   currentBalance = newBalance;
}


/*********************************************************************
 * GetOpenDate
 * -------------------------------------------------------------------
 * gets the account opening date, returned as a Date object
 * -------------------------------------------------------------------
 *********************************************************************/
Date Account::GetOpenDate()  const
{

	return openDate;

}


/*********************************************************************
 * GetName
 * -------------------------------------------------------------------
 * gets the account owner's name, returned as a string
 * -------------------------------------------------------------------
 *********************************************************************/
string Account::GetName()  const
{

	return clientName;

}


/*********************************************************************
 * GetAcctNum
 * -------------------------------------------------------------------
 * gets the account number, returned as a int
 * -------------------------------------------------------------------
 *********************************************************************/
int Account::GetAcctNum() const
{

	return acctNumber;

}


/*********************************************************************
 * GetBalance
 * -------------------------------------------------------------------
 * gets the account balance, returned as a float
 * -------------------------------------------------------------------
 *********************************************************************/
float Account::GetBalance() const
{

	return currentBalance;
}



/*********************************************************************
 * GetLastTransDate
 * -------------------------------------------------------------------
 * gets the last transaction date, returned as a Date object
 * -------------------------------------------------------------------
 *********************************************************************/
Date Account::GetLastTransDate() const
{

	return lastAccessDate;

}


/*********************************************************************
 * Deposit
 * -------------------------------------------------------------------
 * Adds the amount into the account
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::Deposit(Date today, 	// IN - today's date
					  float amount)	// IN - amount
{

	// update account
	this->UpdateAcct(today);

	// set balance to current balance plus amount
	this->SetValue( this->GetBalance() + amount);

}


/*********************************************************************
 * Withdrawal
 * ------------------------------------------------------------------
 * Deducts amount from account unless there are insufficient funds
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::Withdrawal(Date today, float amount)
{

	float currentBalance;		// CALC - current account balance


   // update account
   this->UpdateAcct(today);

	// get current balance
	currentBalance = this->GetBalance();

	// if the balance is at least as big as the withdrawal amount
	if (currentBalance >= amount)
	{

		// set balance to old balance minus amount
		this->SetValue( this->GetBalance() - amount);

	}
	else // NSF
      throw TransactionError("Insufficient funds in account " + to_string(this->GetAcctNum()));
}


/*********************************************************************
 * TransferFunds
 * ------------------------------------------------------------------
 * Transfers amount from the transferAcct to this account
 * (i.e. Withdrawal from transferAcct - Deposit to this Acct)
 * -------------------------------------------------------------------
 *********************************************************************/
void Account::TransferFunds(Date today, Account *transferAcct, float amount)
{

   // update account
   this->UpdateAcct(today);

	// if the current and 'transfer from' account are different..
	if ( transferAcct->GetAcctNum() != this->GetAcctNum() )
	{

		transferAcct->Withdrawal(today,amount);

      this->Deposit(today,amount);
	}
	else // error
      throw TransactionError("Can not transfer from/to the same account " + to_string(this->GetAcctNum()));
}


/*********************************************************************
 * UpdateAcct
 * ------------------------------------------------------------------
 * Updates the account last access date. This is called whenever there
 * is an account transaction
 * -------------------------------------------------------------------
 ********************************************************************/
void Account::UpdateAcct(Date today)
{

	// set last transaction date to today
	this->SetLastTransDate(today);

}
