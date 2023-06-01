// this file is called functions.cpp
/**********************************************************
 * AUTHOR        : George Eaton
 **********************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Date.h"

using namespace std;

/**********************************************************
 *
 * FUNCTION printTransactionHeading
 *_________________________________________________________
 *
 *   This function prints the transaction table heading
 *_________________________________________________________
 *
 * PRE-CONDITIONS
 * None.
 *
 * POST-CONDITIONS
 * None.
 *
 ***********************************************************/
void printTransactionHeading(ofstream &outputFile) // IN - output file stream
{

	outputFile << setw(18) << left  << "TRANSACTION" << "  "
			   << setw(10) << left  << "DATE"		 << "  "
			   << setw(6)  << left  << "ACCT #"		 << "  "
			   << setw(20) << left  << "ACCT NAME"   << "  "
			   << setw(10) << right << "AMOUNT"		 << "  "
			   << setw(13) << right << "BALANCE"	 << "    "
			   << setw(10) << left  << "FROM ACCT#"	 << "    "
			   << setw(13) << left  << "FROM ACCT BAL" << endl;
	outputFile << setw(18) << left  << "------------" << "  "
			   << setw(10) << left  << "----------"		 << "  "
			   << setw(6)  << left  << "-----"		 << "  "
			   << setw(20) << left  << "--------------------"   << "  "
			   << setw(10) << right << "----------"		 << "  "
			   << setw(13) << right << "-------------"	 << "    "
			   << setw(10) << left  << "----------"	 << "    "
			   << setw(13) << left  << "-------------" << endl;

}


/**********************************************************
 *
 * FUNCTION printTransactionRow
 *_________________________________________________________
 *
 *   This function prints a transaction table row
 *_________________________________________________________
 *
 * PRE-CONDITIONS
 * transFromAcctNum parameter should be set to 0 if the transaction is
 * not a transfer.
 *
 * POST-CONDITIONS
 * None.
 *
 ***********************************************************/
void printTransactionRow(ofstream &outputFile,	// IN - output file stream
						 string transType,		// IN - type of transaction
						 Date transDate,		// IN - transaction date
						 int acctNum,			// IN - account number
						 string name,			// IN - account holder name
						 float amount,			// IN - amount of transaction
						 float balance,			// IN - account balance
						 int transFromAcctNum,	// IN - transfer from acct#, set to 0 if not a transfer
						 float fromAcctBalance)	// IN - trans from acct bal
{

	outputFile << setw(18) << left  << transType 	 			<< "  "
			   << setw(10) << left  << transDate.DisplayDate() 	<< "  "
			   << setw(6)  << left  << acctNum		 			<< "  "
			   << setw(20) << left  << name   					<< "  $"
			   << setw(9) << right  << fixed << setprecision(2)
			   	   	   	   	   	    << amount		 			<< "  $"
			   << setw(12) << right << balance	 				<< "    ";

	 // output additional transaction details for a transfer
	if (transFromAcctNum != 0)
		outputFile
			   << setw(10) << left  << transFromAcctNum	 		<< "    $"
			   << setw(12) << right << fixed << setprecision(2)
			   	   	   	   	   	    << fromAcctBalance;

	outputFile << endl;

}
