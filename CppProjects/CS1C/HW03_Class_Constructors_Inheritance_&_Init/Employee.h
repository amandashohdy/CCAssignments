/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW03
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 9 February 2023
**********************************/

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Date.h"
#include <string>
using namespace std ;

class Employee
{
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
		
	/**************
	 ** ACCESSOR **
	 **************/
		void PrintEmployee() const ;
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


/**************
 ** ACCESSOR **
 **************/

/***************************************************************************
 * void PrintEmployee()
 * 		Accessor :		Outputs the employee's information
 * 
 * 		Parameter:		none
 * 		Return   :		none
 ***************************************************************************/
