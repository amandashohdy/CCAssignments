/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * Shape.cpp
**********************************/

#include "Shapes.h" 
#include <iostream>
using namespace std ;

/*****************************************************
 * Method Shape() : Class Shape
 *   This constructor initializes class attributes to 
 *   default values
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The x and y attributes are initialized to 0. 
 *   There is no return value. 
 *****************************************************/
Shape::Shape()
: x{0}, y{0} {} ;

/*****************************************************
 * Method Shape() : Class Shape
 *   This constructor initializes class attributes to
 *   passed values
 * 
 * PRE-CONDITIONS
 *   x (int) - x position
 *   y (int) - y position
 * POST-CONDITIONS
 *   The class attributes are initialized to passed
 *   values. There is no return value. 
 *****************************************************/
Shape::Shape(int x, int y)
: x{x}, y{y} {} ;

/*****************************************************
 * Method PrintShape() : Class Shape
 *   This functions prints the x and y attributes of 
 * a shape object
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The object's attributes are output to the console.
 * There is no return value. 
 *****************************************************/
void Shape:: PrintShape() const
{
	cout << "x: " << x << endl ;
	cout << "y: " << y << endl ;
}

/*****************************************************
 * Method Move() : Class Shape
 *   This functions updates the x and y attributes of 
 * a shape object
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The object's attributes are updated. There is 
 * no return value. 
 *****************************************************/
void Shape::Move()
{
	cout << "Where would you like to move your shape?" << endl ;
	cout << "x: " ;
	cin >> x ;
	cout << "y: " ;
	cin >> y ;
}


/*****************************************************
 * Method Circle() : Class Circle
 *   This constructor initializes class attributes to 
 *   default values
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The x, y, and r attributes are initialized to 0. 
 *   There is no return value. 
 *****************************************************/
Circle::Circle()
: Shape(), r{0} {}

/*****************************************************
 * Method Circle() : Class Circle
 *   This constructor initializes class attributes to
 *   passed values
 * 
 * PRE-CONDITIONS
 *   x (int) - x position
 *   y (int) - y position
 *   r (int) - circle radius
 * POST-CONDITIONS
 *   The class attributes are initialized to passed
 *   values. There is no return value. 
 *****************************************************/
Circle::Circle(int x, int y, int r)
: Shape(x, y), r{r} {}

/*****************************************************
 * Method PrintShape() : Class Circle
 *   This functions prints the x, y, and r attributes 
 * of a shape object
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The object's attributes are output to the console.
 * There is no return value. 
 *****************************************************/
void Circle::PrintShape() const
{
	Shape::PrintShape() ;
	cout << "r: " << r << endl ;
}

/*****************************************************
 * Method UpdateDimensions() : Class Circle
 *   This function updates the radius of the circle
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The radius of the circle object is updated to the
 * input value. There is no return value. 
 *****************************************************/
void Circle::UpdateDimensions() 
{
	cout << "What is the new radius? :  " ;
	cin >> r ;
}


/*****************************************************
 * Method Rectangle() : Class Rectangle
 *   This constructor initializes class attributes to 
 *   default values
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The x, y, l, and w attributes are initialized to 0. 
 *   There is no return value. 
 *****************************************************/
Rectangle::Rectangle()
: Shape(), l{0}, w{0} {}

/*****************************************************
 * Method Rectangle() : Class Rectangle
 *   This constructor initializes class attributes to
 *   passed values
 * 
 * PRE-CONDITIONS
 *   x (int) - x position
 *   y (int) - y position
 *   l (int) - rectangle length
 *   w (int) - rectangle width
 * POST-CONDITIONS
 *   The class attributes are initialized to passed
 *   values. There is no return value. 
 *****************************************************/
Rectangle::Rectangle(int x, int y, int l, int w)
: Shape(x, y), l{l}, w{w} {}

/*****************************************************
 * Method PrintShape() : Class Rectangle
 *   This functions prints the x, y, l, and w 
 * attributes of a shape object
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The object's attributes are output to the console.
 * There is no return value. 
 *****************************************************/
void Rectangle::PrintShape() const
{
	Shape::PrintShape() ;
	cout << "l: " << l << endl ;
	cout << "w: " << w << endl ;
}

/*****************************************************
 * Method UpdateDimensions() : Class Rectangle
 *   This function updates the length and width of 
 * the rectangle
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The length and width of the rectangle object are 
 * updated to the input value. There is no return value. 
 *****************************************************/
void Rectangle::UpdateDimensions()
{
	cout << "What is the new length? :  " ;
	cin >> l ;
	cout << "What is the new width? :  " ;
	cin >> w ;
}