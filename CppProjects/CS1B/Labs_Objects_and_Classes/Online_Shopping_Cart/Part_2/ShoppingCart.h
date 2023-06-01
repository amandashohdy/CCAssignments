/*********************************
 * AUTHOR	    : Amanda Shohdy
 * CLASS		    : CS1B
 * ASSIGNMENT	: ASSIGNMENT #3
 * SECTION	    : MW 1:30 - 3:50p
 * DUE DATE		: 10 OCTOBER 2022
 *********************************/

#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "ItemToPurchase.h"
#include <vector>
#include <string>
using namespace std ;

class ShoppingCart
{
	public :

		/******************
		 ** CONSTRUCTORS **
		 ******************/
		ShoppingCart() ;
		ShoppingCart(string name, string date) ;

		/**************
		 ** MUTATORS **
		 **************/
		void AddItem(ItemToPurchase addItem) ;
		void RemoveItem(string removeItemName) ;
		void ModifyItem(ItemToPurchase modifyItem) ;

		/***************
		 ** ACCESSORS **
		 ***************/
		string GetCustomerName() const ;
		string GetDate() const ;
		int GetNumItemsInCart() const ;
		int GetCostOfCart() const ;

		void PrintTotal() const ;
		void PrintDescriptions() const ;

	private :
		string customerName ;						// IN/OUT - customer's name
		string currentDate ;							// IN/OUT - today's date
		vector<ItemToPurchase> cartItems ;			// STORAGE - ItemToPurchase vector
} ;


/******************************************************************************************
 * ShoppingCart Class
 * 		This class represents the ShoppingCart object. It manages 3 attributes:
 * 		customerName, currentDate, and cartItems.
 ******************************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/******************************************************************************************
 * ShoppingCart () ;
 * 		Constructor; Initialize class attributes
 * 		Parameters: none
 * 		Return: none
 ******************************************************************************************/

/******************************************************************************************
 * ShoppingCart (string name, string date) ;
 * 		Constructor; Initialize class attributes
 * 		Parameters: name (string) // IN - customer's name
 * 					date (string) // IN - current date
 * 		Return	  : none
 ******************************************************************************************/


/**************
 ** MUTATORS **
 **************/

/******************************************************************************************
 * void AddItem (ItemToPurchase addItem) ;
 * 		Mutator; This method adds an ItemToPurchase variable to the cartItems vector.
 *
 * 		Parameters: addItem (ItemToPurchase) // IN - ItemToPurchase variable from main()
 * 		Return	  : none
 ******************************************************************************************/

/******************************************************************************************
 * void RemoveItem (string removeItemName) ;
 * 		Mutator; This method searches for an item name in the cartItems vector to remove
 * 		from the vector. If the name is not found, a message is output.
 *
 * 		Parameters: removeItemName (string) //IN - variable to search cart for
 * 		Return	  : none
 ******************************************************************************************/

/******************************************************************************************
 * void ModifyItem (ItemToPurchase modifyItem) ;
 * 		Mutator; This method searches the cartItems vector for an item name. If the name
 * 		is not found, a message is output. Otherwise, if the data members of the modifyItem
 * 		variable are set to the default, the associated cartItems item is not modified.
 *
 * 		Parameters: modifyItem (ItemToPurchase) //IN - variable set with an item name and
 * 													   quantity, all other set to default
 * 		Return	  : none
 ******************************************************************************************/


/***************
 ** ACCESSORS **
 ***************/

/******************************************************************************************
 * string GetCustomerName () const ;
 * 		Accessor; This method returns the value stored in customerName.
 *
 * 		Parameters: none
 * 		Return	  : customerName (string)
 ******************************************************************************************/

/******************************************************************************************
 * string GetDate () const ;
 * 		Accessor; This method returns the value stored in currentDate.
 *
 * 		Parameters: none
 * 		Return	  : currentDate (string)
 ******************************************************************************************/

/******************************************************************************************
 * int GetNumItemsInCart () const ;
 * 		Accessor; This method returns the total number of items in the cart.
 *
 * 		Parameters: none
 * 		Return	  : total number of items in cart
 ******************************************************************************************/

/******************************************************************************************
 * int GetCostOfCart () const ;
 * 		Accessor; This method returns the total cost of the items in the cart.
 *
 * 		Parameters: none
 * 		Return	  : total cost of items in cart
 ******************************************************************************************/


/******************************************************************************************
 * void PrintTotal () const ;
 * 		This method prints the customer's name and the date, as well as the summary of the
 * 		quantities and costs of all the items in the cart.
 *
 * 		Parameters: none
 * 		Return	  : none
 ******************************************************************************************/

/******************************************************************************************
 * void PrintDescriptions () const ;
 * 		This method prints the customer's name and the date, as well as the item names and
 * 		descriptions of the items in the cartItems vector.
 *
 * 		Parameters: none
 * 		Return	  : none
 ******************************************************************************************/

#endif /* SHOPPING_CART_H */
