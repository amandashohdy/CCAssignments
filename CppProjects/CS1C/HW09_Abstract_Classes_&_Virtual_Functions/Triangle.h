/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * Triangle.h
**********************************/

#ifndef TRIANGLE
#define TRIANGLE

#include "Shape.h" 

class Triangle : public Shape
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Triangle() ;
		Triangle(int s1, int s2, int s3) ;

	/***************
	 ** ACCESSORS **
	 ***************/
		float calcPerimeter() override ;
		float calcArea() override ;

	private:
		int s1 ;      // triangle side 1
		int s2 ;      // triangle side 2
		int s3 ;      // triangle side 3
} ;

#endif /* TRIANGLE */

/*******************************************************
 * Triangle Class
 *    This class represents the Triangle object. It 
 * manages 3 attributes: s1, s2, and s3.
 *******************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/*******************************************************
 * Triangle()
 *    Constructor: Initializes class attributes to 
 *                 defaults. 
 * 
 *    Parameters : none
 *    Return     : none
 *******************************************************/

/*******************************************************
 * Triangle(int s1, int s2, int s3)
 *    Constructor: Initializes class attributes to 
 *                 passed values. 
 * 
 *    Parameters : s1 (int) - triangle side 1
 *                 s2 (int) - triangle side 2
 *                 s3 (int) - triangle side 3
 *    Return     : none
 *******************************************************/


/***************
 ** ACCESSORS **
 ***************/

/*******************************************************
 * float calcPerimeter() override
 *    Accessor  : Calculates the perimeter of a triangle
 * 
 *    Parameters: none
 *    Return    : perimeter of triangle (float)
 *******************************************************/

/*******************************************************
 * float calcArea() override
 *    Accessor  : Calculates the area of a triangle
 * 
 *    Parameters: none
 *    Return    : area of triangle (float)
 *******************************************************/