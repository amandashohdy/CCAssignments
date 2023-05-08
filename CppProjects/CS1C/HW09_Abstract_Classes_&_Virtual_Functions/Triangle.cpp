/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * Triangle.cpp
**********************************/

#include "Triangle.h"
#include <cmath>

/*****************************************************
 * Method Triangle() : Class Triangle
 *   This constructor initializes class attributes to 
 *   default values
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The s1, s2, and s3 attributes are initialized to 
 *   0. There is no return value. 
 *****************************************************/
Triangle::Triangle()
: s1{0}, s2{0}, s3{0} {} 

/*****************************************************
 * Method Triangle() : Class Triangle
 *   This constructor initializes class attributes to
 *   passed values
 * 
 * PRE-CONDITIONS
 *   s1 (int) - first side length
 *   s2 (int) - second side length
 *   s3 (int) - third side length
 * POST-CONDITIONS
 *   The class attributes are initialized to passed
 *   values. There is no return value. 
 *****************************************************/
Triangle::Triangle(int s1, int s2, int s3)
: s1{s1}, s2{s2}, s3{s3} {}

/*****************************************************
 * Method calcPerimeter() : Class Triangle
 *   This method calculates and returns the perimeter
 *   of a triangle.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The perimeter of a triangle is calculated and 
 *   returned. 
 *****************************************************/
float Triangle::calcPerimeter()
{
	return s1 + s2 + s3 ;
}

/*****************************************************
 * Method calcArea : Class Triangle
 *   This method calculates and returns the area of a
 *   triangle. 
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The area of a triangle is calculated and
 *   returned.
 *****************************************************/
float Triangle::calcArea()
{
	float s = (float)(s1 + s2 + s3) / 2 ;
	float area = sqrt(s * (s - s1) * (s - s2) * (s - s3)) ;
	return area ;
}