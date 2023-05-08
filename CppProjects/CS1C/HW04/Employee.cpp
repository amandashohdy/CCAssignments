/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW04
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 13 February 2023
 * 
 * Employee.cpp
**********************************/

#include "Employee.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std ;


/***********************************************************************************
 * Method SameNumber()
 * 		This method compares two employee phone numbers.
 * 
 * PRE-CONDITIONS
 * 		emp1 (const Employee) - first employee
 * 		emp2 (const Employee) - second employee
 * POST-CONDITIONS
 * 		A message of whether or not the two employees have the same phone number
 * 		is output. There is no return value. 
 ***********************************************************************************/
void SameNumber(const Employee emp1, const Employee emp2)
{
	if (emp1.phoneNumber == emp2.phoneNumber)
	{
		cout << emp1.name << " and " << emp2.name 
		<< " have the same phone number." << endl << endl ;
	}
	else
	{
		cout << emp1.name << " and " << emp2.name 
		<< " do not have the same phone number." << endl << endl ;
	}
}

/***********************************************************************************
 * Method operator<<(): Class Employee
 * 		This method overloads the << operator to output the information of an 
 * 		employee
 * 
 * 	PRE-CONDITIONS
 * 		os (ostream)
 * 		emp (const Employee) - employee being output
 * 	POST-CONDITIONS
 * 		An employee's information is output to the console. There os object is
 * 		returned.
 ***********************************************************************************/
ostream& operator<<(ostream& os, const Employee& emp) 
{
	cout << "-----------------------------------------------------" <<
			"-----------------------------------------------------" << endl ;
	cout << left ;
	cout << setw(17) << "Name" << setw(12) << "ID" << setw(19) << "Phone #" << 
			setw(10) <<	"Age" << setw(10) << "Gender" << setw(15) << "Job Title" << 
			setw(10) << "Salary" << "Hire Date" << endl ;
	cout << setw(17) << emp.name << setw(12) << emp.ID << setw(19) << emp.phoneNumber <<
			setw(10) << emp.age << setw(10) << emp.gender << setw(15) << emp.jobTitle <<
			"$" << setw(9) << emp.salary ;
	Date print = emp.hireDate ;
	print.PrintDate() ;
	cout << endl << endl ;
	
	return os ;
}

/***********************************************************************************
 * Method operator>>(): Class Employee
 * 		This method overloads the >> operator to read in the information of an 
 * 		employee.
 * 
 * 	PRE-CONDITIONS
 * 		is (istream)
 * 		emp (const Employee) - employee being read in
 * 	POST-CONDITIONS 
 * 		The current employee's information is read in and stored. The is object is 
 * 		returned. 
 ***********************************************************************************/
istream& operator>>(istream& is, Employee& emp)
{
	string userName, userNumber, userTitle ;
	int userID, userAge ;
	char userGender ;
	float userSalary ;
	int month, day, year ;
	cout << "Name: " ;
	getline(cin, userName) ;
	cout << "ID: " ;
	cin >> userID ;
	cout << "Phone Number: " ;
	cin >> userNumber ;
	cout << "Age: " ;
	cin >> userAge ;
	cout << "Gender: " ;
	cin >> userGender ;
	cin.ignore() ;
	cout << "Job Title: " ;
	getline(cin, userTitle) ;
	cout << "Salary: " ;
	cin >> userSalary ;
	cout << "Hire Date Month: " ;
	cin >> month ; 
	cout << "Hire Date Day: " ;
	cin >> day ;
	cout << "Hire Date Year: " ;
	cin >> year ;
	Date userHireDate(month, day, year) ;
	emp.name = userName ;
	emp.ID = userID ;
	emp.phoneNumber = userNumber ;
	emp.age = userAge ;
	emp.gender = userGender ;
	emp.jobTitle = userTitle ;
	emp.salary = userSalary ;
	emp.hireDate = userHireDate ; 

	return is ;
}

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
 * Method AddToAge(): Class Employee
 * 		Adds to the current age of the employee
 * 	PRE-CONDITIONS
 * 		years (int) - years being added to employee's age
 * 	POST-CONDITIONS
 * 		The age attribute is updated to age + years. The amount of years added are
 * 		output to the console. There is no return value.
 ***********************************************************************************/
void Employee::AddToAge(int years) 
{
	age += years ;
	cout << "*** " << years << " years have been added to " << name << "'s age ***" 
	<< endl << endl ;
}

/***********************************************************************************
 * Method operator==(): Class Employee
 * 		Overloads the equality operator to compare two employee's phone numbers
 * 	PRE-CONDITIONS
 * 		compareEmp (const Employee) - employee being compared to current object
 * 	POST-CONDITIONS	
 * 		If the two phone numbers are the same, true is returned. Otherwise, false 
 * 		is returned.d
 ***********************************************************************************/
bool Employee::operator==(const Employee compareEmp)
{
	if (phoneNumber == compareEmp.phoneNumber)
		return true ;
	else 
		return false ;
}

/***********************************************************************************
 * Method operator+(): Class Employee
 * 		Overloads the addition operator to add to the employee's age
 * 	PRE-CONDITIONS
 * 		add (int) - years to add to employee's age
 * 	POST-CONDITIONS
 * 		Employee's age attribute is updated to age + add. A message of how many 
 * 		years were added is output. There is no return value. 
 ***********************************************************************************/
void Employee::operator+(int add) 
{
	age += add ;
	cout << "*** " << add << " years have been added to " << name << "'s age ***" 
	<< endl << endl ;
}

/***********************************************************************************
 * Method operator++(): Class Employee
 * 		Overloads the pre-increment operator to increment the employee's age
 * 	PRE-CONDITIONS 
 * 		none
 * 	POST-CONDITIONS
 * 		Employee's age is increased by 1. There is no return value. 
 ***********************************************************************************/
void Employee::operator++() {++age ;}

/***********************************************************************************
 * Method operator++(): Class Employee
 * 		Overloads the post-increment operator to increment the employee's age
 * 	PRE-CONDITIONS
 * 		none
 * 	POST-CONDITIONS
 * 		Employee's age is increased by 1. There is no return value.
 ***********************************************************************************/
void Employee::operator++(int) {age++ ;}

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

/***********************************************************************************
 * Method GetName(): Class Employee
 * 		This method returns the employee's name.
 * 
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The employee's name is returned.
 ***********************************************************************************/
string Employee::GetName() const {return name ;}
