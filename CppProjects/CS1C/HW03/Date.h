/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW03
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 9 February 2023
**********************************/

#ifndef DATE_H_
#define DATE_H_

class Date
{
	public :
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Date() ;
		Date(int mm, int dd, int yy) ;

	/**************
	 ** ACCESSOR **
	 **************/
		void PrintDate() const ;
	private :
		int year ;		// PROCESSING - year of date
		int month ;		// PROCESSING - month of date
		int day ;		// PROCESSING - day of date
} ;

#endif /* DATE_H_ */

/****************************************************
 * Date Class
 * 		This class represents the Date object. It 
 * manages three attributes: year, month, and day.
 ****************************************************/

/******************
 ** CONSTRUCTORS **
 ******************/
/****************************************************
 * Date()
 * 		Constructor:	Initialize class attributes
 * 						to default values
 * 
 * 		Parameters :	none
 * 		Return	   :	none
 ****************************************************/

/****************************************************
 * Date(int mm, int dd, int yy)
 * 		Constructor:	Initialize class attributes
 * 						to passed values
 * 
 * 		Parameters :	mm (int) - month of date
 * 						dd (int) - day of date
 * 						yy (int) - year of date
 *		Return	   :	none
 ****************************************************/

/**************
 ** ACCESSOR **
 **************/
/****************************************************
 * void PrintDate()
 * 		Accessor :		prints the date
 * 
 * 		Parameter:		none
 * 		Return   :		none
 ****************************************************/
