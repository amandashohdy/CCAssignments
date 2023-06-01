/*********************************
 * AUTHOR	    : Amanda Shohdy
 * CLASS		    : CS1B
 * ASSIGNMENT	: ASSIGNMENT #3
 * SECTION	    : MW 1:30 - 3:50p
 * DUE DATE		: 10 OCTOBER 2022
 *********************************/

#include "ItemToPurchase.h"
#include <iostream>
#include <string>
using namespace std ;

/************************************************************************************************
 * Method ItemToPurchase(): Class ItemToPurchase
 * 		This method is a default constructor that initializes itemName, itemPrice, itemQuantity,
 * 		and itemDescription to their initial conditions.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		Initializes itemName and itemDescription to "none". Initializes itemPrice and
 * 		itemQuantity to 0. There is no return value.
 ************************************************************************************************/
ItemToPurchase::ItemToPurchase()
{
	itemName = "none" ;
	itemPrice = 0 ;
	itemQuantity = 0 ;
	itemDescription = "none" ;
}

/************************************************************************************************
 * Method ItemToPurchase(): Class ItemToPurchase
 * 		This method is a constructor that initializes itemName, itemDescription, itemPrice, and
 * 		itemQuantity to values passed.
 *
 * PRE-CONDITIONS
 * 		The following need previously defined values:
 * 	 		name 		: cart item's name
 * 			description : cart item's description
 * 			price		: cart item's price
 * 			quantity		: cart item's quantity
 * POST-CONDITIONS
 * 		Assigns itemName, itemDescription, itemPrice, and itemQuantity to their respective
 * 		values input by the user in function main(). There is no return value.
 ************************************************************************************************/
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity)
{
	itemName = name ;
	itemDescription = description ;
	itemPrice = price;
	itemQuantity = quantity ;

}


/************************************************************************************************
 * Method SetName(): Class ItemToPurchase
 * 		This method will update the itemName attribute to the value of name.
 *
 * PRE-CONDITIONS
 * 		The following need previously defined variables:
 * 			name : name of item
 * POST-CONDITIONS
 * 		itemName attribute is reassigned. There is no return value.
 ************************************************************************************************/
void ItemToPurchase::SetName(string name)
{
	itemName = name ;
}

/************************************************************************************************
 * Method SetPrice(): Class ItemToPurchase
 * 		This method will update the itemPrice attribute to the value of price.
 *
 * PRE-CONDITIONS
 * 		The following need previously defined variables:
 * 			price : price of item
 * POST-CONDITIONS
 * 		itemPrice attribute is reassigned. There is no return value.
 ************************************************************************************************/
void ItemToPurchase::SetPrice(int price)
{
	itemPrice = price ;
}

/************************************************************************************************
 * Method SetQuantity(): Class ItemToPurchase
 * 		This method will update the itemQuantity attribute to the value of quantity.
 *
 * PRE-CONDITIONS
 * 		The following need previously defined variables:
 * 			quantity : quantity of item
 * POST-CONDITIONS
 * 		itemQuantity attribute is reassigned. There is no return value.
 ************************************************************************************************/
void ItemToPurchase::SetQuantity(int quantity)
{
	itemQuantity = quantity ;
}

/************************************************************************************************
 * Method SetDescription(): Class ItemToPurchase
 * 		This method will update the itemDescription attribute to the value of description.
 *
 * PRE-CONDITIONS
 * 		The following need previously defined variables:
 * 			description : description of item
 * POST-CONDITIONS
 * 		itemDescription attribute is reassigned. There is no return value.
 ************************************************************************************************/
void ItemToPurchase::SetDescription(string description)
{
	itemDescription = description ;
}


/************************************************************************************************
 * Method GetName(): Class ItemToPurchase
 * 		This method will return the itemName attribute.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		itemName is returned.
 ************************************************************************************************/
string ItemToPurchase::GetName() const
{
	return itemName ;
}

/************************************************************************************************
 * Method GetPrice(): Class ItemToPurchase
 * 		This method will return the itemPrice attribute.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		itemPrice is returned.
 ************************************************************************************************/
int ItemToPurchase::GetPrice() const
{
	return itemPrice ;
}

/************************************************************************************************
 * Method GetQuantity(): Class ItemToPurchase
 * 		This method will return the itemQuantity attribute.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		itemQuantity is returned.
 ************************************************************************************************/
int ItemToPurchase::GetQuantity() const
{
	return itemQuantity ;
}

/************************************************************************************************
 * Method GetDescription(): Class ItemToPurchase
 * 		This method will return the itemDescription attribute.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		itemDescription is returned.
 ************************************************************************************************/
string ItemToPurchase::GetDescription() const
{
	return itemDescription ;
}


/************************************************************************************************
 * Method PrintItemCost(): Class ItemToPurchase
 * 		This method prints an item's name, quantity, cost per item, and total cost.
 *
 * PRE-CONDITIONS
 * 		The following need previously defined values:
 * 			itemName 	: 	item's name
 * 			itemQuantity:	item's quantity
 * 			itemPrice	: 	item's price
 * POST-CONDITIONS
 * 		Outputs item's details and total cost.
 ************************************************************************************************/
void ItemToPurchase::PrintItemCost() const
{
	cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" <<
	itemQuantity*itemPrice << endl ;
}

/************************************************************************************************
 * Method PrintItemDescription(): Class ItemToPurchase
 * 		This method prints an item's name and description.
 *
 * PRE-CONDITIONS
 * 		The following need previously defined values:
 * 			itemName			: item's name
 * 			itemDescription	: item's description
 ************************************************************************************************/
void ItemToPurchase::PrintItemDescription() const
{
	cout << itemName << ": " << itemDescription << endl ;
}
