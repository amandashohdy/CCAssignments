/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Project 4
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

package Project4 ;

public class Square implements Shape
{
	private double side ;

	public Square() 
	{ 
		side = 1.0 ; 
	}
	public Square(double s)
	{
		side = s ;
	}
	
	@Override 
	public double getArea()
	{
		return side * side ;
	}
	@Override
	public double getPerimeter()
	{
		return side * 4 ;
	}
}

/****************************************************************************
 * Square Class
 *    The Square class implements the Shape interface and manages 1 
 * attribute: side.
 ****************************************************************************/

 	/************************************************************************
	 * Method Square()
	 *    This contructor sets the side attribute to a default value
	 * POST-CONDITION
	 *    side (double) is set to 1.0
	 ************************************************************************/

	/************************************************************************
	 * Method Square()
	 *    This constructor sets the side attribute to a passed value
	 * PRE-CONDITION
	 *    s (double) - value of side
	 * POST-CONDITION
	 *    The value of attribute side is set to s
	 ************************************************************************/

	/************************************************************************
	 * Method getArea()
	 *    This method calculates and returns the area of a square
	 * POST-CONDITION
	 *    The area of the square is returned
	 ************************************************************************/

	/************************************************************************
	 * Method getPerimeter()
	 *    This method calculates and returns the perimeter of a square
	 * POST-CONDITION
	 *    The perimeter of a square is returned
	 ************************************************************************/
