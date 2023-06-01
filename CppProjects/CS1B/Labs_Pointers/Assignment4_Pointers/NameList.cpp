/*********************************
 * AUTHOR	    : Amanda Shohdy
 * ASSIGNMENT	: ASSIGNMENT #4
 * CLASS		    : CS1B
 * SECTION	    : MW 1:30 - 3:50p
 * DUE DATE		: 10 OCTOBER 2022
 *********************************/

#include "NameList.h"
#include <iostream>
#include <string>
using namespace std ;

/*********************************************************************************
 * Method AddName: Class NameList
 * 		This method adds the string aName to the end of a list
 *
 * PRE-CONDITIONS
 * 		aName 	: name being added to list
 * POST-CONDITIONS
 * 		Memory is allocated to add a name to the end of the linked list. There is
 * 		no return value.
 *********************************************************************************/
void NameList::AddName(string aName)
{
	NameNode* newNodePtr = new NameNode() ;
	newNodePtr->SetName(aName) ;
	newNodePtr->SetNextPtr(nullptr) ;
	if (head == nullptr)
	{
		head = newNodePtr ;
	}
	else
	{
		NameNode* temp = head ;
		while (temp->GetNextPtr() != nullptr)
		{
			temp = temp->GetNextPtr() ;
		}
		temp->SetNextPtr(newNodePtr) ;
	}

	count++ ;
}

/*********************************************************************************
 * Method DeleteName: Class NameList
 * 		This method deletes a name from the list
 *
 * PRE-CONDITIONS
 * 		aName 	: name to find and delete from the list
 * POST-CONDITIONS
 * 		If aName is located in the list, memory associated is deallocated and the
 * 		return value is true. Otherwise, return value is false.
 *********************************************************************************/
bool NameList::DeleteName(string aName)
{
	NameNode* prevNode = head ;
	NameNode* currNode ;
	currNode = prevNode->GetNextPtr() ;
	bool found = false ;
	if (currNode != nullptr)
	{
		while (currNode != nullptr && !found)
		{
			if (currNode->GetName() == aName)
			{
				found = true ;
				prevNode->SetNextPtr(currNode->GetNextPtr()) ;
				delete currNode ;
			}
			prevNode = prevNode->GetNextPtr() ;
			currNode = currNode->GetNextPtr() ;
		}
	}
	else
	{
		if (prevNode->GetName() == aName)
		{
			found = true ;
			delete head ;
			head = nullptr ;
		}
	}
	if(found)
		count-- ;
	return found ;
}

/*********************************************************************************
 * Method CountName: Class NameList
 * 		This method counts the instances of a specific name, aName, in the list
 *
 * PRE-CONDITIONS
 * 		aName 	: name to be counted in list
 * POST-CONDITIONS
 * 		Returns the number of time aName occurs in the list.
 *********************************************************************************/
int NameList::CountName(string aName) const
{
	NameNode* currNode ;
	int nameOccurs = 0 ;
	for (currNode = head ; currNode != nullptr ; currNode = currNode->GetNextPtr())
	{
		if (currNode->GetName() == aName)
		{
			nameOccurs++ ;
		}
	}
	return nameOccurs ;
}

/*********************************************************************************
 * Method DisplayNames: Class NameList
 * 		This method returns a string of the names in the list
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		A string of the names in the list. If list is empty, string "There are no
 * 		names to display" is returned.
 *********************************************************************************/
string NameList::DisplayNames() const
{
	NameNode* currPtr ;
	string output ;
	if (count > 0)
	{
		for (currPtr = head ; currPtr != nullptr ; currPtr = currPtr->GetNextPtr())
		{
			if (currPtr->GetNextPtr() != nullptr)
				output += currPtr->GetName() + "\n" ;
			else
				output += currPtr->GetName() ;
		}
		return output ;
	}
	else
		return "There are no names to display" ;
}

/*********************************************************************************
 * Method Clear: Class NameList
 * 		This method deallocates all memory in the list
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		All memory is deallocated. There is no return value.
 *********************************************************************************/
void NameList::Clear()
{
	NameNode* currNode = head ;
	NameNode* tempNode ;
	while (currNode != nullptr)
	{
		tempNode = currNode->GetNextPtr() ;
		delete currNode ;
		currNode = tempNode ;
	}
	head = nullptr ;
	count = 0 ;
}

