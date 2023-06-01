/*******************************
 * AUTHOR   : Amanda Shohdy
 * CLASS    : CS1B
 * SECTION  : MW 1:30 - 3:50p
 * DUE DATE : 26 September 2022
 *******************************/

#include <iostream>
#include <string>
using namespace std;

#include "ItemToPurchase.h"


/***************************************************************
 * Method ItemToPurchase: Class ItemToPurchase
 *    This method is a default constructor that initializes 
 *    itemName, itemPrice, and itemQuantity with their initial
 *    conditions.
 * PRE-CONDITIONS
 *    none
 * POST-CONDITIONS
 *    This method will initialize itemName to "none", 
 *    itemPrice to 0, and itemQuantity to 0. There is no return
 *    value.
 ***************************************************************/
ItemToPurchase::ItemToPurchase()
{
   itemName = "none" ;
   itemPrice = 0 ;
   itemQuantity = 0 ;
}

/***************************************************************
 * Method SetName: Class ItemToPurchase
 *    This method receives a name representing an item and updates
 *    the item's name.
 * 
 * PRE-CONDITIONS
 *    The following need previously defined values:
 *       name: New item's name
 * POST-CONDITIONS
 *    This method will update the itemName attribute in the
 *    ItemToPurchase object. There is not return value. 
 ***************************************************************/
void ItemToPurchase::SetName(string name)    // IN - item's name
{
   itemName = name ;
}

/***************************************************************
 * Method GetName: Class ItemToPurchase
 *    This method returns the value stored in the itemName 
 *    attribute of an ItemToPurchase object. 
 * 
 * PRE-CONDITIONS
 *    none
 * POST-CONDITIONS
 *    itemName is returned.
 ***************************************************************/
string ItemToPurchase::GetName() const
{
   return itemName ;
}

/***************************************************************
 * Method SetPrice: Class ItemToPurchase
 *    This method receives a price representing the price of 
 *    one of the specified item.
 * 
 * PRE-CONDITIONS
 *    The following need previously defined values:
 *       price: price for one item
 * POST-CONDITIONS
 *    This method will update the itemPrice attribute in the
 *    ItemToPurchase object. There is no return value.
 ***************************************************************/
void ItemToPurchase::SetPrice(int price)     // IN - item's price
{
   itemPrice = price ;
}

/***************************************************************
 * Method Price: Class ItemToPurchase
 *    This method returns the value stored in the itemPrice 
 *    attribute of an ItemToPurchase object. 
 * 
 * PRE-CONDITIONS
 *    none
 * POST-CONDITIONS
 *    itemPrice is returned.
 ***************************************************************/
int ItemToPurchase::GetPrice() const
{
   return itemPrice ;
}

/***************************************************************
 * Method SetQuantity: Class ItemToPurchase
 *    This method receives a quantity that represents the 
 *    quantity of the item being purchased.
 * 
 * PRE-CONDITIONS
 *    The following need previously defined values:
 *       quantity: specified item's quantity
 * POST-CONDITIONS
 *    This method will update the itemQuantity attribute in
 *    the ItemToPurchase object. There is not return value.
 ***************************************************************/
void ItemToPurchase::SetQuantity(int quantity)     // IN - quantity purchased
{
   itemQuantity = quantity ;
}

/***************************************************************
 * Method GetQuantity: Class ItemToPurchase
 *    This method returns the value stored in the itemQuantity 
 *    attribute of an ItemToPurchase object. 
 * 
 * PRE-CONDITIONS
 *    none
 * POST-CONDITIONS
 *    itemQuantity is returned.
 ***************************************************************/
int ItemToPurchase::GetQuantity() const
{
   return itemQuantity ;
}
