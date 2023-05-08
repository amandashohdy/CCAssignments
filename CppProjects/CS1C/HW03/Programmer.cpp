/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW02
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 26 January 2023
**********************************/

#include "Programmer.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std ;

/***********************************************************************************
 * Method Programmer(): Class Programmer
 * 		This constructor initializes class attributes to default values.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		Class attributes are initialized to default values. 
 ***********************************************************************************/
Programmer::Programmer()
: Employee(), departmentNumber{9999999}, supervisorName{"N/A"}, percentSalaryIncrease{-1.0},
	knowsCpp{false}, knowsJava{false} { }

/***********************************************************************************
 * Method Programmer(): Class Programmer
 * 		This constructor initializes class attributes to passed values.
 * 
 * PRE-CONDITIONS
 * 		eName (string) 		- programmer name
 * 		eID (int) 			- programmer ID
 * 		eNumber (string)	- programmer phone number
 * 		eAge (int)			- programmer age
 * 		eGender (char)		- programmer gender
 * 		eTitle (string)		- programmer job title
 * 		eSalary (float)		- programmer salary
 * 		eHire (Date)		- programmer hire date
 * 		depNum (int)		- programmer department
 * 		supName (string)	- programmer supervisor name
 * 		perSalaryInc(float)	- programmer percent salary increase
 * 		cpp (bool)			- programmer knows cpp
 * 		java (bool)			- programmer knows java
 * POST-CONDITIONS
 * 		Class attributes are initialized to passed values.
 ***********************************************************************************/
Programmer::Programmer(string eName, int eID, string eNumber, int eAge, char eGender, 
					   string eTitle, float eSalary, Date eHire, int depNum, 
					   string supName, float perSalaryInc, bool cpp, bool java)
: Employee(eName, eID, eNumber, eAge, eGender, eTitle, eSalary, eHire), departmentNumber{depNum}, 
	supervisorName{supName}, percentSalaryIncrease{perSalaryInc}, knowsCpp{cpp}, knowsJava{java}
{ }

/***********************************************************************************
 * Method UpdateDepNum(): Class Programmer
 * 		Updates the departmentNumber attribute of the programmer.
 * 	PRE-CONDITIONS
 * 		newNum (int) - updated department number
 * 	POST-CONDITIONS
 * 		The departmentNumber attribute is updated to newNum. There is no return value.
 * 
 * 
 * Method UpdateSupName(): Class Programmer
 * 		Updates the supervisorName attribute of the programmer.
 * 	PRE-CONDITIONS
 * 		newSupName (string) - updated supervisor's name
 * 	POST-CONDITIONS
 * 		The supervisorName attribute is updated to newSupName. There is no return value.
 * 
 * 
 * Method UpdatePerSalary(): Class Programmer
 * 		Updates the percentSalaryIncrease attribute of the programmer.
 * 	PRE-CONDITIONS
 * 		newPerSalary (float) - updated percent salary increase
 * 	POST-CONDITIONS
 * 		The percentSalaryIncrease attribute is updated to newPerSalary. There is no 
 * 		return value.
 * 
 * 
 * Method UpdateCpp(): Class Programmer
 * 		Updates the knowsCpp attribute of the programmer.
 * 	PRE-CONDITIONS
 * 		newCpp (bool) - updated knowledge of cpp
 * 	POST-CONDITIONS
 * 		The knowsCpp attribute is updated to newCpp. There is no return value.
 * 
 * 
 * Method UpdateJava(): Class Programmer
 * 		Updates the knowsJava attribute of the programmer.
 * 	PRE-CONDITIONS
 * 		newJava (bool) - updated knowledge of java
 * 	POST-CONDITIONS
 * 		The knowsJava attribute is updated to newJava. There is no return value.
 ***********************************************************************************/
void Programmer::UpdateDepNum(int newNum) {departmentNumber = newNum ;}
void Programmer::UpdateSupName(string newSupName) {supervisorName = newSupName ;}
void Programmer::UpdatePerSalary(float newPerSalary) {percentSalaryIncrease = newPerSalary ;}
void Programmer::UpdateCpp(bool newCpp) {knowsCpp = newCpp ;}
void Programmer::UpdateJava(bool newJava) {knowsJava = newJava ;}

/***********************************************************************************
 * Method PrintEmployee()
 * 		This method outputs the programmer's information.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The programmer's information is output. There is no return value.
 ***********************************************************************************/
void Programmer::PrintEmployee() const
{
	Employee::PrintEmployee() ;
	cout << left << "                 " ;
	cout << setw(12) << "Department" << setw(19) << "Supervisor's Name" << setw(10) << 
			"Raise %" << setw(10) << "Knows C++" << setw(10) << "Knows Java" << endl ;
	cout << "                 " << setw(12) << departmentNumber << setw(19) << 
	supervisorName << setw(10) << percentSalaryIncrease << setw(10) ;
	if (knowsCpp)
		cout << "Yes" ;
	else 
		cout << "No" ;
	cout << setw(10) ;
	if (knowsJava)
		cout << "Yes" ;
	else  
		cout << "No" ;
	cout << endl << endl ;
}