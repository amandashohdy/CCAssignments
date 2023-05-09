/*********************************
 * AUTHOR       : Amanda Shohdy
 * CLASS        : CS1B
 * ASSIGNMENT   : ASSIGNMENT #3
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 10 OCTOBER 2022
 *********************************/

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std ;

class ItemToPurchase
{
    public :

        /******************
         ** CONSTRUCTORS **
         ******************/
        ItemToPurchase() ;
        ItemToPurchase(string name, string description, int price, int quantity) ;

        /**************
         ** MUTATORS **
         **************/
        void SetName(string name) ;
        void SetPrice(int price) ;
        void SetQuantity(int quantity) ;
        void SetDescription (string description) ;

        /***************
         ** ACCESSORS **
         ***************/
        string GetName() const ;
        int GetPrice() const ;
        int GetQuantity() const ;
        string GetDescription() const ;

        void PrintItemCost() const ;
        void PrintItemDescription() const ;

    private :
        string itemName ;               // IN/OUT - item's name
        int itemPrice ;                 // IN/OUT - item's price
        int itemQuantity ;              // IN/OUT - item's quantity
        string itemDescription ;        // IN/OUT - item's description
} ;


/******************************************************************************************
 * ItemToPurchase Class
 *      This class represents the ItemToPurchase object. It manages 4 attributes:
 *      itemName, itemPrice, itemQuantity, and itemDescription.
 ******************************************************************************************/


/******************
 ** CONSTRUCTORS **
 ******************/

/******************************************************************************************
 * ItemToPurchase () ;
 *      Constructor; Initialize class attributes
 *      Parameters: none
 *      Return    : none
 ******************************************************************************************/

/******************************************************************************************
 * ItemToPurchase (string name, string description, int price, int quantity) ;
 *      Constructor; Initialize class attributes
 *      Parameters: name (string)        // IN - item's name
 *                  description (string) // IN - item's description
 *                  price (int)          // IN - item's price
 *                  quantity (int)       // IN - item's quantity
 *      Return    : none
 ******************************************************************************************/


/**************
 ** MUTATORS **
 **************/

/******************************************************************************************
 * void SetName (string name) ;
 *      Mutator; This method will update the itemName attribute to the name value.
 *
 *      Parameter: name (string) // IN - the name of attribute
 *      Return   : none
 ******************************************************************************************/

/******************************************************************************************
 * void SetPrice (int price) ;
 *      Mutator; This method will update the itemPrice attribute to the price value.
 *
 *      Parameter: price (int) // IN - the price of attribute
 *      Return   : none
 ******************************************************************************************/

/******************************************************************************************
 * void SetQuantity (int quantity) ;
 *      Mutator; This method will update the itemQuantity attribute to the quantity value.
 *
 *      Parameter: quantity (int) // IN - the quantity of attribute
 *      Return   : none
 ******************************************************************************************/

/******************************************************************************************
 * void SetDescrition (string description) ;
 *      Mutator; This method will update the itemDescription attribute to the description
 *               value.
 *
 *      Parameter: description (string) // IN - description of attribute
 *      Return   : none
 ******************************************************************************************/


/***************
 ** ACCESSORS **
 ***************/

/******************************************************************************************
 * string GetName () const ;
 *      Accessor; This method will return the itemName attribute.
 *
 *      Parameter: none
 *      Return   : itemName (string)
 ******************************************************************************************/

/******************************************************************************************
 * int GetPrice () const ;
 *      Accessor; This method will return the itemPrice attribute.
 *
 *      Parameter: none
 *      Return   : itemPrice (int)
 ******************************************************************************************/

/******************************************************************************************
 * int GetQuantity () const ;
 *      Accessor; This method will return the itemQuantity attribute.
 *
 *      Parameter: none
 *      Return   : itemQuantity (int)
 ******************************************************************************************/

/******************************************************************************************
 * string GetDescription () const ;
 *      Accessor; This method will return the itemDescription attribute.
 *
 *      Parameter: none
 *      Return   : itemDescription (string)
 ******************************************************************************************/


/******************************************************************************************
 * void PrintItemCost () const ;
 *      This method prints an item's name, quantity, cost per item, and total cost.
 *
 *      Parameters: none
 *      Return    : none
 ******************************************************************************************/

/******************************************************************************************
 * void PrintItemDescription () const ;
 *      This method prints an item's name and description.
 *
 *      Parameters: none
 *      Return    : none
 ******************************************************************************************/

#endif /* ITEM_TO_PURCHASE_H */
