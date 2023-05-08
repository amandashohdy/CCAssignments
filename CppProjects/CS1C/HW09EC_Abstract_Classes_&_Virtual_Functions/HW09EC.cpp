/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09EC
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * HW09EC.cpp
**********************************/

#include "Shapes.h"
#include <iostream>
using namespace std ;

/****************************************************************
 * Function main()
 *     This function creates a Circle and a Rectangle object. The 
 * objects are modified and output to the console as they are 
 * updated. 
 * 
 * INPUT
 *     none
 * OUTPUT
 *     The Circle and Rectangle objects as they are updated are 
 * output to the console. 
 ****************************************************************/
int main()
{
	cout << endl << endl << endl ;
	cout << "*********************" << endl ;
	cout << "*** AMANDA SHOHDY ***" << endl ;
	cout << "***    HW09EC     ***" << endl ;
	cout << "*********************" << endl << endl << endl ;

	cout << "*******************" << endl ;
	cout << "** CIRCLE OBJECT **" << endl ;
	cout << "*******************" << endl ;
	Circle myCircle{5, 10, 8} ;      // circle object
	cout << endl << "* INITIAL CIRCLE *" << endl ;
	myCircle.PrintShape() ;
	cout << endl << "* UPDATE DIMENSIONS *" << endl ;
	myCircle.UpdateDimensions() ;    // update object dimensions
	myCircle.PrintShape() ;
	cout << endl << "* MOVE *" << endl ;
	myCircle.Move() ;                // move circle object
	cout << endl << "* FINAL CIRCLE *" << endl ;
	myCircle.PrintShape() ;

	cout << endl << endl << endl ;
	cout << "**********************" << endl ;
	cout << "** RECTANGLE OBJECT **" << endl ;
	cout << "**********************" << endl ;
	Rectangle myRect{12, -8, 7, 9} ;  // rectangle object
	cout << endl << "* INITIAL RECTANGLE *" << endl ;
	myRect.PrintShape() ;
	cout << endl << "* UPDATE DIMENSIONS *" << endl ;
	myRect.UpdateDimensions() ; // update object dimensions
	myRect.PrintShape() ;
	cout << endl << "* MOVE *" << endl ;
	myRect.Move() ;      // move rectangle object
	cout << endl << "* FINAL RECTANGLE *" << endl ;
	myRect.PrintShape() ;
	cout << endl << endl << endl ;
}

// (3) I don't think we need to override the Move function 
//     for the derived classes because the x and y values 
//     are managed by the base class, meaning the base
//     class is responsible for moving all of the shapes.

// (4) For the Print function, early binding is 
//     occuring. For the UpdateDimensions function,
//     late binding is occuring. Static binding 
//     happens at compile time. Dynamic
//     binding happens at run time. In static
//     polymorphism, the function call is settled at
//     compile time. In dynamic polymorphism, the 
//     function call is settled at run time. 
