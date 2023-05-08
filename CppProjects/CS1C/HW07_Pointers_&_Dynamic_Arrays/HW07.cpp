/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW02
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 7 March 2023
 * 
 * HW07.cpp
**********************************/

#include "ManageInventory.h"
#include <iostream>
#include <string>
using std::cout ; 
using std::endl ;
using std:: cin ;
using std::string ;

using namespace hw07 ;

/**************************************************************************
 * Function main()
 *    This function prompts the user to enter the details of an inventory
 * and outputs the inventory. The function then takes in the details of an
 * order and modifies the inventory accordingly. The modified inventory
 * if output to the console. Lastly, a copy of the inventory is made and 
 * output the console.
 * 
 * INPUT
 *    items (int) - the amount of items to be added to the inventory
 * 
 * OUTPUT
 *    The initial inventory is output to the console. The receipt after 
 * purchases are made is output the console. The modified inventory and 
 * the copy of the modified inventory are output to the console. 
 **************************************************************************/
int main()
{
	cout << endl << endl << endl ;
	cout << "*********************" << endl ;
	cout << "*** AMANDA SHOHDY ***" << endl ;
	cout << "***      HW07     ***" << endl ;
	cout << "*********************" << endl << endl << endl ;
	int items ;
	cout << "How many items will be added to the inventory: " ;
	cin >> items ;               // initial inventory
	ManageInventory* ptrInventory = new ManageInventory(items) ; 
	
	// inventory copy using copy constructor 
	ManageInventory* ptrInventoryCopy = new ManageInventory(*ptrInventory) ;

	cout << endl << endl ;
	cout << "***********************" << endl ;
	cout << "** INITIAL INVENTORY **" << endl ;
	cout << "***********************" << endl << endl ;
	ptrInventory->PrintInventory() ;    // output the initial inventory

	cout << endl << endl ;
	cout << "**********************" << endl ;
	cout << "** MARK\'S PURCHASES **" << endl ;
	cout << "**********************" << endl ;
	ptrInventory->BuyItems() ;  // modify inventory and generate receipt

	cout << endl << endl ;
	cout << "*******************************" << endl ;
	cout << "** INVENTORY AFTER PURCHASES **" << endl ;
	cout << "*******************************" << endl << endl ;
	ptrInventory->PrintInventory() ;   // output modified inventory

	cout << endl << endl ;
	cout << "***********************" << endl ;
	cout << "** COPY OF INVENTORY **" << endl ;
	cout << "***********************" << endl << endl ;
	ptrInventoryCopy->PrintInventory() ;  // output copy inventory
	
	delete ptrInventoryCopy ;
	delete ptrInventory ;
}
