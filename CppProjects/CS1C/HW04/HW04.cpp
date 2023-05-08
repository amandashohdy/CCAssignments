/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW04
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 13 February 2023
 * 
 * HW04.cpp
**********************************/

#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"
#include <iostream> 
#include <string>
using namespace std ;

/****************************************************************************************************************
 * Function Main()
 * 		This function contains an Employee object and a Programmer object. Their phone numbers are compared using 
 * a member function and the overloaded equality operator. The Programmer's age is updated using a member 
 * function. The Employee's age is updated using the overloaded addition operator. A new Employee is read in using
 * the overloaded istream operator and output using the overloaded ostream operator before and after modifying the
 * age of the new Employee using the pre and post increment operators. 
 * 
 * INPUT
 * 		none
 * OUTPUT
 * 		The initial employees are output to the console. The objects are output to the console before and after 
 * modification. 
 ****************************************************************************************************************/
int main()
{

	// header
	cout << endl ;
	cout << " *********************" << endl ;
 	cout << " *** AMANDA SHOHDY *** " << endl ;
 	cout << " ***      HW04     *** " << endl ;
	cout << " *********************" << endl ;
	cout << endl ;

	// create an employee and a programmer object
	Employee myEmployee("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian", 100000, Date(8, 31, 2014)) ;
	Programmer myProgrammer("Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", 223000, Date(12, 24, 2011), 
						   5432122, "Joe Boss", 4, true, false) ;

	cout << "**********************************************" << endl ;
	cout << "* COMPARE PHONE NUMBERS WITH FRIEND FUNCTION *" << endl ;
	cout << "**********************************************" << endl << endl ;

	myEmployee.PrintEmployee() ;
	myProgrammer.PrintEmployee() ;
	SameNumber(myEmployee, myProgrammer) ;	// uses friend function to compare different phone numbers

	myEmployee.UpdateNumber("819-123-4567") ;	// update a phone number
	myEmployee.PrintEmployee() ;
	myProgrammer.PrintEmployee() ;
	SameNumber(myEmployee, myProgrammer) ;	// uses friend funtion to compare same phone numbers
	cout << endl ;

	cout << "********************************************" << endl ;
	cout << "* ADD TO EMPLOYEE AGE WITH MEMBER FUNCTION *" << endl ;
	cout << "********************************************" << endl << endl ;

	myProgrammer.PrintEmployee() ;
	myProgrammer.AddToAge(2) ;		// use member function to add 2 years to age
	myProgrammer.PrintEmployee() ;

	cout << "***********************************************************" << endl ;
	cout << "* COMPARE PHONE NUMBERS WITH OVERLOADED EQUALITY OPERATOR *" << endl ;
	cout << "***********************************************************" << endl << endl ;

	myEmployee.PrintEmployee() ;
	myProgrammer.PrintEmployee() ;
	if (myEmployee == myProgrammer)		// use overloaded operator to compare same phone numbers
		cout << myEmployee.GetName() << " and " << myProgrammer.GetName() 
		<< " have the same phone number."  << endl << endl ;
	else 
		cout << myEmployee.GetName() << " and " << myProgrammer.GetName() 
		<< " do not have the same phone number."  << endl << endl ;

	myEmployee.UpdateNumber("949-555-1234") ;	// update a phone number
	myEmployee.PrintEmployee() ;
	myProgrammer.PrintEmployee() ;
	if (myEmployee == myProgrammer)		// user overloaded operator to compare differnt phone numbers
		cout << myEmployee.GetName() << " and " << myProgrammer.GetName() 
		<< " have the same phone number."  << endl << endl ;
	else 
		cout << myEmployee.GetName() << " and " << myProgrammer.GetName() 
		<< " do not have the same phone number."  << endl << endl ;

	cout << "*********************************************************" << endl ;
	cout << "* ADD TO EMPLOYEE AGE WITH OVERLOADED ADDITION OPERATOR *" << endl ;
	cout << "*********************************************************" << endl << endl ;

	myEmployee.PrintEmployee() ;
	myEmployee + 3 ;		// add to employee age using overloaded addition operator
	myEmployee.PrintEmployee() ;

	cout << "*******************************************************************" << endl ;
	cout << "* READ IN AND OUTPUT EMPLOYEE WITH OVERLOADED >> AND << OPERATORS *" << endl ;
	cout << "*******************************************************************" << endl << endl ;

	Employee newEmployee ;
	cin >> newEmployee ;		// read in employee using overloaded operator
	cout << newEmployee ;		// output employee using overloaded operator

	cout << "*******************************************************************************" << endl ;
	cout << "* EC: INCREMENT EMPLOYEE AGE WITH OVERLOADED PRE AND POST INCREMENT OPERATORS *" << endl ;
	cout << "*******************************************************************************" << endl << endl ;

	cout << newEmployee ;
	++newEmployee ;		// add 1 to employee age using overloaded pre-increment operator
	cout << newEmployee ;
	newEmployee++ ;		// add 1 to employee age using overloaded post-increment operator
	cout << newEmployee ;
}
