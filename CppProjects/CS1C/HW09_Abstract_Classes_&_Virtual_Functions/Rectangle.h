/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * Rectangle.h
**********************************/

#ifndef RECTANGLE
#define RECTANGLE

#include "Shape.h" 

class Rectangle : public Shape
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Rectangle() ;
		Rectangle(int l, int w) ;

	/***************
	 ** ACCESSORS **
	 ***************/
		float calcPerimeter() override ;
		float calcArea() override ;

	private:
		int l ;     // rectangle length
		int w ;     // rectangle width
} ;

#endif /* RECTANGLE */

/*******************************************************
 * Rectangle Class
 *    This class represents the Rectangle object. It 
 * manages 2 attributes: l and w.
 *******************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/*******************************************************
 * Rectangle()
 *    Constructor: Initializes class attributes to 
 *                 defaults. 
 * 
 *    Parameters : none
 *    Return     : none
 *******************************************************/

/*******************************************************
 * Rectangle(int l, int w)
 *    Constructor: Initializes class attributes to 
 *                 passed values. 
 * 
 *    Parameters : l (int) - rectangle length
 *                 w (int) - rectangle width
 *    Return     : none
 *******************************************************/


/***************
 ** ACCESSORS **
 ***************/

/*******************************************************
 * float calcPerimeter() override
 *    Accessor  : Calculates the perimeter of a rectangle
 * 
 *    Parameters: none
 *    Return    : perimeter of rectangle (float)
 *******************************************************/

/*******************************************************
 * float calcArea() override
 *    Accessor  : Calculates the area of a rectangle
 * 
 *    Parameters: none
 *    Return    : area of rectangle (float)
 *******************************************************/