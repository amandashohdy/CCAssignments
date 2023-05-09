/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : Project 4
 * CLASS        : CS4A
 * SECTION      : TTH 6:00-6:50p
 * DUE DATE     : 4 May 2023
**********************************/

/*****************************************************************************************
 * This programs takes in user input to calculate the area and the perimeter of three 
 * shapes: circle, square, and rectangle. The program takes in values for the radius and
 * the sides of the circle and square, and then another number for the other side of the 
 * rectangle. A Circle, Square, and Rectangle objects are then created. Next, the area and
 * the perimeter of the three shapes are output. 
 *****************************************************************************************/

package Project4 ;

import java.util.Scanner ;

public class Main 
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in) ;
		System.out.println("Enter a SINGLE number. This will be used for the circle radius, " + 
		" the square's side, and one side of the rectangle: ") ;
		double num1 = input.nextDouble() ;
		System.out.println("Enter the other side of the rectangle:") ;
		double num2 = input.nextDouble() ;

		Circle circle = new Circle(num1) ;
		Square square = new Square(num1) ;
		Rectangle rectangle = new Rectangle(num1, num2) ;

		System.out.println() ;
		System.out.println("Circle area: " + circle.getArea()) ;
		System.out.println("Square area: " + square.getArea()) ;
		System.out.println("Rectangle area: " + rectangle.getArea()) ;
		System.out.println() ;
		System.out.println("Circle perimeter: " + circle.getPerimeter()) ;
		System.out.println("Square perimeter: " + square.getPerimeter()) ;
		System.out.println("Rectangle perimeter: " + rectangle.getPerimeter()) ;
	}
}
