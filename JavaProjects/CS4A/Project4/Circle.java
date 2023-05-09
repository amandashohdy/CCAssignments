/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Project 4
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

package Project4 ;

import java.lang.Math ;

public class Circle implements Shape
{
	private double radius ;

	public Circle() 
	{ 
		radius = 1.0 ; 
	}
	public Circle(double r)
	{
		radius = r ;
	}

	@Override 
	public double getArea()
	{
		return Math.PI * Math.pow(radius, 2) ;
	}
	@Override
	public double getPerimeter()
	{
		return 2 * Math.PI * radius ;
	}
}

/****************************************************************************
 * Circle Class
 *    The Circle class implements the Shape interface and manages 1 
 * attribute: radius.
 ****************************************************************************/

 	/************************************************************************
	 * Method Circle()
	 *    This contructor sets the radius attribute to a default value
	 * POST-CONDITION
	 *    radius (double) is set to 1.0
	 ************************************************************************/

	/************************************************************************
	 * Method Circle()
	 *    This constructor sets the radius attribute to a passed value
	 * PRE-CONDITION
	 *    r (double) - value of radius
	 * POST-CONDITION
	 *    The value of attribute radius is set to r
	 ************************************************************************/

	/************************************************************************
	 * Method getArea()
	 *    This method calculates and returns the area of a circle
	 * POST-CONDITION
	 *    The area of the circle is returned
	 ************************************************************************/

	/************************************************************************
	 * Method getPerimeter()
	 *    This method calculates and returns the perimeter (circumference) of 
	 *    a circle
	 * POST-CONDITION
	 *    The perimeter of a circle is returned
	 ************************************************************************/

