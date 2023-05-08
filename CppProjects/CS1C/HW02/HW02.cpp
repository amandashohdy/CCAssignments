/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW02
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 26 January 2023
**********************************/

#include "CardDeck.h"
#include <string>
#include <iostream>
using namespace std ;

/********************************************************************
 * Function main()
 * 		This function calls methods of the CardDeck class to
 * 	perform shuffles, compare decks of cards, and print the deck of
 * 	cards.
 *
 * INPUT
 * 		none
 *
 * OUTPUT
 * 		The initial cards deck, the deck after one shuffle, and the
 * 	final deck after two shuffles are output. A statement about how
 * 	many shuffles are necessary to return the deck to its original
 * 	state is also output.
*********************************************************************/
int main() 
{
	int shuffleCount = 0 ;		// counts shuffles till original deck
	CardDeck deck ;				// CardDeck object
	cout << "*****************" << endl ;
	cout << "  INITIAL DECK: " << endl ;
	cout << "*****************" << endl << endl ;
	deck.PrintDeck() ;			// calls PrintDeck() method
	deck.PerformShuffle() ;		// performs shuffle on deck
	shuffleCount++ ;
	cout << "***************************" << endl ;
	cout << "  DECK AFTER ONE SHUFFLE: " << endl ;
	cout << "***************************" << endl << endl ;
	deck.PrintDeck() ;			// prints shuffled deck
	deck.PerformShuffle() ;		// performs second shuffle
	shuffleCount++ ;
	cout << "***************" << endl ;
	cout << "  FINAL DECK: " << endl ;
	cout << "***************" << endl << endl ;

	CardDeck originalDeck ;   // unshuffled deck being passed into compare function
	bool endShuffle = false ;	// value to terminate while loop
	do
	{
		deck.PerformShuffle() ;	// performs shuffle
		shuffleCount++ ;			// counts each shuffle
		endShuffle = deck.CompareDecks(originalDeck) ; /* returns true if
												    decks are the same */
	} while (endShuffle == false) ;  // keep shuffling if decks are different
	deck.PrintDeck() ;
	cout << shuffleCount << " perfect shuffles are necessary to return the deck" <<
		 " to its original form." << endl ; // output shuffles till original reached
}
