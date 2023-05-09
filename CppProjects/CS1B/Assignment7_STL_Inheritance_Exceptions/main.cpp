/*********************************
 * AUTHOR       : AMANDA SHOHDY
 * ASSIGNMENT   : ASSIGNMENT 7
 * CLASS        : CS1B
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 12 DECEMBER 2022
 **********************************/

#include <iostream>
#include <fstream>
#include <string>
#include "Bank.h"
#include "Date.h"
#include "TransactionError.h"
#include "mainheader.h"
using namespace std ;

/****************************************************************************************
 * Function Main()
 *      This function takes in the names of three files: the accounts information, the
 *      transaction information, and the output file. The account information is read
 *      and accounts are opened based on that information until the end of the file.
 *      Transactions are then conducted based on the information in the transaction file
 *      until the end of the file.
 *      Main catches and outputs TransactionErrors to the output file.
 ****************************************************************************************/
int main()
{
    Date currentDate ;          // PROCESSING - initialized with month, day, and year
    int month ;                 // IN - month of transaction
    int day ;                   // IN - day of transaction
    int year ;                  // IN - year of transaction
    int accNumber ;             // IN - account number
    string accType ;            // IN - type of account
    float amount ;              // IN - amount of money
    string name ;               // IN - account holder's name
    string action ;             // IN - action being taken with account
    int transferFrom ;          // IN - account money is being transferred from
    Bank bank ;                 // PROCESSING - bank object
    int prevAcct = 0;           // PROCESSING - ensures no repeat accounts

    string accountFile ;        // IN - data for opening accounts file name
    string transaction ;        // IN - data for transactions file name
    string results ;            // IN - output file name

    ifstream dataFile ;
    ofstream resultsFile ;

    cin >> accountFile ;        // read in opening file name
    cin >> transaction ;        // read in transaction file name
    cin >> results ;            // read in output file name

    resultsFile.open(results) ;     // open output file
    printTransactionHeading(resultsFile) ;  // print heading to output file

    dataFile.open(accountFile) ;        // open accounts data
    do
    {
        dataFile >> month ;
        dataFile >> day ;
        dataFile >> year ;
        dataFile >> accNumber ;
        dataFile >> accType ;
        dataFile >> amount ;
        dataFile.ignore() ;
        getline(dataFile, name) ;
        currentDate = Date(month, day, year) ;

        if (prevAcct != accNumber)  // prevents repeat account
        {
            prevAcct = accNumber ;
            bank.OpenAccount(currentDate, accNumber, amount, name, accType) ; // opens account
            // modifies accType to fit heading
            if (accType == "Generic")
                accType = "OPEN GENERIC" ;
            else if (accType == "Savings")
                accType = "OPEN SAVINGS" ;
            else if (accType == "Checking")
                accType = "OPEN CHECKING" ;
            else if (accType == "MoneyMarket")
                accType = "OPEN MONEY MARKET" ;
            printTransactionRow(resultsFile, accType, currentDate, accNumber, name, amount, amount) ;
        }
    } while (!dataFile.eof()) ; // ends loop when reaching the end of the file
    dataFile.close() ;       // closes account data file
    resultsFile << endl ;

    dataFile.open(transaction) ;        // opens transaction data file
    do
    {
        dataFile >> month ;
        dataFile >> day ;
        dataFile >> year ;
        currentDate = Date(month, day, year) ;
        dataFile >> accNumber ;
        dataFile >> amount ;
        dataFile >> action ;
        transferFrom = 0 ;  // if not a transfer, transferFrom remains 0

        try
        {
            if (action == "Deposit")
            {
                bank.Deposit(accNumber, currentDate, amount) ;
                action = " " + action ;
                printTransactionRow(resultsFile, action, currentDate, accNumber, bank.GetName(accNumber), amount, bank.GetBalance(accNumber)) ;
            }
            else if (action == "Withdrawal")
            {
                bank.Withdraw(accNumber, currentDate, amount) ;
                action = " " + action ;
                printTransactionRow(resultsFile, action, currentDate, accNumber, bank.GetName(accNumber), amount, bank.GetBalance(accNumber)) ;
            }
            else if (action == "Transfer")
            {
                dataFile >> transferFrom ;	// if action is transfer, transferFrom is read
                bank.Transfer(accNumber, currentDate, amount, transferFrom) ;
                action = " " + action ;
                printTransactionRow(resultsFile, action, currentDate, accNumber, bank.GetName(accNumber), amount, bank.GetBalance(accNumber), transferFrom, bank.GetBalance(transferFrom)) ;
            }

        }
        catch(TransactionError& errorMessage)
        {	// catches and outputs errors to the results file
            resultsFile << endl ;
            resultsFile << "*** ERROR FOR TRANSACTION: " << action << ", " << errorMessage.what() << " ***" << endl ;
            resultsFile << endl ;
        }
    } while (!dataFile.eof()) ;     // ends loop when reaching the end of the file
    dataFile.close() ;      // closes transaction data file

    resultsFile.close() ;   // closes output file
}

