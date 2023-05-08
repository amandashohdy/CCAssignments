/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * Shape.h
**********************************/

#ifndef SHAPE
#define SHAPE

class Shape
{
	public :
	/***************
	 ** ACCESSORS ** 
	 ***************/
		virtual float calcPerimeter() = 0 ;
		virtual float calcArea() = 0 ;
} ;

#endif /*  SHAPE  */

/*************************************************
 * Shape Abstract Class
 *    This abstract class represents the Shape 
 * object. It does not manage attributes.
 *************************************************/


/***************
 ** ACCESSORS **
 ***************/

/*************************************************
 * virtual double calcPerimeter()
 *    pure virtual function.
 *************************************************/

/*************************************************
 * virtual double calcArea()
 *    pure virtual function.
 *************************************************/