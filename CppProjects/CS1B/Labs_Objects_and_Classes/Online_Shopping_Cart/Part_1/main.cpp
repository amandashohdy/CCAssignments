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

/*******************************************************************
 * Function Main
 *    This function prompts the user for two items and creates two
 *    ItemToPurchase objects.
 * 
 * INPUTS
 *    name:      item's name
 *    price:     item's price
 *    quantity:  quantity purchased
 * OUTPUTS
 *    Summary of the costs for each item purchased and a total of 
 *    all items combined.
 *******************************************************************/
int main() 
{
   // Variable Declaration
   ItemToPurchase item1 ;                 // DECLARE - ItemToPurchase object
   ItemToPurchase item2 ;                 // DECLARE - ItemToPurchase object
   string         name ;                  // IN - item's name
   int            price ;                 // IN - item's price
   int            quantity ;              // IN - quantity purchased
   
   // INPUT & OUTPUT -- Item1's name, price, and quantity
   cout << "Item 1" << endl ;
   cout << "Enter the item name:" << endl ;
   getline(cin, name) ;
   cout << "Enter the item price:" << endl ;
   cin >> price ;
   cout << "Enter the item quantity:" << endl ;
   cin >> quantity ;
   cout << endl ;
   
   // PROCESSING -- Set item1's name, price, and quantity
   item1.SetName(name) ;
   item1.SetPrice(price) ;
   item1.SetQuantity(quantity) ;
   
   cin.ignore() ;
   
   //INPUT & OUTPUT -- Item2's name, price, and quantity
   cout << "Item 2" << endl ;
   cout << "Enter the item name:" << endl ;
   getline(cin, name) ;
   cout << "Enter the item price:" << endl ;
   cin >> price ;
   cout << "Enter the item quantity:" << endl ;
   cin >> quantity ;
   cout << endl ;
   
   //PROCESSING -- Set item2's name, price, and quantity
   item2.SetName(name) ;
   item2.SetPrice(price) ;
   item2.SetQuantity(quantity) ;
   
   //OUTPUT -- output the summary of purchase 
   cout << "TOTAL COST" << endl ;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" 
   << item1.GetPrice()*item1.GetQuantity() << endl ;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" 
   << item2.GetPrice()*item2.GetQuantity() << endl ;
   cout << endl ;
   cout << "Total: $" << item1.GetPrice()*item1.GetQuantity() + item2.GetPrice()*item2.GetQuantity() << endl ;

   return 0;
}
