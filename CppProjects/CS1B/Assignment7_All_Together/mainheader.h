// this file is called mainheader.h
/**********************************************************
 * AUTHOR        : George Eaton
 **********************************************************/

#ifndef MAINHEADER_H_
#define MAINHEADER_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <string>

#include "Date.h"
#include "Bank.h"
#include "TransactionError.h"

using namespace std;




// Function prototypes

/**********************************************************
 *
 * FUNCTION printTransactionHeading
 *_________________________________________________________
 *
 *   This function prints the transaction table heading
 ***********************************************************/
void printTransactionHeading(ofstream &outputFile); // IN - output file stream


/**********************************************************
 *
 * FUNCTION printTransactionRow
 *_________________________________________________________
 *
 *   This function prints the transaction table row
 *   Note that the last two parameters are optional and if left
 *   out in a call will use the default values below
 ***********************************************************/
void printTransactionRow(ofstream &outputFile,	// IN - output file stream
						 string transType,		      // IN - type of transaction
						 Date transDate,		         // IN - transaction date
						 int acctNum,			         // IN - account number
						 string name,			         // IN - account holder name
						 float amount,			         // IN - amount of transaction
						 float balance,			      // IN - account balance
						 int transFromAcctNum=0,	   // IN - transfer from acct#
						 float fromAcctBalance=0.0);  // IN - trans from acct bal


#endif /* MAINHEADER_H_ */
