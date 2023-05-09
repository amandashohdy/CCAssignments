/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : ASSIGNMENT #4
 * CLASS        : CS1B
 * SECTION      : MW 1:30 - 3:50p
 * DUE DATE     : 10 OCTOBER 2022
 *********************************/

#include "NameList.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

/**********************************************************************
 * Function Main()
 *      This functions prompts the user for the name of the file to be
 *      accessed. A menu option is executed from the file or flagged as
 *      an invalid option. The selection is processed and the cycle
 *      repeats until the option 'q' is selected.
 *
 * INPUT
 *      fileName :      file to be opened
 *      name     :      name to be added, deleted, or counted in the
 *                      list
 * OUTPUT
 *      Processed information is output to the console or an invalid
 *      selection message is output.
 **********************************************************************/
int main()
{
    string filename ;           // IN - name of file to be processed
    NameList names ;            // PROCESSING - NameList object created
    char command ;              // IN - operation read from file
    int occurs ;                // PROCESSING - amount of times name occurs
    string name ;               // IN - string name to be added, deleted,
                                // or counted
    ifstream namesFile ;
    cin >> filename ;
    namesFile.open(filename) ;  // Open file

    do
    {
        namesFile >> command ;  // Read in command
        switch (command)        // Process command
        {
            case '+' :          // Add names
            {
                namesFile >> name ;
                names.AddName(name) ;
                cout << "Adding name: " << name << endl ;
            }
            break ;

            case '-' :          // Delete names
            {
                namesFile >> name ;
                cout << "Deleting name: " << name ;
                if (!(names.DeleteName(name)))
                    cout << " -> name " << name << " not found!" << endl ;
                else
                    cout << endl ;
            }
            break ;

            case '#' :          // Count names
            {
                namesFile >> name ;
                occurs = names.CountName(name) ;
                if (occurs == 1)
                    cout << "Name " << name << " occurs " << occurs	<< " time" << endl ;
                else
                    cout << "Name " << name << " occurs " << occurs << " times" << endl ;
            }
            break ;

            case 'd' :          // Display list of names
            {
                if (names.Size() != 0)
                    cout << "List of names:" << endl ;
                cout << names.DisplayNames() << endl ;
            }
            break ;

            case 't' :          // Total names in list
            {
                if (names.Size() > 1)
                    cout << "There are " << names.Size() << " names in the list" << endl ;
                else if (names.Size() == 1)
                    cout << "There is " << names.Size() << " name in the list" << endl ;
                else
                    cout << "There are no names in the list" << endl ;
            }
            break ;

            case 'c' :          // Clears the list
            {
                if (names.Size() > 1 || names.Size() == 0)
                    cout << "Clearing list of " << names.Size() << " nodes" << endl ;
                else if (names.Size() == 1)
                    cout << "Clearing list of " << names.Size() << " node" << endl ;
                names.Clear() ;
            }
            break ;

            case 'q' :          // Quits the program
            {
                if (names.Size() > 1 || names.Size() == 0)
                    cout << "Clearing list of " << names.Size() << " nodes" << endl ;
                else if (names.Size() == 1)
                    cout << "Clearing list of " << names.Size() << " node" << endl ;
                names.Clear() ;
                cout << endl ;
                cout << "Thank you for using my name program." << endl ;
            }
            break ;

            default :           // Error message for unknown command
            {
                cout << "Unknown command " << command << endl ;
                namesFile.ignore(300, '\n') ;
            }
        }
    // Quits program when 'q' is read or end of file
    } while (command != 'q' && (!namesFile.eof())) ;
    namesFile.close() ;             // closes file

    return 0 ;
}
