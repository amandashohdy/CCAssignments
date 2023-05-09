/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : ASSIGNMENT #4
 * CLASS        : CS1B
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 10 OCTOBER 2022
 *********************************/

#ifndef NAMELIST_H_
#define NAMELIST_H_

#include <string>
#include "NameNode.h"
using namespace std ;

class NameList
{
    public :

        /*****************
         ** CONSTUCTORS **
         *****************/
        NameList()
        {
            head = nullptr ;
            count = 0 ;
        }

        /**************
         ** MUTATORS **
         **************/
        void AddName(string aName) ;
        bool DeleteName(string aName) ;
        void Clear() ;

        /***************
         ** ACCESSORS **
         ***************/
        int Size()
        {
            return count ;
        }
        int CountName(string aName) const ;
        string DisplayNames() const ;


    private :
        NameNode* head ;        // PROCESSING - address of first item
        int count ;             // PROCESSING/OUTPUT - number of items in list
} ;


/**********************************************************************
 * NameList Class
 *      This class represents the NameList object. It manages 2
 *      attributes: head and count ;
 **********************************************************************/


/*****************
 ** CONSTUCTORS **
 *****************/

/**********************************************************************
 * NameList()
 *      Constructor; Initialize class attributes
 *      Parameters : none
 *      Return     : none
 **********************************************************************/


/**************
 ** MUTATORS **
 **************/

/**********************************************************************
 * void AddName(string aName) ;
 *      Mutator; Adds the string aName to the end of the list
 *
 *      Parameter : aName (string)  // IN - name to be added to list
 *      Return    : none
 **********************************************************************/

/**********************************************************************
 * bool DeleteName(string aName) ;
 *      Mutator; Deletes aName's matching list item from the list
 *
 *      Parameter : aName(string)  // IN - name to be deleted from list
 *      Return    : found (bool)   // PROCESSING - name found or not
 **********************************************************************/

/**********************************************************************
 * void Clear() ;
 *      Mutator; Clears list and deallocates memory
 *
 *      Parameter : none
 *      Return    : none
 **********************************************************************/


/***************
 ** ACCESSORS **
 ***************/

/**********************************************************************
 * int Size() ;
 *      Accessor; This method returns the count data member
 *
 *      Parameters : none
 *      Return     : count (int)  // PROCESSING - number of list items
 **********************************************************************/

/**********************************************************************
 * int CountName(string aName) const ;
 *      Accessor; This methos returns the number of instances the
 *      string aName occurs in the list
 *
 *      Parameter : aName (string)   // IN - name to search list for
 *      Return    : nameOccurs (int) // OUTPUT - times name occurs
 **********************************************************************/

/**********************************************************************
 * string DisplayNames() const ;
 *      Accessor; This method outputs the names in the list
 *
 *      Parameter : none
 *      Return    : output (string)  // OUTPUT - string of list contents
 **********************************************************************/

#endif /* NAMELIST_H_ */
