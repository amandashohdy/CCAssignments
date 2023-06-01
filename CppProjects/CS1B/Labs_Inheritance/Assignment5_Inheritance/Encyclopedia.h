/*********************************
 * AUTHOR		: Amanda Shohdy
 * ASSIGNMENT	: Assignment 5
 * CLASS			: CS1B
 * SECTION		: MW 1:30 - 3:50p
 * DUE DATE		: 7 November 2022
 **********************************/

#ifndef ENCYCLOPEDIA_H_
#define ENCYCLOPEDIA_H_

#include "Book.h"
#include <string>
using namespace std ;

class Encyclopedia : public Book
{
	public :

		/**************
		 ** MUTATORS **
		 **************/
		void SetEdition(string userEdition) ;
		void SetNumVolumes(int userVolumes) ;

		/***************
		 ** ACCESSORS **
		 ***************/
		string GetEdition() const ;
		int GetNumVolumes() const ;

		void PrintInfo() ;

	private :
		string edition ;				// PROCESSING - encyclopedia edition
		int numVolumes ;				// PROCESSING - number of volumes
} ;


/***************************************************************************
 * Encyclopedia Class
 * 		This class is derived from the Book class. This class represents
 * 		the encyclopedia object. It manages 2 attributes: edition and
 * 		numVolumes.
 ***************************************************************************/


/**************
 ** MUTATORS **
 **************/

/***************************************************************************
 * void SetEdition(string userEdition) ;
 * 		Mutator	 :		Sets the edition attribute to the value input by
 * 					   	the user
 * 		Parameter :		userEdition (string)  // IN - encyclopedia edition
 * 		Return	 :		none
 ***************************************************************************/

/***************************************************************************
 * void SetNumVolumes(int userVolumes) ;
 * 		Mutator	 :		Sets the number of volumes attribute to the value
 * 					     	input by the user
 * 		Parameter :		userVolumes (int)  // IN - number of volumes
 * 		Return    :		none
 ***************************************************************************/


/***************
 ** ACCESSORS **
 ***************/

/***************************************************************************
 * string GetEdition() const ;
 * 		Accessor  :		Returns the edition of the encyclopedia
 *
 * 		Parameter :		none
 * 		Return	 :		edition (string) // PROCESSING - encyclopedia edition
 ***************************************************************************/

/***************************************************************************
 * int GetNumVolumes() const ;
 * 		Accessor  : 	Returns the number of volumes
 *
 * 		Parameter : 	none
 * 		Return    :		numVolumes (int) // PROCESSING - number of volumes
 ***************************************************************************/

/***************************************************************************
 * void PrintInfo() ;
 * 		Accessor  :		Outputs the information of an encyclopedia object
 *
 * 		Parameter : 	none
 * 		Return	 :		none
 ***************************************************************************/

#endif /* ENCYCLOPEDIA_H_ */
