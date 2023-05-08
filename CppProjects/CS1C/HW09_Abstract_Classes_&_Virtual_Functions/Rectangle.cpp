/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * Rectangle.cpp
**********************************/

#include "Rectangle.h"

/*****************************************************
 * Method Rectangle() : Class Rectangle
 *   This constructor initializes class attributes to 
 *   default values
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The l and w attributes are initialized to 0. 
 *   There is no return value. 
 *****************************************************/
Rectangle::Rectangle()
: l{0}, w{0} {}

/*****************************************************
 * Method Rectangle() : Class Rectangle
 *   This constructor initializes class attributes to
 *   passed values
 * 
 * PRE-CONDITIONS
 *   l (int) - rectangle length
 *   w (int) - rectangle width
 * POST-CONDITIONS
 *   The class attributes are initialized to passed
 *   values. There is no return value. 
 *****************************************************/
Rectangle::Rectangle(int l, int w)
: l{l}, w{w} {} 

/*****************************************************
 * Method calcPerimeter() : Class Rectangle
 *   This method calculates and returns the perimeter
 *   of a rectangle.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The perimeter of a rectangle is calculated and 
 *   returned. 
 *****************************************************/
float Rectangle::calcPerimeter() 
{
	return (l * 2) + (w * 2) ;
}

/*****************************************************
 * Method calcArea : Class Rectangle
 *   This method calculates and returns the area of a
 *   rectangle. 
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The area of a rectangle is calculated and
 *   returned.
 *****************************************************/
float Rectangle::calcArea()
{
	return (l * w) ;
}