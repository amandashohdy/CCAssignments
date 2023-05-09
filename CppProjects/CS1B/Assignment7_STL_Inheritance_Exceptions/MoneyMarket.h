/*********************************
 * AUTHOR       : AMANDA SHOHDY
 * ASSIGNMENT   : ASSIGNMENT 7
 * CLASS        : CS1B
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 12 DECEMBER 2022
 **********************************/

#ifndef MONEYMARKET_H_
#define MONEYMARKET_H_

#include "Savings.h"
#include "Date.h"

class MoneyMarket : public Savings
{
    public :

        /******************
         ** CONSTRUCTORS **
         ******************/
        MoneyMarket() ;
        MoneyMarket(Date openingDate, string name, int accountNum, float balance, float intRate, float fee) ;

        /*************
         ** MUTATOR **
         *************/
        void Withdrawal(Date today, float amount) override ;
    private :
        float wFee ;            // PROCESSING - withdrawal fee
} ;

/*************************************************************************************************************
 * MoneyMarket Class : Inherited from Savings Class
 *      This class represents the MoneyMarket object. It manages 5 attributes inherited from the Savings
 *      Class: clientName, acctNumber, currentBalance, openDate, and lastAccessDate. It has a constant
 *      representing the withdrawal fee.
 *************************************************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/*************************************************************************************************************
 * Checking() ;
 *      Constructor :   Initializes class attributes to default values
 *
 *      Parameter   :   none
 *      Return      :   none
 *************************************************************************************************************/

/*************************************************************************************************************
 * Checking(Date openingDate, string name, int accountNum, float balance, float intRate, float fee) ;
 *      Constructor :   Initializes class attributes to passed values
 *
 *      Parameter   :   openingDate (Date)  // IN - date account was opened
 *                      name (string)       // IN - name of account holder
 *                      accountNum (int)    // IN - account number
 *                      balance (float)     // IN - amount being deposited
 *                      intRate (float)     // PROCESSINGS - interest rate
 *                      fee (float)         // PROCESSING - withdrawal fee
 *      Return      :   none
 *************************************************************************************************************/


/*************
 ** MUTATOR **
 *************/

/*************************************************************************************************************
 * void Withdrawal(Date today, float amount) override ;
 *      Mutator   :     Overrides the Withdrawal function of the Account class. Charges a fee for any
 *                      withdrawal
 *
 *      Parameter :     today (Date)    // IN - transaction date
 *                      amount (float)  // IN - amount being withdrawn
 *      Return    :     none
 *************************************************************************************************************/

#endif /* MONEYMARKET_H_ */
