#include "InventoryNode.h"

int main() {
	int count;
	int numItems;
	string item;

	InventoryNode *headNode = new InventoryNode(); // this is the dummy head node. The pointer to the first
	                                               // data node is headNode->GetNode()

	InventoryNode *currNode;                       // this is a pointer to the current data node and is used
	                                               // for processing

	// Obtain number of items
	cin >> count;

	// Get each item and number of each
	for (int i = 0; i < count; i++) {
		cin >> item;
		cin >> numItems;
		currNode = new InventoryNode(item, numItems);
		currNode->InsertAtFront(headNode, currNode); // this is the method you need to write. Note
		                                             // that the first parameter is the pointer to the
		                                             // dummy head node and the second is a pointer to an
		                                             // actual data node to be placed at the front of the
		                                             // linked list.
	}

	// Print linked list
	currNode = headNode->GetNext(); // note that currNode is initialized to headNode->GetNext(), the
	                                // first data node in the list (recall headNode is a dummy node)
	while (currNode != NULL) {
		currNode->PrintNodeData();
		currNode = currNode->GetNext();
	}

	return 0;
}
