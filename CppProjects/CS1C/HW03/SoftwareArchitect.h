/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW02
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 26 January 2023
**********************************/

#ifndef SOFTWARE_ARCHITECT_H_
#define SOFTWARE_ARCHITECT_H_

#include "Employee.h"
#include <string>
using namespace std ;

class SoftwareArchitect : public Employee
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		SoftwareArchitect() ;
		SoftwareArchitect(string eName, int eID, string eNumber, int eAge, char eGender, 
		                  string eTitle, float eSalary, Date eHire,int depNum, 
						  string supName, float perSalaryInc, int yearsExp) ;

	/**************
	 ** MUTATORS **
	 **************/
		void UpdateDepNum(int newNum) ;
		void UpdateSupName(string newSupName) ;
		void UpdatePerSalary(float newPerSalary) ;
		void UpdateYearsExp(int newYearsExp) ;

	/**************
	 ** ACCESSOR **
	 **************/
		void PrintEmployee() const ;
	private:
		int departmentNumber ;			// PROCESSING - architect department number
		string supervisorName ;			// PROCESSING - architect supervisor's name
		float percentSalaryIncrease ;	// PROCESSING - architect percent salary inc
		int yearsOfExperience ;			// PROCESSING - architect years experience
} ;

#endif /* SOFTWARE_ARCHITECT_H_ */


/***************************************************************************************
 * SoftwareArchitect Class
 * 		This class is derived from the Employee class. It represents the 
 * SoftwareArchitect object. It manages four attributes: departmentNumber, supervisorName, 
 * percentSalaryIncrease, and yearsOfExperience.
 ***************************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/***************************************************************************************
 * SoftwareArchitect()
 * 		Constructor:	Initializes class attributes to default values
 * 
 * 		Parameters :	none
 * 		Return	   :	none
 ***************************************************************************************/

/***************************************************************************************
 * SoftwareArchitect(string eName, int eID, string eNumber, int eAge, char eGender, 
			  string eTitle, float eSalary, Date eHire, int depNum, string supName, 
			  float perSalaryInc, int yearsExp)
		Constructor:	Initializes class attributes to passed values

		Parameters :	eName (string) 		- architect name
						eID (int) 			- architect ID
						eNumber (string) 	- architect number
						eAge (int)			- architect age
						eGender (char)		- architect gender
						eTitle (string)		- architect job title
						eSalary (float) 	- architect salary
						eHire (Date)		- architect hire date
						depNum (int)		- architect department 
						supName (string)	- architect supervisor name
						perSalaryInc(float) - architect percent salary increase
						yearsExp (int)		- architect years of experience
		Return	   :	none 
 ***************************************************************************************/


/**************
 ** MUTATORS **
 **************/

/***************************************************************************************
 * void UpdateDepNum(int newNum)
 * 		Mutator	 :		Updates the departmentNumber attribute of the architect
 * 
 * 		Parameter:		newNum (int) - architect's updated department number
 * 		Return   : 		none
 ***************************************************************************************/

/***************************************************************************************
 * void UpdateSupName(string newSupName)
 * 		Mutator	 :		Updates the supervisorName attribute of the architect
 * 
 * 		Parameter:		newSupName (string) - architect's updated supervisor name
 * 		Return   : 		none
 ***************************************************************************************/

/***************************************************************************************
 * void UpdatePerSalary(float newPerSalary)
 * 		Mutator	 :		Updates the percentSalaryIncrease attribute of the architect
 * 
 * 		Parameter:		newPerSalary (float) - architect's updated percent salary 
 * 											   increase
 * 		Return   : 		none
 ***************************************************************************************/

/***************************************************************************************
 * void UpdateYearsExp(int newYearsExp)
 * 		Mutator	 :		Updates the yearsOfExperience attribute of the architect
 * 
 * 		Parameter:		newYearsExp (int) - architect's updated years of experience
 * 		Return   : 		none
 ***************************************************************************************/


/**************
 ** ACCESSOR **
 **************/

/***************************************************************************************
 * void PrintEmployee()
 * 		Accessor :		Outputs the architect's information
 * 
 * 		Parameter:		none
 * 		Return   :		none
 ***************************************************************************************/