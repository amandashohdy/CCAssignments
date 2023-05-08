/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW04
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 13 February 2023
 * 
 * Date.cpp
**********************************/

#include "Date.h" 
#include <string>
#include <iostream>
using namespace std ;

/************************************************
 * Method Date(): Class Date
 * 		This method is a constructor that 
 * initializes the year, month, and day members.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The members year, month, and day are 
 * initialized to their default values.
 ************************************************/
Date::Date()
: year{9999}, month{1}, day{1} { }

/************************************************
 * Method Date(): Class Date
 * 		This method is a constructor that 
 * initializes the year, month, and day members.
 * 
 * PRE-CONDITIONS
 * 		int mm - month of the date
 * 		int dd - day of the date
 * 		int yy - year of the date
 * POST-CONDITIONS
 * 		The members year, month, and day are 
 * initialized to their passed values.
 ************************************************/
Date::Date(int mm, int dd, int yy) 
: year{yy}, month{mm}, day{dd} { }

/************************************************
 * Method PrintDate(): Class Date
 * 		This method outputs the date.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The date is output to the console.
 ************************************************/
void Date::PrintDate() const
{
	cout << (month) << "/" << day << "/" << year ;
}
