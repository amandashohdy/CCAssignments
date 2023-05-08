/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW07
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 7 March 2023
 * 
 * ManageInventory.cpp
**********************************/

#include "ManageInventory.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
using std::cout ;
using std::endl ;
using std:: cin ;
using std::string ;
using namespace hw07 ;

/******************************************************************************************************
 * Method ManageInventory(): Class ManageInventory
 *      This constructor initializes class attributes to default values.
 * 
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      Class attributes are initialized to default values. There is no return value. 
 ******************************************************************************************************/
ManageInventory::ManageInventory()
: count{0}, p_pInventoryItems{new Item* [size]} {} 

/******************************************************************************************************
 * Method ManageInventory(): Class ManageInventory
 *      This constructor initializes the size attribute to a passed value. 
 * 
 * PRE-CONDITIONS
 *      size (int) - size of the inventory
 * POST-CONDITIONS
 *      This constructory initializes the size attribute to a passed value and the other attributes to 
 *      defaults. There is no return value. 
 ******************************************************************************************************/
ManageInventory::ManageInventory(int size) 
: size{size}, count{0}, p_pInventoryItems{new Item* [size]} 
{
	string itemName ;
	int itemQuantity ;
	float itemCost ;
	for ( ; count < size ; count++)     // add Item objects to inventory
	{
		cin.ignore() ;
		Item* ptrAddItem = new Item ;
		cout << "Enter item name: " ;
		getline(cin, itemName);
		ptrAddItem->name = itemName ;
		cout << "Enter item quantity: " ;
		cin >> itemQuantity ;
		ptrAddItem->quantity = itemQuantity ;
		cout << "Enter item cost: " ;
		cin >> itemCost ;
		ptrAddItem->cost = itemCost ;
		p_pInventoryItems[count] = ptrAddItem ;
		cout << endl ;
	}
}

/******************************************************************************************************
 * Method ManageInventory(): Class ManageInventory
 *      This copy constructor intializes class attributes to the values of the passed object. 
 * 
 * PRE-CONDITIONS
 *      source (const ManageInventory&) - object being copied
 * POST-CONDITIONS
 *      Class attributes are initialized to the values of the passed object. There is no return value.
 ******************************************************************************************************/
ManageInventory::ManageInventory(const ManageInventory& source)
{
	// simple copies
	size = source.size ;
	count = source.count ;

	// deep copies
	p_pInventoryItems = new Item* [size] ;
	for (int i = 0 ; i < size ; i++)
	{
		Item* newItemPtr = new Item ;
		newItemPtr->name = source.p_pInventoryItems[i]->name ;
		newItemPtr->quantity = source.p_pInventoryItems[i]->quantity ;
		newItemPtr->cost = source.p_pInventoryItems[i]->cost ;
		p_pInventoryItems[i] = newItemPtr ;
	}
}

/******************************************************************************************************
 * Method ~ManageInventory(): Class ManageInventory
 *      This destructor frees allocated memory. 
 * 
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      All memory associated with an object is released. There is no return value. 
 ******************************************************************************************************/
ManageInventory::~ManageInventory()
{
	for (int i = 0 ; i < size ; i++)    // delete each object in array
	{
		delete p_pInventoryItems[i] ;
	}
	delete[] p_pInventoryItems ;        // delete array
}

/******************************************************************************************************
 * Method BuyItems(): Class ManageInventory
 *      This method modifies the inventory based on the customers purchases and generates a receipt. 
 * 
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      The quantity of items in the inventory are modified based on the customer's purchases. A 
 *      receipt of their purchases is generated. There is no return value. 
 ******************************************************************************************************/
void ManageInventory::BuyItems() 
{
	string selection ;
	int amount ;
	double total = 0 ;
	std::vector<string> items ;     // receipt
	std::vector<int> quantities ;   // receipt
	std::vector<float> costs ;      // receipt

	do 
	{
		cin.ignore() ;
		cout << "What would you like to purchase (enter 'done' to end): " ;
		getline(cin, selection) ;
		if (selection != "done" )
		{
			for (int i = 0 ; i < size ; i++) 
			{
				if ((p_pInventoryItems[i])->name == selection)
				{
					cout << "How many would you like to purchase: " ;
					cin >> amount ;
					total += (p_pInventoryItems[i])->cost * amount ; 
					(p_pInventoryItems[i])->quantity -= amount ;    // modify Item quantity
					items.push_back(selection) ;
					quantities.push_back(amount) ;
					costs.push_back((p_pInventoryItems[i])->cost * amount) ;
				}
			}		
		}
	} while (selection != "done") ;

	// output receipt
	cout << std::left << endl << endl ;
	cout << "Receipt" << std::fixed << std::setprecision(2) << endl << endl ;
	cout << std::setw(25) << "Name" << std::setw(15) << "Quantity" << std::setw(10) << "Cost" << endl ;
	for (int i = 0 ; i < items.size() ; i++)
	{
		cout << std::left << std::setw(25) << items[i] << std::right << std::setw(8) << quantities[i] 
		     << std::setw(8) << "$" << costs[i] << endl ;
	}
	cout << endl ;
	cout << "Total Before Tax: $" << total << endl ;
	cout << "Total After Tax: $" << (total += total * 0.0825) << endl ;
}

/******************************************************************************************************
 * Method PrintInventory(): Class ManageInventory
 *      This method outputs the inventory information.
 * 
 * PRE-CONDITIONS
 *      none
 * POST-CONDITIONS
 *      The inventory information is output to the console. There is no return value. 
 ******************************************************************************************************/
void ManageInventory::PrintInventory() const 
{
	cout << std::left 
	     << std::setw(25) << "Name" << std::setw(15) << "Quantity" << std::setw(10) << "Cost" << endl ;
	for (int i = 0 ; i < size ; i++)
	{
		cout << std:: left << std::setw(25) << (p_pInventoryItems[i])->name << std::right << 
		        std::setw(8) << (p_pInventoryItems[i])->quantity <<
		        std::setw(8) << "$" << (p_pInventoryItems[i])->cost << endl ;
	}
	cout << endl ;
}
