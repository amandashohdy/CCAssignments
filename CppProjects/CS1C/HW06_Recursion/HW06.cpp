/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW06
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 February 2023
 * 
 * HW06.cpp
**********************************/

#include <iostream>
#include <string>
using namespace std ;

//function prototypes
string recursiveReverse(string orig, int beginIndex, int endIndex) ;
string iterativeReverse(string orig, int beginIndex, int endIndex) ;

/**************************************************************************
 * Function main()
 *      This function prompts the user for a beginning index and an ending 
 *  index then calls a recursive and an interative function to reverse a 
 *  string from the beginning index to the ending index three times. 
 *
 * INPUT
 *      userBegin (int) - index to begin reversal
 *      userEnd (int) - index to end reversal
 * OUTPUT
 *      The string is output after reversal depending on the beginning and
 *  ending index three times. 
 **************************************************************************/
int main()
{
	cout << endl << endl << endl ;
	cout << "*********************" << endl ;
	cout << "*** AMANDA SHOHDY ***" << endl ;
	cout << "***      HW06     ***" << endl ;
	cout << "*********************" << endl << endl << endl ;
	
	string alpha = "abcdefghijklmnopqrstuvwxyz" ;
	int userBegin ;
	int userEnd ;
	cout << "Original String: " << alpha << endl << endl ;

	cout << endl ;
	cout << "Begin index: " ;
	cin >> userBegin ;
	cout << "End index: " ;
	cin >> userEnd ;
	cout << endl ;

	cout << "*************************************" << endl ;
	cout << "STRING REVERSED RECURSIVELY (" << userBegin << ", " 
	<< userEnd << ")" << endl ;
	cout << "************************************" << endl ;
	cout << recursiveReverse(alpha, userBegin, userEnd) << endl << endl ;

	cout << "****************************************" << endl ;
	cout << "EC: STRING REVERSED ITERATIVELY (" << userBegin << ", " 
	<< userEnd << ")" << endl ;
	cout << "****************************************" << endl ;
	cout << iterativeReverse(alpha, userBegin, userEnd) << endl << endl ;

	cout << endl ;
	cout << "Begin index: " ;
	cin >> userBegin ;
	cout << "End index: " ;
	cin >> userEnd ;
	cout << endl ;

	cout << "*************************************" << endl ;
	cout << "STRING REVERSED RECURSIVELY (" << userBegin << ", " 
	<< userEnd << ")" << endl ;
	cout << "*************************************" << endl ;
	cout << recursiveReverse(alpha, userBegin, userEnd) << endl << endl ;

	cout << "****************************************" << endl ;
	cout << "EC: STRING REVERSED ITERATIVELY (" << userBegin << ", " 
	<< userEnd << ")" << endl ;
	cout << "****************************************" << endl ;
	cout << iterativeReverse(alpha, userBegin, userEnd) << endl << endl ;

	cout << endl ;
	cout << "Begin index: " ;
	cin >> userBegin ;
	cout << "End index: " ;
	cin >> userEnd ;
	cout << endl ;

	cout << "*************************************" << endl ;
	cout << "STRING REVERSED RECURSIVELY (" << userBegin << ", " 
	<< userEnd << ")" << endl ;
	cout << "*************************************" << endl ;
	cout << recursiveReverse(alpha, userBegin, userEnd) << endl << endl ;

	cout << "****************************************" << endl ;
	cout << "EC: STRING REVERSED ITERATIVELY (" << userBegin << ", " 
	<< userEnd << ")" << endl ;
	cout << "****************************************" << endl ;
	cout << iterativeReverse(alpha, userBegin, userEnd) << endl << endl << endl ;
}

/**************************************************************************
 * Method recursiveReverse()
 *      This method uses recursion to reverse a passed string from a passed
 *  beginning index to a passed ending index
 * PRE-CONDITIONS
 *      orig (string) - string being reversed
 *      beginIndex (int) - start of the reversal
 *      endIndex (int) - end of the reversal
 * POST-CONDITIONS
 *      The string with the specified values reversed is returned
 **************************************************************************/
string recursiveReverse(string orig, int beginIndex, int endIndex) 
{
	if (beginIndex >= endIndex)
	{
		return orig ;
	}
	else
	{
		char temp = orig[beginIndex] ;
		orig[beginIndex] = orig[endIndex] ;
		orig[endIndex] = temp ;
		return recursiveReverse(orig, ++beginIndex, --endIndex) ;
	}
} 

/**************************************************************************
 * Method iterativeReverse()
 *      This method uses iteration to reverse a passed string from a passed
 *  beginning index to a passed ending index
 * PRE-CONDITIONS
 *      orig (string) - string being reversed
 *      beginIndex (int) - start of the reversal
 *      endIndex (int) - end of the reversal
 * POST-CONDITIONS
 *      The string with the specified values reversed is returned
 **************************************************************************/
string iterativeReverse(string orig, int beginIndex, int endIndex)
{
	int i = beginIndex ;
	for (int j = endIndex ; j >= i ; j--)
	{
		char temp = orig[i] ;
		orig[i] = orig[j] ;
		orig[j] = temp ;
		i++ ;
	}
	return orig ;
}
