/*********************************
 * AUTHOR       : Amanda Shohdy
 * CLASS        : CS1B
 * ASSIGNMENT   : ASSIGNMENT #3
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 10 OCTOBER 2022
 *********************************/

#include "ShoppingCart.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std ;

/************************************************************************************************
 * Method ShoppingCart(): Class ShoppingCart
 *      This method is a default constructor that initializes customerName and currentDate to
 *      their initial conditions.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      Initializes customerName to "none" and currentDate to "January 1, 2016". There is no
 *      return value.
 ************************************************************************************************/
ShoppingCart::ShoppingCart()
{
    customerName = "none" ;
    currentDate = "January 1, 2016" ;
}

/************************************************************************************************
 * Method ShoppingCart(): Class ShoppingCart
 *      This method is a constructor that initializes customerName and currentDate to values
 *      passed.
 *
 * PRE-CONDITIONS
 *      The following need previously defined values:
 *          name : customer's name
 *          date : current date
 * POST-CONDITIONS
 *      This method will assign customerName and currentDate with values input by the user in
 *      function main(). There is no return value.
 ************************************************************************************************/
ShoppingCart::ShoppingCart(string name, string date)
{
    customerName = name ;
    currentDate = date ;
}


/************************************************************************************************
 * Method AddItem(): Class ShoppingCart
 *      This method adds an ItemToPurchase variable to the cartItems vector.
 *
 * PRE-CONDITIONS
 *      The following need previously defined values:
 *          addItem : ItemToPurchase variable passed from function main()
 * POST-CONDITIONS
 *      Adds an ItemToPurchase variable to the vector cartItems. There is no
 *      return value.
 ************************************************************************************************/
void ShoppingCart::AddItem(ItemToPurchase addItem)
{
    cartItems.push_back(addItem) ;
}

/************************************************************************************************
 * Method RemoveItem(): Class ShoppingCart
 *      This method searches for an item name in the cartItems vector to remove from the vector.
 *      If the item name is not found, a message is output.
 *
 * PRE-CONDITIONS
 *      The following need previously defined values:
 *          removeItemName : string variable to search cartItems vector for
 * POST-CONDITIONS
 *      If removeItemName is found, associated ItemToPurchase variable is removed from cartItems.
 *      If removeItemName is not found, a message is output to the user. There is no return
 *      value.
 ************************************************************************************************/
void ShoppingCart::RemoveItem(string removeItemName)
{
    int i = 0 ;
    bool found = false ;
    while (!found && (i < cartItems.size()))
    {
        if (cartItems.at(i).GetName() == removeItemName)
        {
            cartItems.erase(cartItems.begin() + i) ;
            found = true ;
        }
        i++ ;
    }
    if (!found)
    {
        cout << "Item not found in cart. Nothing removed." << endl << endl ;
    }
}

/************************************************************************************************
 * Method ModifyItem(): Class ShoppingCart
 *      This method searches the cartItems vector for an item name. If the item name is not
 *      found, a message is output. If the passed ItemToPurchase variable members are set to the
 *      default, the associated variable in the cartItems vector is not modified.
 *
 * PRE-CONDITIONS
 *      The following need previously defined values:
 *          modifyItem :    ItemToPurchase variable set with an item name and quantity,
 *                          all other values are set to default.
 * POST-CONDITIONS
 *      If item is not found in the cart, a message will be output. If item is found and members
 *      are not set to the default, the members will be modified. There is no return value.
 ************************************************************************************************/
void ShoppingCart::ModifyItem(ItemToPurchase modifyItem)
{
    int i = 0 ;
    bool found = false ;
    int itemIndex ;
    while (!found && (i < cartItems.size()))
    {
        if (cartItems.at(i).GetName() == modifyItem.GetName())
        {
            if (modifyItem.GetDescription() != "none")
                cartItems.at(i).SetDescription(modifyItem.GetDescription()) ;
            if (modifyItem.GetPrice() != 0)
                cartItems.at(i).SetPrice(modifyItem.GetPrice()) ;
            if (modifyItem.GetQuantity() != 0)
                cartItems.at(i).SetQuantity(modifyItem.GetQuantity()) ;
            found = true ;
        }
        i++ ;
    }
    if (!found)
        cout << "Item not found in cart. Nothing modified." << endl << endl ;
}


/************************************************************************************************
 * Method GetCustomerName(): Class ShoppingCart
 *      This method returns the value stored in customerName.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      customerName is returned.
 ************************************************************************************************/
string ShoppingCart::GetCustomerName() const
{
    return customerName ;
}

/************************************************************************************************
 * Method GetDate(): Class ShoppingCart
 *      This method returns the value stored in currentDate.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      currentDate is returned.
 ************************************************************************************************/
string ShoppingCart::GetDate() const
{
    return currentDate ;
}

/************************************************************************************************
 * Method GetNumItemsInCart(): Class ShoppingCart
 *      This method returns the total number of items in the cart.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      The total number of items in the cart is returned.
 ************************************************************************************************/
int ShoppingCart::GetNumItemsInCart() const
{
    int numItems = 0 ;
    for (int i = 0 ; i < cartItems.size() ; i++)
    {
        numItems += cartItems.at(i).GetQuantity() ;
    }
    return numItems ;
}

/************************************************************************************************
 * Method GetCostOfCart(): Class ShoppingCart
 *      This method returns the total cost of the items in the cart.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      The total cost of the items in the cart is returned.
 ************************************************************************************************/
int ShoppingCart::GetCostOfCart() const
{
    int totalCost = 0 ;
    for (int i = 0 ; i < cartItems.size() ; i++)
    {
        totalCost += cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity() ;
    }

    return totalCost ;
}


/************************************************************************************************
 * Method PrintTotal(): Class ShoppingCart
 *      This method prints the customer's name and the date, as well as the summary of the
 *      quantities and costs of all the items in cart with the total cost of the cart at the end.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      Outputs customer's name, current date, and a summary of items, costs, quantities,
 *      and totals of items in the cart. There is no return value.
 ************************************************************************************************/
void ShoppingCart::PrintTotal() const
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl ;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl ;
    if (cartItems.empty())
        cout << "SHOPPING CART IS EMPTY" << endl << endl ;
    else
    {
        for (int i = 0 ; i < cartItems.size() ; i++)
        {
            cartItems.at(i).PrintItemCost() ;
        }
        cout << endl ;
    }
    cout << "Total: $" << GetCostOfCart() << endl << endl ;
}

/************************************************************************************************
 * Method PrintDescriptions(): Class ShoppingCart
 *      This method prints the customer's name and the date, as well as the item names and
 *      descriptions of the items in the cartItems vector.
 *
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      Outputs customer's name, current date, and a summary of items and descriptions stored
 *      in cartItems vector.
 ************************************************************************************************/
void ShoppingCart::PrintDescriptions() const
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl ;
    cout << "Item Descriptions" << endl ;
    for (int i = 0 ; i < cartItems.size() ; i++)
    {
        cartItems.at(i).PrintItemDescription() ;
    }
    cout << endl ;
}



