/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW03
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 9 February 2023
**********************************/

#include "Employee.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std ;


/***********************************************************************************
 * Method Employee(): Class Employee
 * 		This constructor initializes class attributes to default values.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		Class attributes are initialized to default values. 
 ***********************************************************************************/
Employee::Employee()
: name{"John Doe"}, ID{99999}, phoneNumber{"999-999-9999"}, age{99}, gender{'-'}, 
  jobTitle{"N/A"}, salary{999999}, hireDate{Date()} { }

/***********************************************************************************
 * Method Employee(): Class Employee
 * 		This constructor initializes class attributes to passed values.
 * 
 * PRE-CONDITIONS
 * 		eName (string) 		- employee name
 * 		eID (int) 			- employee ID
 * 		eNumber (string)	- employee phone number
 * 		eAge (int)			- employee age
 * 		eGender (char)		- employee gender
 * 		eTitle (string)		- employee job title
 * 		eSalary (float)		- employee salary
 * 		eHire (Date)		- employee hire date
 * POST-CONDITIONS
 * 		Class attributes are initialized to passed values.
 ***********************************************************************************/
Employee::Employee(string eName, int eID, string eNumber, int eAge, char eGender, 
		 		   string eTitle, float eSalary, Date eHire)
: name{eName}, ID{eID}, phoneNumber{eNumber}, age{eAge}, gender{eGender},
  jobTitle{eTitle}, salary{eSalary}, hireDate{eHire} { } 

/***********************************************************************************
 * Method UpdateName(): Class Employee
 * 		Updates the name attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newName (string) - updated name
 * 	POST-CONDITIONS
 * 		The name attribute is updated to newName. There is no return value.
 * 
 * 
 * Method UpdateID(): Class Employee
 * 		Updates the ID attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newID (int) - updated ID 
 * 	POST-CONDITIONS
 * 		The name attribute is updated to newID. There is no return value. 
 * 
 * 
 * Method UpdateNumber(): Class Employee
 * 		Updates the phoneNumber attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newNumber (string) - updated phone number
 * 	POST-CONDITIONS
 * 		The phoneNumber attribute is updated to newNumber. There is no return value.
 * 
 * 
 * Method UpdateAge(): Class Employee
 * 		Updates the age attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newAge (int) - updated age
 * 	POST-CONDITIONS
 * 		The age attribute is updated to newAge. There is no return value.
 * 
 * 
 * Method UpdateGender(): Class Employee
 * 		Updates the gender attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newGender (char) - updated gender
 * 	POST-CONDITIONS
 * 		The gender attribute is updated to newGender. There is no return value.
 * 
 * 
 * Method UpdateTitle(): Class Employee
 * 		Updates the jobTitle attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newTitle (string) - updated job title 
 * 	POST-CONDITIONS
 * 		The jobTitle attribute is updated to newTitle. There is no return value.
 * 
 * 
 * Method UpdateSalary(): Class Employee
 * 		Updates the salary attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newSalary (int) - updated salary
 * 	POST-CONDITIONS
 * 		The salary attribute is updated to newSalary. There is no return value.
 * 
 * 
 * Method UpdateHireDate(): Class Employee
 * 		Updates the hireDate attribute of the employee.
 * 	PRE-CONDITIONS
 * 		newHireDate (Date) - updated hire date
 * 	POST-CONDITIONS
 * 		The hireDate attribute is updated to newHireDate. There is no return value.
 ***********************************************************************************/
void Employee::UpdateName(string newName) {name = newName ;}
void Employee::UpdateID(int newID) {ID = newID ;}
void Employee::UpdateNumber(string newNumber) {phoneNumber = newNumber ;}
void Employee::UpdateAge(int newAge) {age = newAge ;}
void Employee::UpdateGender(char newGender) {gender = newGender ;}
void Employee::UpdateTitle(string newTitle) {jobTitle = newTitle ;}
void Employee::UpdateSalary(int newSalary) {salary = newSalary ;}
void Employee::UpdateHireDate(Date newHireDate) {hireDate = newHireDate ;}

/***********************************************************************************
 * Method PrintEmployee(): Class Employee
 * 		This method outputs the employee's information.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The employee's information is output. There is no return value.
 ***********************************************************************************/
void Employee::PrintEmployee() const
{
	cout << "-----------------------------------------------------" <<
			"-----------------------------------------------------" << endl ;
	cout << left ;
	cout << setw(17) << "Name" << setw(12) << "ID" << setw(19) << "Phone #" << 
			setw(10) <<	"Age" << setw(10) << "Gender" << setw(15) << "Job Title" << 
			setw(10) << "Salary" << "Hire Date" << endl ;
	cout << setw(17) << name << setw(12) << ID << setw(19) << phoneNumber <<
			setw(10) << age << setw(10) << gender << setw(15) << jobTitle <<
			"$" << setw(9) << salary ;
	hireDate.PrintDate() ;
	cout << endl << endl ;
}
