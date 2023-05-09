#include <iostream>
#include <string>
using namespace std;

class InventoryNode {
private:
	string item;
	int numberOfItems;
	InventoryNode *nextNodeRef;

public:
	//Default Constructor
	InventoryNode() {
		this->item = "";
		this->numberOfItems = 0;
		this->nextNodeRef = NULL;
	}

	//Constructor with two parameters
	InventoryNode(string itemInit, int numberOfItemsInit) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = NULL;
	}

	//Constructor with three parameters
	InventoryNode(string itemInit, int numberOfItemsInit, InventoryNode nextLoc) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = &nextLoc;
	}


	// TODO: Define an InsertAtFront() method that inserts a node at the
	//       front of the linked list (after the dummy head node)
	// HINT: this method should have two formal parameters (see the call to
	//       this method in main): one parameter is a pointer to the dummy
	//       head node and the other parameter is a pointer to the node to
	//       be put at the front of the list. head, being a dummy pointer, does
	//       not have data in it. Its nextNodeRef private data member
	//       points to the first node with data in it.
	//       This method can access private data members directly for both formal
	//       parameters (e.g. nextNodeRef can be accessed directly) since it is
	//       a part of the class definition.
	//       FINAL POINT: the body of your solution should be a couple lines of code!
	void InsertAtFront(InventoryNode* headNode, InventoryNode* currNode)
	{
		InventoryNode* tempNode = nullptr ;

		tempNode = headNode->nextNodeRef ;
		headNode->nextNodeRef = currNode ;
		currNode->nextNodeRef = tempNode ;
	}


	//Get the next node
	InventoryNode *GetNext() {
		return this->nextNodeRef;
	}

	//Print node data
	void PrintNodeData() {
		cout << this->numberOfItems << " " << this->item << endl;
	}
};
