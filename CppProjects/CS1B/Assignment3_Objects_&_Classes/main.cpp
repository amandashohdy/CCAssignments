/*********************************
 * AUTHOR      : Amanda Shohdy
 * CLASS       : CS1B
 * ASSIGNMENT  : ASSIGNMENT #3
 * SECTION     : MW 1:30 - 3:50p
 * DUE DATE    : 10 OCTOBER 2022
 *********************************/

#include "ShoppingCart.h"
#include <iostream>
#include <iomanip>
using namespace std ;

/************************************************************************************************
 * Function PrintMenu()
 *      This function prints the menu with their associated menu options.
 *
 * INPUT :
 *      none
 * OUTPUT :
 *      Menu and menu options
 ************************************************************************************************/
void PrintMenu()
{
    cout << "MENU" << endl ;        // Output the menu
    cout << "a - Add item to cart" << endl ;
    cout << "d - Remove item from cart" << endl ;
    cout << "c - Change item quantity" << endl ;
    cout << "i - Output items' descriptions" << endl ;
    cout << "o - Output shopping cart" << endl ;
    cout << "q - Quit" << endl << endl ;
}

/************************************************************************************************
 * Function ExecuteMenu()
 *      This function takes in the menu option selected by the user and their ShoppingCart item
 *      and processes each variable accordingly.
 *
 * INPUT
 *      option  :       menu option (a, d, c, i, o, q)
 *      theCart :       current ShoppingCartItem
 * OUTPUT
 *      Menu option a adds an item to theCart variable.
 *      Menu option d removes an item from theCart variable or outputs a message if the
 *      item is not found by name.
 *      Menu option c changes an item from theCart variable or outputs a message if the
 *      item is not found by name.
 *      Menu option i outputs the items' descriptions
 *      Menu option o outputs the shopping cart's contents
 *      Menu option q quits the program
 ************************************************************************************************/
void ExecuteMenu(char option, ShoppingCart& theCart)
{
    switch (option)
    {
        case 'a' :
        {
            string name ;              // IN - new ItemToPurchase variable name
            string description ;       // IN - new ItemToPurchase variable description
            int price ;	               // IN - new ItemToPurchase variable price
            int quantity ;             // IN - new ItemToPurchase variable quantity

            cin.ignore() ;
            cout << "ADD ITEM TO CART" << endl ;
            cout << "Enter the item name:" << endl ;
            getline(cin, name) ;
            cout << "Enter the item description:" << endl ;
            getline(cin, description) ;
            cout << "Enter the item price:" << endl ;
            cin >> price ;
            cout << "Enter the item quantity:" << endl ;
            cin >> quantity ;
            cout << endl ;
            ItemToPurchase item(name, description, price, quantity) ;   // new ItemToPurchase variable
            theCart.AddItem(item) ;             // Add item to cart
        }
            break ;
        case 'd' :
        {
            string removeItem ;                 // IN - name of item to be removed

            cin.ignore() ;
            cout << "REMOVE ITEM FROM CART" << endl ;
            cout << "Enter name of item to remove:" << endl ;
            getline(cin, removeItem) ;
            theCart.RemoveItem(removeItem) ;    // Removes item from cart
        }
            break ;
        case 'c' :
        {
            string changeName ;                 // IN - new ItemToPurchase variable name
            int newQuantity ;                   // IN - new ItemToPurchase variable quantity
            ItemToPurchase changeItem ;         // new ItemToPurchase variable

            cin.ignore() ;
            cout << "CHANGE ITEM QUANTITY" << endl ;
            cout << "Enter the item name:" << endl ;
            getline(cin, changeName) ;
            changeItem.SetName(changeName) ;          // Sets name of new ItemToPurchase variable
            cout << "Enter the new quantity:" << endl ;
            cin >> newQuantity ;
            cout << endl ;
            changeItem.SetQuantity(newQuantity) ;     // Sets quantity of new ItemToPurchase variable
            theCart.ModifyItem(changeItem) ;          // Modifies theCart item
        }
            break ;
        case 'i' :
        {
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl ;
            theCart.PrintDescriptions() ;           // Prints item descriptions in theCart
        }
            break ;
        case 'o' :
        {
            cout << "OUTPUT SHOPPING CART" << endl ;
            theCart.PrintTotal() ;                  // Prints items in and cost of theCart
        }
            break ;
    }
}


/************************************************************************************************
 * Function Main()
 *      This function prompts the user for the customer's name and today's date then outputs
 *      the information provided. The function then prompts the user to select an option from
 *      the menu, and continues to prompt until a valid option is selected. The selection is
 *      processed and prompts for another selection. This is repeated until option 'q' is
 *      selected.
 *
 * INPUT
 *      customersName :   customer's name
 *      todaysDate    :   current date
 *      menuOption    :   option selected from the menu
 * OUTPUT
 *      Customer's name and current date for the current user. Calls PrintMenu() and
 *      ExecuteMenu() functions.
 ************************************************************************************************/
int main()
{
    string customersName ;          // IN - ShoppingCart variable customer's name
    string todaysDate ;             // IN - ShoppingCart variable current date
    char menuOption ;               // IN - user's menu option choice

    // OUTPUT -- prompts for ShoppingCart variable
    cout << "Enter customer's name:" << endl ;
    getline(cin, customersName) ;
    cout << "Enter today's date:" << endl ;
    getline(cin, todaysDate) ;
    cout << endl ;

    // PROCESSING & OUTPUT -- ShoppingCart variable info
    ShoppingCart cart(customersName, todaysDate) ;          // new ShoppingCart variable
    cout << "Customer name: " << customersName << endl ;
    cout << "Today's date: " << todaysDate << endl << endl ;

    // PROCESSING -- menu option selection
    do              // terminates when option 'q' is selected
    {
        PrintMenu() ;
        do          // terminates when valid menu option is selected
        {
            cout << "Choose an option: " ;          // OUTPUT - prompt menu option selection
            cin >> menuOption ;
            cout << endl ;
        } while (menuOption != 'a' && menuOption != 'd' && menuOption != 'c' &&
             menuOption != 'i' && menuOption != 'o' && menuOption != 'q' ) ;
        ExecuteMenu(menuOption, cart) ;
    } while (menuOption != 'q') ;
}
