/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW07
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 7 March 2023
 * 
 * ManageInventory.h
 **********************************/

#ifndef MANAGE_INVENTORY_H
#define MANAGE_INVENTORY_H

#include <string>
using std::string ;

namespace hw07
{
	struct Item      // Item data type
	{
		string name ;
		int quantity ;
		float cost ;
	} ;

	const int MAX_SIZE = 50 ;

	class ManageInventory
	{
		public:
		/******************
		 ** CONSTRUCTORS **
		 ******************/
			ManageInventory() ;
			ManageInventory(int userSize) ;
			ManageInventory(const ManageInventory& source) ;

		/****************
		 ** DESTRUCTOR **
		 ****************/
			~ManageInventory() ; 

		/*************
		 ** MUTATOR **
		 *************/
			void BuyItems() ;

		/**************
		 ** ACCESSOR **
		 **************/
			void PrintInventory() const ;
		private: 
			int size {MAX_SIZE} ;        // PROCESSING - max items
			int count ;                  // PROCESSING - item count
			Item** p_pInventoryItems ;   // PROCESSING - items array
	} ;
} ;

#endif /* MANAGE_INVENTORY_H */

/*******************************************************************
 * ManageInventory Class
 *      This class represents the ManageInventory object. It 
 * manages three attributes: size, count, and p_pInventoryItems. 
 *******************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/*******************************************************************
 * ManageInventory()
 *      Constructor:    Initializes class attributes to defaults
 * 
 *      Parameters :    none
 *      Return     :    none
 *******************************************************************/

/*******************************************************************
 * ManageInventory(int userSize)
 *      Constructor:    Initializes class attribute size to passed
 *                      value
 *      Parameters :    userSize (int) - size of inventory
 *      Return     :    none
 *******************************************************************/

/*******************************************************************
 * ManageInventory(const ManageInventory& source)
 *      Copy Constructor:    Initializes class attributes to passed
 *                           values
 *      Parameters      :    source (const ManageInventory) 
 *      Return          :    none
 *******************************************************************/


/****************
 ** DESTRUCTOR **
 ****************/

/*******************************************************************
 * ~ManageInventory()
 *      Destructor:    Frees up space on the heap as objects are
 *                     destroyed
 *      Parameters:    none
 *      Return    :    none
 *******************************************************************/


/*************
 ** MUTATOR **
 *************/

/*******************************************************************
 * void BuyItems()
 *      Mutator  :    Updates the quantity of items in the inventory
 *                    and generates a receipt of purchases
 *      Paramters:    none
 *      Return   :    none
 *******************************************************************/


/**************
 ** ACCESSOR **
 **************/

/*******************************************************************
 * void PrintInventory() const
 *      Accessor  :    Ouputs the inventory information
 * 
 *      Parameters:    none
 *      Return    :    none
 *******************************************************************/
