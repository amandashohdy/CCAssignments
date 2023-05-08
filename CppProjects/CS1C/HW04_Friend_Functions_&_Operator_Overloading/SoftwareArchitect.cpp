/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW04
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 13 February 2023
 * 
 * SoftwareArchitect.cpp
**********************************/

#include "SoftwareArchitect.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std ;

/***********************************************************************************
 * Method SoftwareArchitect(): Class SoftwareArchitect
 * 		This constructor initializes class attributes to default values.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		Class attributes are initialized to default values. 
 ***********************************************************************************/
SoftwareArchitect::SoftwareArchitect()
: Employee(), departmentNumber{9999999}, supervisorName{"N/A"}, percentSalaryIncrease{-1.0},
  yearsOfExperience{-99} { }

/***********************************************************************************
 * Method SoftwareArchitect(): Class SoftwareArchitect
 * 		This constructor initializes class attributes to passed values.
 * 
 * PRE-CONDITIONS
 * 		eName (string) 		- software architect name
 * 		eID (int) 			- software architect ID
 * 		eNumber (string)	- software architect phone number
 * 		eAge (int)			- software architect age
 * 		eGender (char)		- software architect gender
 * 		eTitle (string)		- software architect job title
 * 		eSalary (float)		- software architect salary
 * 		eHire (Date)		- software architect hire date
 * 		depNum (int)		- software architect department
 * 		supName (string)	- software architect supervisor name
 * 		perSalaryInc(float)	- software architect percent salary increase
 * 		yearsExp (int)		- software architect years of experience
 * POST-CONDITIONS
 * 		Class attributes are initialized to passed values.
 ***********************************************************************************/
SoftwareArchitect::SoftwareArchitect(string eName, int eID, string eNumber, int eAge, 
									 char eGender, string eTitle, float eSalary, 
									 Date eHire,int depNum, string supName, 
									 float perSalaryInc, int yearsExp)
: Employee(eName, eID, eNumber, eAge, eGender, eTitle, eSalary, eHire), 
		   departmentNumber{depNum}, supervisorName{supName}, 
		   percentSalaryIncrease{perSalaryInc}, yearsOfExperience{yearsExp} { }

/***********************************************************************************
 * Method UpdateDepNum(): Class SoftwareArchitect
 * 		Updates the departmentNumber attribute of the software architect.
 * 	PRE-CONDITIONS
 * 		newNum (int) - updated department number
 * 	POST-CONDITIONS
 * 		The departmentNumber attribute is updated to newNum. There is no return 
 * 		value.
 * 
 * 
 * Method UpdateSupName(): Class SoftwareArchitect
 * 		Updates the supervisorName attribute of the software architect.
 * 	PRE-CONDITIONS
 * 		newSupName (string) - updated supervisor's name
 * 	POST-CONDITIONS
 * 		The supervisorName attribute is updated to newSupName. There is no 
 * 		return value.
 * 
 * 
 * Method UpdatePerSalary(): Class SoftwareArchitect
 * 		Updates the percentSalaryIncrease attribute of the software architect.
 * 	PRE-CONDITIONS
 * 		newPerSalary (float) - updated percent salary increase
 * 	POST-CONDITIONS
 * 		The percenteSalaryIncrease attribute is updated to newPerSalary. There 
 * 		is no return value.
 * 
 * 
 * Method UpdateYearsExp(): Class SoftwareArchitect
 * 		Updates the yearsOfExperience attribute of the software architect.
 * 	PRE-CONDITIONS
 * 		newYearsExp (int) - updated years of experience
 * 	POST-CONDITIONS
 * 		The yearsOfExperience attribute is updated to newYearsExp. There is no 
 * 		return value.
 ***********************************************************************************/
void SoftwareArchitect::UpdateDepNum(int newNum) {departmentNumber = newNum ;}
void SoftwareArchitect::UpdateSupName(string newSupName) {supervisorName = newSupName ;}
void SoftwareArchitect::UpdatePerSalary(float newPerSalary) {percentSalaryIncrease = newPerSalary ;}
void SoftwareArchitect::UpdateYearsExp(int newYearsExp) {yearsOfExperience = newYearsExp ;}

/***********************************************************************************
 * Method PrintEmployee(): Class SoftwareArchitect
 * 		This method outputs the architect's information.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The architect's information is output. There is no return value.
 ***********************************************************************************/
void SoftwareArchitect::PrintEmployee() const
{
	Employee::PrintEmployee() ;
	cout << left << "                 " ;
	cout << setw(12) << "Department" << setw(19) << "Supervisor's Name" << setw(10) << 
			"Raise %" << setw(10) << "Years Experience" << endl ;
	cout << "                 " << setw(12) << departmentNumber << setw(19) << 
			supervisorName << setw(10) << percentSalaryIncrease << setw(10) << 
			yearsOfExperience << endl << endl ;
}
