/*********************************
 * AUTHOR		: Amanda Shohdy
 * ASSIGNMENT	: Assignment 5
 * CLASS			: CS1B
 * SECTION		: MW 1:30 - 3:50p
 * DUE DATE		: 7 November 2022
 **********************************/

#include "Encyclopedia.h"
#include <string>
#include <iostream>
using namespace std ;

/***************************************************************************
 * Method SetEdition: Class Encyclopedia
 * 		This method sets the edition attribute of the encyclopedia class
 *
 * PRE-CONDITIONS
 * 		userEdition		: edition input by the user
 * POST-CONDITIONS
 * 		edition attribute is assigned to the value of userEdition. There
 * 		is no return value.
 ***************************************************************************/
void Encyclopedia::SetEdition(string userEdition)
{
	edition = userEdition ;
}

/***************************************************************************
 * Method SetNumVolumes: Class Encyclopedia
 * 		This method sets the numVolumes attribute of the encyclopedia class
 *
 * PRE-CONDITIONS
 * 		userVolumes		: number of volumes input by the user
 * POST-CONDITIONS
 * 		numVolumes attribute is assigned to the value of userVolumes. There
 * 		is no return value.
 ***************************************************************************/
void Encyclopedia::SetNumVolumes(int userVolumes)
{
	numVolumes = userVolumes ;
}

/***************************************************************************
 * Method GetEdition: Class Encyclopedia
 * 		This method returns the edition attribute.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		edition attribute is returned.
 ***************************************************************************/
string Encyclopedia::GetEdition() const
{
	return edition ;
}

/***************************************************************************
 * Method GetNumVolumes: Class Encyclopedia
 * 		This method returns the numVolumes attribute.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		numVolumes attribute is returned.
 ***************************************************************************/
int Encyclopedia::GetNumVolumes() const
{
	return numVolumes ;
}

/***************************************************************************
 * Method PrintInfo: Class Encyclopedia
 * 		This method outputs the information of an encyclopedia object
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The information of an encyclopedia object is output.
 ***************************************************************************/
void Encyclopedia::PrintInfo()
{
	Book::PrintInfo() ;
	cout << "   Edition: " << edition << endl ;
	cout << "   Number of Volumes: " << numVolumes << endl ;
}


