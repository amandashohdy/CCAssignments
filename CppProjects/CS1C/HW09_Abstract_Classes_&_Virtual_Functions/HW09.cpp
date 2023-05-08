/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * HW09.cpp
**********************************/

#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream> 
using namespace std ;

// function prototypes
void printPerimeter(Shape &shape) ;
void printArea(Shape &shape) ;

/*************************************************************************
 * Function main()
 *     This function prompts the user to enter the length and the width of
 * a rectangle, then calculates and outputs the perimeter and area of the 
 * rectangle. The function then prompts the user to enter the three side
 * lengths of a triangle, then calculates and outputs the perimeter and 
 * area of the triangle.
 * 
 * INPUT
 *     length (int) - the length of the rectangle
 *     width (int)  - the width of the rectangle
 *     s1 (int)     - the first side of the triangle
 *     s2 (int)     - the second side of the triangle
 *     s3 (int)     - the third side of the triangle
 * 
 * OUTPUT
 *     The perimeter and the area of the rectangle and the triangle are
 * output to the console. 
 *************************************************************************/
int main()
{
	cout << endl << endl << endl ;
	cout << "*********************" << endl ;
	cout << "*** AMANDA SHOHDY ***" << endl ;
	cout << "***      HW09     ***" << endl ;
	cout << "*********************" << endl << endl << endl ;


	cout << "**********************" << endl ;
	cout << "** RECTANGLE OBJECT **" << endl ;
	cout << "**********************" << endl << endl ;

	int length ;
	int width ;
	cout << "RECTANGLE" << endl ;
	cout << "Input the length: " ;
	cin >> length ;
	cout << "Input the width: " ;
	cin >> width ;
	cout << endl ;
	Rectangle myRect(length, width) ;   // create rectangle object
	printPerimeter(myRect) ;            // print rectangle data
	printArea(myRect) ;


	cout << endl << endl << endl ;
	cout << "*********************" << endl ;
	cout << "** TRIANGLE OBJECT **" << endl ;
	cout << "*********************" << endl << endl ;

	int side1 ;
	int side2 ;
	int side3 ;
	cout << "TRIANGLE" << endl ;
	cout << "Input first side length: " ;
	cin >> side1 ;
	cout << "Input second side length: " ;
	cin >> side2 ;
	cout << "Input third side length: " ;
	cin >> side3 ;
	cout << endl ;
	Triangle myTri(side1, side2, side3) ;   // create triangle object
	printPerimeter(myTri) ;                 // print triangle data
	printArea(myTri) ;
	cout << endl << endl << endl ;

}

/*************************************************************************
 * Funtion printPerimeter(Shape &shape)
 *     This function calls the passed shapes calcPerimeter member 
 * function to output the perimeter of the shape.
 * 
 * PRE-CONDITIONS
 *     &shape (Shape) - the shape whose perimeter is being output
 * POST-CONDITIONS
 *     The current shape object's perimeter is calculated and output
 *************************************************************************/
void printPerimeter(Shape &shape) 
{                           // function call
	cout << "PERIMETER: " << shape.calcPerimeter() << " units" << endl ;
}

/*************************************************************************
 * Funtion printArea(Shape &shape)
 *     This function calls the passed shapes calcArea member function to 
 * output the area of the shape.
 * 
 * PRE-CONDITIONS
 *     &shape (Shape) - the shape whose area is being output
 * POST-CONDITIONS
 *     The current shape object's area is calculated and output
 *************************************************************************/
void printArea(Shape &shape) 
{                      // function call
	cout << "AREA: " << shape.calcArea() << " units" << endl ;
}
