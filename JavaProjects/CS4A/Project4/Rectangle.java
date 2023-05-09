/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Project 4
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

package Project4 ;

public class Rectangle implements Shape
{
	private double side1 ;
	private double side2 ;

	public Rectangle() 
	{ 
		side1 = 1.0 ; 
		side2 = 1.0 ;
	}
	public Rectangle(double s1, double s2)
	{
		side1 = s1 ;
		side2 = s2 ;
	}	

	@Override 
	public double getArea()
	{
		return side1 * side2 ;
	}
	@Override
	public double getPerimeter()
	{
		return (side1 * 2) + (side2 * 2) ;
	}
}

/****************************************************************************
 * Rectangle Class
 *    The Rectangle class implements the Shape interface and manages 2
 * attributes: side1 and side2.
 ****************************************************************************/

 	/************************************************************************
	 * Method Rectangle()
	 *    This contructor sets the side1 and side2 attributes to default values
	 * POST-CONDITION
	 *    side1 (double) is set to 1.0
	 *    side2 (double) is set to 1.0
	 ************************************************************************/

	/************************************************************************
	 * Method Rectangle()
	 *    This constructor sets the side1 and side2 attributes to passed values
	 * PRE-CONDITION
	 *    s1 (double) - value of side1
	 *    s2 (double) - value of side2
	 * POST-CONDITION
	 *    The value of attribute side1 is set to s1 and side2 is set to s2
	 ************************************************************************/

	/************************************************************************
	 * Method getArea()
	 *    This method calculates and returns the area of a rectangle
	 * POST-CONDITION
	 *    The area of the rectangle is returned
	 ************************************************************************/

	/************************************************************************
	 * Method getPerimeter()
	 *    This method calculates and returns the perimeter of a rectangle
	 * POST-CONDITION
	 *    The perimeter of a rectangle is returned
	 ************************************************************************/
