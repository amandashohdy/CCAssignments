/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW04
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 13 February 2023
 * 
 * Programmer.h
**********************************/

#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "Employee.h"
#include <string>
using namespace std ;

class Programmer : public Employee
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Programmer() ;
		Programmer(string eName, int eID, string eNumber, int eAge, char eGender, 
				   string eTitle, float eSalary, Date eHire, int depNum, string supName, 
				   float perSalaryInc, bool cpp, bool java) ;

	/**************
	 ** MUTATORS **
	 **************/
		void UpdateDepNum(int newNum) ;
		void UpdateSupName(string newSupName) ;
		void UpdatePerSalary(float newPerSalary) ;
		void UpdateCpp(bool newCpp) ;
		void UpdateJava(bool newJava) ;

	/**************
	 ** ACCESSOR **
	 **************/
		void PrintEmployee() const ;
	private:
		int departmentNumber ;			// PROCESSING - programmer department number
		string supervisorName ;			// PROCESSING - programmer supervisor's name
		float percentSalaryIncrease ;	// PROCESSING - programmer percent salary inc
		bool knowsCpp ;					// PROCESSING - programmer knowledge of cpp
		bool knowsJava ;				// PROCESSING - programmer knowledge of java
} ;

#endif /* PROGRAMMER_H_ */


/***************************************************************************************
 * Programmer Class
 * 		This class is derived from the Employee class. It represents the Programmer 
 * object. It manages five attributes: departmentNumber, supervisorName, 
 * percentSalaryIncrease, knowsCpp, and knowsJava.
 ***************************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/***************************************************************************************
 * Programmer()
 * 		Constructor:	Initializes class attributes to default values
 * 
 * 		Parameters :	none
 * 		Return	   :	none
 ***************************************************************************************/

/***************************************************************************************
 * Programmer(string eName, int eID, string eNumber, int eAge, char eGender, 
			  string eTitle, float eSalary, Date eHire, int depNum, string supName, 
			  float perSalaryInc, bool cpp, bool java)
		Constructor:	Initializes class attributes to passed values

		Parameters :	eName (string) 		- programmer name
						eID (int) 			- programmer ID
						eNumber (string) 	- programmer number
						eAge (int)			- programmer age
						eGender (char)		- programmer gender
						eTitle (string)		- programmer job title
						eSalary (float) 	- programmer salary
						eHire (Date)		- programmer hire date
						depNum (int)		- programmer department 
						supName (string)	- programmer supervisor name
						perSalaryInc(float) - programmer percent salary increase
						cpp (bool)			- programmer knows c++
						java (bool)			- programmer knows java
		Return	   :	none 
 ***************************************************************************************/


/**************
 ** MUTATORS **
 **************/

/***************************************************************************************
 * void UpdateDepNum(int newNum)
 * 		Mutator	 :		Updates the departmentNumber attribute of the programmer
 * 
 * 		Parameter:		newNum (int) - programmer's updated department number
 * 		Return   : 		none
 ***************************************************************************************/

/***************************************************************************************
 * void UpdateSupName(string newSupName)
 * 		Mutator	 :		Updates the supervisorName attribute of the programmer
 * 
 * 		Parameter:		newSupName (string) - programmer's updated supervisor name
 * 		Return   : 		none
 ***************************************************************************************/

/***************************************************************************************
 * void UpdatePerSalary(float newPerSalary)
 * 		Mutator	 :		Updates the percentSalaryIncrease attribute of the programmer
 * 
 * 		Parameter:		newPerSalary (float) - programmer's updated percent salary 
 * 											   increase
 * 		Return   : 		none
 ***************************************************************************************/

/***************************************************************************************
 * void UpdateCpp(bool newCpp)
 * 		Mutator	 :		Updates the knowsCpp attribute of the programmer
 * 
 * 		Parameter:		newCpp (bool) - programmer's updated knowledge of cpp
 * 		Return   : 		none
 ***************************************************************************************/

/***************************************************************************************
 * void UpdateJava(bool newJava)
 * 		Mutator	 :		Updates the knowsJava attribute of the programmer
 * 
 * 		Parameter:		newJava (bool) - programmer's updated knowledge of java
 * 		Return   : 		none
 ***************************************************************************************/


/**************
 ** ACCESSOR **
 **************/

/***************************************************************************************
 * void PrintEmployee()
 * 		Accessor :		Outputs the programmer's information
 * 
 * 		Parameter:		none
 * 		Return   :		none
 ***************************************************************************************/
