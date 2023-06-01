/*******************************
 * AUTHOR   : Amanda Shohdy
 * CLASS    : CS1B
 * SECTION  : MW 1:30 - 3:50p
 * DUE DATE : 26 September 2022
 *******************************/

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase
{
   public : 
   
      /*****************
       ** CONSTRUCTOR **
       *****************/
      ItemToPurchase() ;                        // constructor
      
      /**************
       ** MUTATORS **
       **************/
      void SetName(string name) ;
      void SetPrice(int price) ;
      void SetQuantity(int quantity) ;
      
      /***************
       ** ACCESSORS **
       ***************/
      string GetName() const ;
      int GetPrice() const ;
      int GetQuantity() const ;
   
   private :
      string itemName ;                         // IN/OUT - item's name
      int    itemPrice ;                        // IN/OUT - item's price
      int    itemQuantity ;                     // IN/OUT - item's quantity purchased
} ;


/*******************************************************************************
 * ItemToPurchase Class
 *    This class represents the ItemToPurchase object. It manages 3 attributes: 
 *    itemName, itemPrice, and itemQuantity.
 *******************************************************************************/
 
 
 /*****************
  ** CONSTRUCTOR **
  *****************/
  
/*******************************************************************************
 * ItemToPurchase() ;
 *    Constructor; Initialize class attributes
 *    Parameters: none
 *    Return: none
 *******************************************************************************/  
 
 
 /**************
  ** MUTATORS **
  **************/
  
/*******************************************************************************
 * void SetName (string name) ;
 *    Mutator; This method will update the itemName attribute to the name value.
 * 
 *    Parameter: name (string) // IN - the name of the new attribute
 *    Return: none
 *******************************************************************************/
 
/*******************************************************************************
 * void SetPrice (int price) ;
 *    Mutator; This method will update the itemPrice attribute to the price 
 *    value.
 * 
 *    Parameter: price (int) // IN - the price of the new attribute
 *    Return: none
 *******************************************************************************/
 
/*******************************************************************************
 * void SetQuantity (int quantity) ;
 *    Mutator; This method will update the itemQuantity attribute to the
 *    quantity value.
 * 
 *    Parameter: quantity (int) // IN - the quantity of the new attribute
 *    Return: none
 *******************************************************************************/
 
 
 /***************
  ** ACCESSORS **
  ***************/
  
/*******************************************************************************
 * string GetName () const ;
 *    Accessor; This method will return the itemName attribute.
 * 
 *    Parameter: none
 *    Return: itemName (string)
 *******************************************************************************/
 
/*******************************************************************************
 * int GetPrice () const ;
 *    Accessor; This method will return the itemPrice attribute.
 * 
 *    Parameter: none
 *    Return: itemPrice (int)
 *******************************************************************************/
 
/*******************************************************************************
 * int GetQuantity () const ;
 *    Accessor; This method will return the itemQuantity attribute.
 * 
 *    Parameter: none
 *    Return: itemQuantity (int)
 *******************************************************************************/
   
#endif
