/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW02
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 26 January 2023
 * 
 * Employee.h
**********************************/

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Date.h"
#include <string>
using namespace std ;

class Employee
{
	/*************
	 ** FRIENDS **
	 *************/
	friend void SameNumber(const Employee emp1, const Employee emp2) ;
	friend ostream& operator<<(ostream& os, const Employee& emp) ;
	friend istream& operator>>(istream& is, Employee& emp) ;

	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Employee() ;
		Employee(string eName, int eID, string eNumber, int eAge, char eGender, 
				 string eTitle, float eSalary, Date eHire) ;
		
	/**************
	 ** MUTATORS **
	 **************/
		void UpdateName(string newName) ;
		void UpdateID(int newID) ;
		void UpdateNumber(string newNumber) ;
		void UpdateAge(int newAge) ;
		void UpdateGender(char newGender) ;
		void UpdateTitle(string newTitle) ;
		void UpdateSalary(int newSalary) ;
		void UpdateHireDate(Date newHireDate) ;

		void AddToAge(int years) ;
		
	/***************
	 ** ACCESSORS **
	 ***************/
		void PrintEmployee() const ;
		string GetName() const ;

	/*************************
	 * OVERLOADED OPERATORS **
	 *************************/
		bool operator==(const Employee compareEmp) ;
		void operator+(int add) ;
		void operator++() ;
		void operator++(int) ;
		
	private:
		string name ;			// PROCESSING - employee name
		int ID ;				// PROCESSING - employee ID number
		string phoneNumber ;	// PROCESSING - employee phone number
		int age ;				// PROCESSING - employee age
		char gender ;			// PROCESSING - employee gender
		string jobTitle ;		// PROCESSING - employee job title
		float salary ;			// PROCESSING - employee salary
		Date hireDate ;			// PROCESSING - employee hire date
} ;

#endif /* EMPLOYEE_H_ */


/***************************************************************************
 * Employee Class
 * 		This class represents the Employee object. It manages eight
 * attributes: name, ID, phoneNumber, age, gender, jobTitle, salary, and
 * hireDate. 
 ***************************************************************************/


/*************
 ** FRIENDS **
 *************/

/***************************************************************************
 * void SameNumber()
 * 		Friend	   :	Compares the phone numbers of two employees
 * 
 * 		Parameters :	emp1 (const Employee) - first employee
 * 						emp2 (const Employee) - second employee
 * 		Return	   : 	none
 ***************************************************************************/

/***************************************************************************
 * ostream& operator<<(ostream& os, const Employee& emp)
 * 		Friend   :		Outputs an employee object to the console
 * 
 * 		Parameter:		os (ostream&)
 * 						emp (const Employee&) - employee being output
 * 		Return   :		os
 ***************************************************************************/

/***************************************************************************
 * istream& operator>>(istream& is, Employee& emp)
 * 		Friend   :		Reads in an employee object
 * 
 * 		Parameter:		is (istream&)
 * 						emp (Employee&) - employee being read in
 * 		Return   :		is 
 ***************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/***************************************************************************
 * Employee()
 * 		Constructor:	Initializes class attributes to default values
 * 
 * 		Parameters :	none
 * 		Return	   : 	none
 ***************************************************************************/

/***************************************************************************
 * Employee(string eName, int eID, string eNumber, int eAge, char eGender, 
			string eTitle, float eSalary, Date eHire)
			Constructor:	Initializes class attributes to passed values

			Parameters :	eName (string) 		- employee name
							eID (int) 			- employee ID
							eNumber (string) 	- employee number
							eAge (int)			- employee age
							eGender (char)		- employee gender
							eTitle (string)		- employee job title
							eSalary (float) 	- employee salary
							eHire (Date)		- employee hire date
			Return	   :	none
 ***************************************************************************/


/**************
 ** MUTATORS **
 **************/

/***************************************************************************
 * void UpdateName(string newName)
 * 		Mutator	 :		Updates the name attribute of the employee
 * 
 * 		Parameter:		newName (string) - employee's updated name
 * 		Return   : 		none
 ***************************************************************************/

/***************************************************************************
 * void UpdateID(int newID)
 * 		Mutator	 :		Updates the ID attribute of the employee
 * 
 * 		Parameter:		newID (int) - employee's updated ID
 * 		Return   : 		none
 ***************************************************************************/

/***************************************************************************
 * void UpdateNumber(string newNumber)
 * 		Mutator	 :		Updates the phoneNumber attribute of the employee
 * 
 * 		Parameter:		newNumber (string) - employee's updated number
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void UpdateAge(int newAge)
 * 		Mutator	 :		Updates the age attribute of the employee
 * 
 * 		Parameter:		newAge - employee's updated age
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void UpdateGender(char newGender)
 * 		Mutator	 :		Updates the gender attribute of the employee
 * 
 * 		Parameter:		newGender (char) - employee's updated gender
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void UpdateTitle(string newTitle)
 * 		Mutator	 :		Updates the jobTitle attribute of the employee
 * 
 * 		Parameter:		newTitle (string) - employee's updated job title
 * 		Return   :		none 
 ***************************************************************************/

/***************************************************************************
 * void UpdateSalary(int newSalary)
 * 		Mutator	 :		Updates the salary attribute of the employee
 * 
 * 		Parameter:		newSalary (int) - employee's updated salary
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void UpdateHireDate(Date newHireDate)
 * 		Mutator	 :		Updates the hireDate attribute of the employee
 * 
 * 		Parameter:		newHireDate (Date) - employee's updated hire date
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void AddToAge(int years)
 * 		Mutator	 :		Add the passed value to the age of the employee
 * 
 * 		Parameter:		years (int) - years to add to age
 * 		Return   :		none
 ***************************************************************************/


/***************
 ** ACCESSORS **
 ***************/

/***************************************************************************
 * void PrintEmployee()
 * 		Accessor :		Outputs the employee's information
 * 
 * 		Parameter:		none
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void GetName()
 * 		Accessor :		Returns the name of current employee
 * 
 * 		Parameter:		none
 * 		Return   :		current employee name
 ***************************************************************************/


/*************************
 * OVERLOADED OPERATORS **
 *************************/

/***************************************************************************
 * bool operator==(const Employee compareEmp)
 * 		Accessor :		compares two employee's phone numbers
 * 
 * 		Parameter:		compareEmp (const Employee) - employee to compare
 * 		Return   :		boolean (true or false)
 ***************************************************************************/

/***************************************************************************
 * void operator+(int add) 
 * 		Accessor :		adds to the employee's age
 * 
 * 		Parameter:		add (int) - years to add to employee's age
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void operator++() 
 * 		Accessor :		pre-increments the employee's age
 * 
 * 		Parameter:		none
 * 		Return   :		none
 ***************************************************************************/

/***************************************************************************
 * void operator++(int) 
 * 		Accessor :		post-increments the employee's age
 * 
 * 		Parameter:		(int)
 * 		Return   :		none
 ***************************************************************************/

