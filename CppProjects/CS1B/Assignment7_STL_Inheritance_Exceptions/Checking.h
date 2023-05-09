/*********************************
 * AUTHOR       : AMANDA SHOHDY
 * ASSIGNMENT   : ASSIGNMENT 7
 * CLASS        : CS1B
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 12 DECEMBER 2022
 **********************************/

#ifndef CHECKING_H_
#define CHECKING_H_

#include "Date.h"
#include "Account.h"
#include <string>

class Checking : public Account
{
    public :

        /******************
         ** CONSTRUCTORS **
         ******************/
        Checking() ;
        Checking(Date openingDate, string name, int accountNum, float balance, float over, float fee) ;

        /**************
         ** MUTATORS **
         **************/
        void Withdrawal(Date today, float amount) override ;
    private :
        float overDraft ;       // PROCESSING - overDraw limit
        float overFee ;         // PROCESSING - overDraw fee
} ;

/*************************************************************************************************
 * Checking Class : Inherited from Account Class
 *      This class represents the Checking object. It manages 5 attributes inherited
 *      from the Account Class: clientName, acctNumber, currentBalance, openDate, and
 *      lastAccessDate. It has constants representing the overdraw limit and the overdraw
 *      fee.
 *************************************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/*************************************************************************************************
 * Checking() ;
 *      Constructor :   Initialize class attributes to defaults
 *
 *      Parameter   :   none
 *      Return      :   none
 *************************************************************************************************/

/*************************************************************************************************
 * Checking(Date openingDate, string name, int accountNum, float balance, float over, float fee) ;
 *      Constructor :   Initialize class attributes to passed values
 *
 *      Parameter	:   openingDate (Date)  // IN - date account was opened
 *                      name (string)       // IN - name of account holder
 *                      accountNum (int)    // IN - account number
 *                      balance (float)     // IN - amount being deposited
 *                      over (float)        // IN - overdraft limit
 *                      fee (float)         // IN - overdraft fee
 *      Return      :   none
 *************************************************************************************************/


/**************
 ** MUTATORS **
 **************/

/*************************************************************************************************
 * void Withdrawal(Date today, float amount) override ;
 *      Mutator   : Overrides the Withdrawal function of the Account class. Handles overdraft
 *                  limits and charges fees for a negative balance.
 *
 *      Parameter :     today (Date)    // IN - transaction date
 *                      amount (float)  // IN - amount being withdrawn
 *      Return    :     none
 *************************************************************************************************/


#endif /* CHECKING_H_ */
