#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
	int numDrinksBuy ;
	int numDrinksRestock ;
	cin >> numDrinksBuy ;
	cin >> numDrinksRestock ;
	
	VendingMachine inventory ;
	inventory.Purchase(numDrinksBuy) ;
	inventory.Restock(numDrinksRestock) ;
	
	cout << "Inventory: " << inventory.GetInventory() << " bottles" << endl ;
}
