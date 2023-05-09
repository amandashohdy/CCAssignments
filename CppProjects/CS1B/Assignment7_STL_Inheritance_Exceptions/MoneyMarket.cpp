/*********************************
 * AUTHOR       : AMANDA SHOHDY
 * ASSIGNMENT   : ASSIGNMENT 7
 * CLASS        : CS1B
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 12 DECEMBER 2022
 **********************************/

#include "MoneyMarket.h"
#include "TransactionError.h"
#include <string>
using namespace std ;

/***********************************************************************
 * Constructor MoneyMarket : Class MoneyMarket
 *      This constructor initializes the members to default values.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      Members are initialized to default values.
 ***********************************************************************/
MoneyMarket::MoneyMarket()
: Savings()
{
    wFee = 0.0 ;
}

/***********************************************************************
 * Constructor MoneyMarket : Class MoneyMarket
 *      This constructor initializes the members to passed values.
 *
 * PRE-CONDITIONS
 *      openingDate     : date account was opened
 *      name            : name of account holder
 *      accountNum      : account number
 *      balance         : amount being deposited
 *      intRate         : interest rate
 *      fee             : withdrawal fee
 * POST-CONDITIONS
 *      Members are initialized to passed values.
 ***********************************************************************/
MoneyMarket::MoneyMarket(Date openingDate, string name, int accountNum, float balance, float intRate, float fee)
: Savings(openingDate, name, accountNum, balance, intRate)
{
    wFee = fee ;
}

/***********************************************************************
 * Method Withdrawal : Class MoneyMarket
 *      This method overrides the Withdrawal method in the Account class.
 *      A given amount of money is withdrawn and the account is charged
 *      a $1.50 fee.
 *
 * PRE-CONDITIONS
 *      today   : transaction date
 *      amount  : amount being withdrawn
 * POST-CONDITIONS
 *      The currentBalance and lastTransDate members are updated. There
 *      is no return value.
 ***********************************************************************/
void MoneyMarket::Withdrawal(Date today, float amount)
{
    float currentBalance ;

    this->UpdateAcct(today) ;               // updates the last transaction date
    currentBalance = this->GetBalance() ;   // balance in account

    if (currentBalance >= amount+wFee)      // if account has enought for
    {                                       // withdrawal and fee
        currentBalance -= (amount+wFee) ;   // withdrawal and charge fee
        this->SetBalance(currentBalance) ;  // update account balance
    }
    else
        throw TransactionError("Insufficient funds in account " + to_string(this->GetAcctNum())) ;
}
