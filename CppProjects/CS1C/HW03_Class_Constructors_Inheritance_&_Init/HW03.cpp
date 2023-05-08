/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW03
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 9 February 2023
**********************************/

#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"
#include <iostream> 
#include <string>
using namespace std ;

/****************************************************************************************************************
 * Function main()
 * 		This function creates employee objects using default constructors and alternate constructors of the 
 * employee class and its derived classes, programmer and software architect. 
 * 
 * INPUT
 * 		none
 * OUTPUT
 * 		The initial employees are output to the console. The default employees are output to the console before
 * and after modification. 
 ****************************************************************************************************************/
int main()
{
	// employee objects
	Employee defaultEmployee ;
	Employee employee("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian", 100000, Date(8, 31, 2014)) ;
	// programmer objects
	Programmer defaultProgrammer ;
	Programmer programmer("Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", 223000, Date(12, 24, 2011), 
						   5432122, "Joe Boss", 4, true, false) ;
	// software architect objects
	SoftwareArchitect defaultArchitect ;
	SoftwareArchitect architect("Sally Designer", 88888, "819-123-4444", 31, 'F', "Architect", 323000, Date(12, 24, 2009), 
								 5434222, "Big Boss", 8, 11) ;

	cout << endl ;
	cout << "***********************************" << endl ;
	cout << "** DEFAULT CONSTRUCTOR EMPLOYEES **" << endl ;
	cout << "***********************************" << endl ;
	cout << endl ;
	defaultEmployee.PrintEmployee() ;	// print default constructor of employee class
	defaultProgrammer.PrintEmployee() ; // print default constructor of programmer class
	defaultArchitect.PrintEmployee() ;  // print default constructor of architect class

	cout << endl ;
	cout << "*************************************" << endl ;
	cout << "** ALTERNATE CONSTRUCTOR EMPLOYEES **" << endl ;
	cout << "*************************************" << endl ;
	cout << endl ;
	employee.PrintEmployee() ;			// print alternate constructor of employee class
	programmer.PrintEmployee() ;		// print alternate constructor of programmer class
	architect.PrintEmployee() ;			// print alternate constructor of architect class

	// modify employee object created with the default constructor to updated values
	cout << endl ;
	cout << "********************************" << endl ;
	cout << "** MODIFYING DEFAULT EMPLOYEE **" << endl ;
	cout << "********************************" << endl ;
	cout << endl ;
	defaultEmployee.PrintEmployee() ;
	defaultEmployee.UpdateName("Katie Couric") ;
	defaultEmployee.UpdateID(77777) ;
	defaultEmployee.UpdateNumber("203-555-6789") ;
	defaultEmployee.UpdateAge(58) ;
	defaultEmployee.UpdateGender('F') ;
	defaultEmployee.UpdateTitle("News Reporter") ;
	defaultEmployee.UpdateSalary(500500) ;
	defaultEmployee.UpdateHireDate(Date(3, 1, 2005)) ;
	defaultEmployee.PrintEmployee() ;

	// modify programmer object created with the default constructor to updated values
	cout << endl ;
	cout << "**********************************" << endl ;
	cout << "** MODIFYING DEFAULT PROGRAMMER **" << endl ;
	cout << "**********************************" << endl ;
	cout << endl ;
	defaultProgrammer.PrintEmployee() ;
	defaultProgrammer.UpdateName("Mary Coder") ;
	defaultProgrammer.UpdateID(65432) ;
	defaultProgrammer.UpdateNumber("310-555-5555") ;
	defaultProgrammer.UpdateAge(28) ;
	defaultProgrammer.UpdateGender('F') ;
	defaultProgrammer.UpdateTitle("Programmer") ;
	defaultProgrammer.UpdateSalary(770123) ;
	defaultProgrammer.UpdateHireDate(Date(2, 8, 2010)) ;
	defaultProgrammer.UpdateDepNum(6543222) ;
	defaultProgrammer.UpdateSupName("Mary Leader") ;
	defaultProgrammer.UpdatePerSalary(7) ;
	defaultProgrammer.UpdateCpp(true) ;
	defaultProgrammer.UpdateJava(true) ;
	defaultProgrammer.PrintEmployee() ;

	// modify architect object created with the default constructor to updated values
	cout << endl ;
	cout << "******************************************" << endl ;
	cout << "** MODIFYING DEFAULT SOFTWARE ARCHITECT **" << endl ;
	cout << "******************************************" << endl ;
	cout << endl ;
	defaultArchitect.PrintEmployee() ;
	defaultArchitect.UpdateName("Alex Arch") ;
	defaultArchitect.UpdateID(88888) ;
	defaultArchitect.UpdateNumber("819-123-4444") ;
	defaultArchitect.UpdateAge(41) ;
	defaultArchitect.UpdateGender('M') ;
	defaultArchitect.UpdateTitle("Architect") ;
	defaultArchitect.UpdateSalary(323000) ;
	defaultArchitect.UpdateHireDate(Date(12, 24, 2009)) ;
	defaultArchitect.UpdateDepNum(5434222) ;
	defaultArchitect.UpdateSupName("Big Boss") ;
	defaultArchitect.UpdatePerSalary(5) ;
	defaultArchitect.UpdateYearsExp(4) ;
	defaultArchitect.PrintEmployee() ;
}
