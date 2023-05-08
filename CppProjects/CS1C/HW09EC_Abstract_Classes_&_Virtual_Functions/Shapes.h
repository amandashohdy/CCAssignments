/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW09EC
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 14 March 2023
 * 
 * Shapes.h
**********************************/

#ifndef SHAPES
#define SHAPES

class Shape
{
	public :
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Shape() ;
		Shape(int x, int y) ;
	/**************
	 ** ACCESSOR **
	 **************/
		void PrintShape() const ;
	/**************
	 ** MUTATORS **
	 **************/
		virtual void Move() ;
		virtual void UpdateDimensions() = 0 ;
	private :
		int x ;      // x position
		int y ;      // y position
} ;

class Circle : public Shape
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Circle() ;
		Circle(int x, int y, int r) ;
	/**************
	 ** ACCESSOR **
	 **************/
		void PrintShape() const ;
	/*************
	 ** MUTATOR **
	 *************/
		void UpdateDimensions() override ;

	private:
		int r ;      // circle radius
} ;

class Rectangle : public Shape
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Rectangle() ;
		Rectangle(int x, int y, int l, int w) ;
	/**************
	 ** ACCESSOR **
	 **************/
		void PrintShape() const ;
	/*************
	 ** MUTATOR **
	 *************/
		void UpdateDimensions() override ;

	private:
		int l ;      // rectangle length
		int w ;      // rectangle width
} ;

#endif /*  SHAPES  */


/*******************************************************
 * Shape Class
 *    This abstract class represents the Shape object. It 
 * manages 2 attributes: x and y.
 *******************************************************/

/******************
 ** CONSTRUCTORS **
 ******************/
/*******************************************************
 * Shape()
 *    Constructor: Initializes class attributes to 
 *                 defaults. 
 * 
 *    Parameters : none
 *    Return     : none
 *******************************************************/

/*******************************************************
 * Shape(int x, int y)
 *    Constructor: Initializes class attributes to 
 *                 passed values. 
 * 
 *    Parameters : x (int) - x position
 *                 y (int) - y position
 *    Return     : none
 *******************************************************/

/**************
 ** ACCESSOR **
 **************/
/*****************************************************
 * void PrintShape() const
 *   This method prints the attributes of a shape 
 * object.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The attributes of the shape are output to the 
 * console. 
 *****************************************************/

/**************
 ** MUTATORS **
 **************/
/*****************************************************
 * virtual void Move() 
 *   This method updates the x and y attributes of a 
 * shape object.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The attributes of the shape object are updated. 
 *****************************************************/

/*****************************************************
 * virtual void UpdateDimensions() =  0 
 *   pure virtual function
 *****************************************************/


/*******************************************************
 * Circle Class
 *    This abstract class represents the Circle object. It 
 * manages 1 attribute: r.
 *******************************************************/

/******************
 ** CONSTRUCTORS **
 ******************/
/*******************************************************
 * Circle()
 *    Constructor: Initializes class attributes to 
 *                 defaults. 
 * 
 *    Parameters : none
 *    Return     : none
 *******************************************************/

/*******************************************************
 * Circle(int x, int y, int r)
 *    Constructor: Initializes class attributes to 
 *                 passed values. 
 * 
 *    Parameters : x (int) - x position
 *                 y (int) - y position
 *                 r (int) - circle radius
 *    Return     : none
 *******************************************************/

/**************
 ** ACCESSOR **
 **************/
/*****************************************************
 * void PrintShape() const
 *   This method prints the attributes of a circle 
 * object.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The attributes of the circle are output to the 
 * console. 
 *****************************************************/

/*************
 ** MUTATOR **
 *************/
/*****************************************************
 * void UpdateDimensions() override
 *   This method updates the x and y attributes of a 
 * circle object.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The attributes of the circle object are updated. 
 *****************************************************/


/*******************************************************
 * Rectangle Class
 *    This abstract class represents the Rectangle object. 
 * It manages 2 attributes: l and w.
 *******************************************************/

/******************
 ** CONSTRUCTORS **
 ******************/
/*******************************************************
 * Circle()
 *    Constructor: Initializes class attributes to 
 *                 defaults. 
 * 
 *    Parameters : none
 *    Return     : none
 *******************************************************/

/*******************************************************
 * Circle(int x, int y, int l, int w)
 *    Constructor: Initializes class attributes to 
 *                 passed values. 
 * 
 *    Parameters : x (int) - x position
 *                 y (int) - y position
 *                 l (int) - rectangle length
 *                 w (int) - rectangle width
 *    Return     : none
 *******************************************************/

/**************
 ** ACCESSOR **
 **************/
/*****************************************************
 * void PrintShape() const
 *   This method prints the attributes of a rectangle 
 * object.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The attributes of the rectangle are output to the 
 * console. 
 *****************************************************/

/*************
 ** MUTATOR **
 *************/
/*****************************************************
 * void UpdateDimensions() override
 *   This method updates the x and y attributes of a 
 * rectangle object.
 * 
 * PRE-CONDITIONS
 *   none
 * POST-CONDITIONS
 *   The attributes of the rectangle object are updated. 
 *****************************************************/
