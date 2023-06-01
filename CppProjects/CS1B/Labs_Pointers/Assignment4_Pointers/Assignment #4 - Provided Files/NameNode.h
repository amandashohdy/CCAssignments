/***********************************************
*     Author         : George Eaton - Instructor
*     Assignment     : Lynx - Assignment #4
*     Course         : CS1B
*     Section        : TTh: 1:00PM - 3:20PM
*     Due Date       : 03/28/22
***********************************************/

#ifndef NAMENODE_H_
#define NAMENODE_H_

#include <string>
using namespace std;

class NameNode {

	public:
   
      /******************************
       ** CONSTRUCTOR              **
       ******************************/

		NameNode() {
		   name = "";
		   nextNodePtr = nullptr;
		}

      /***************
      /** MUTATORS  **
       ***************/

      void SetName(string aName) { name = aName; }
      void SetNextPtr(NameNode *aNodePtr) { nextNodePtr = aNodePtr; }

      /***************
       ** ACCESSORS **
       ***************/

      string GetName() const { return name; }
      NameNode* GetNextPtr() const { return nextNodePtr; }

	private:
   
		string name;           // IN/OUT - the name user data stored
                             //          in node
		NameNode *nextNodePtr; // IN/OUT - the pointer to next node  
                             //          in the linked list
};

/****************************************************************
 * NameNode Class
 *   This class represents a node in a linked list. It manages 2
 *   data members, name (the user data stored in the class) and
 *   nextNodePtr (a pointer to the next node in the linked list
 ***************************************************************/


/******************************
 ** CONSTRUCTOR              **
 ******************************/
 
/****************************************************************
 * NameNode();
 *   Constructor; Initializes class attributes
 *   Parameters: none
 *   Return: none
 *
 *   Note that this default constructor sets the next node
 *   pointer to nullptr so that this does not need to be
 *   done when a new node is added to the END of a
 *   linked list
 ***************************************************************/


/***************
/** MUTATORS  **
***************/

/*******************************************************************
 * void SetName(string aName);  
 *
 *   Mutator; This method will update the name data member to the  
 *		parameter aName value
 *------------------------------------------------------------------
 *   Parameter: aName (string) // IN – the name for the name data 
 *                             // member
 *------------------------------------------------------------------
 *   Return: none
 *******************************************************************/
 
/*******************************************************************
 * void SetNextPtr(NameNode *aNodePtr);  
 *
 *   Mutator; This method will update the nextNodePtr data member to 
 *   the parameter aNodePtr value
 *------------------------------------------------------------------
 *   Parameter: aNodePtr (NameNode*) // IN – the pointer value for 
 *                                   // the nextNodePtr data member
 *------------------------------------------------------------------
 *   Return: none
 *******************************************************************/ 


/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************
 * string GetName() const;  
 *
 *   Accesor; This method returns the value of the name data member
 *------------------------------------------------------------------
 *   Parameter: none
 *------------------------------------------------------------------
 *   Return: name (string)
 *******************************************************************/

/*******************************************************************
 * NameNode* GetNextPtr() const;  
 *
 *   Accesor; This method returns the value of the nextNodePtr data
 *   member
 *------------------------------------------------------------------
 *   Parameter: none
 *------------------------------------------------------------------
 *   Return: nextNodePtr (NameNode*)
 *******************************************************************/

#endif