/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW02
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 26 January 2023
**********************************/

#ifndef CARDDECK_H_
#define CARDDECK_H_

#include <string>
using namespace std ;

enum SuitType		// enumeration type for suits
{
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES 
} ;

enum RankType		// enumeration type for ranks
{
	ACE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX, 
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING
} ;

struct Card			// data type of a card
{
	SuitType suit ;
	RankType rank ;
} ;

class CardDeck
{
	public :

	/*****************
	 ** CONSTRUCTOR **
	 *****************/
		CardDeck() ;

	/*************
	 ** MUTATOR **
	 *************/
		void PerformShuffle() ;

	/***************
	 ** ACCESSORS **
	 ***************/
		void PrintDeck() ;
		bool CompareDecks(CardDeck origDeck) ;
	private :
		static const int DECK_SIZE = 52 ;	// constant for deck size
		Card deck[DECK_SIZE] ;				// array of Card type
} ;

#endif /*CARDDECK_H_*/


/**********************************************************************
 * CardDeck Class
 * 		This class represents the CardDeck object. It manages one
 * 	attribute: deck[].
 **********************************************************************/


/*****************
 ** CONSTRUCTOR **
 *****************/

/**********************************************************************
 * CardDeck()
 * 		Constructor:		Initialize class attributes
 *
 * 		Parameters :		none
 * 		Return	   :		none
 **********************************************************************/


/*************
 ** MUTATOR **
 *************/

/**********************************************************************
 * void PerformShuffle()
 * 		Mutator 	  : 		Performs the perfect shuffle on the deck attribute
 *
 * 		Parameters:		none
 * 		Return    : 		none
 **********************************************************************/


/***************
 ** ACCESSORS **
 ***************/

/**********************************************************************
 * void PrintDeck()
 * 		Accessor : 		Outputs the items in the deck array
 *
 * 		Parameter:		none
 * 		Return	 :		none
 **********************************************************************/

/**********************************************************************
 * bool CompareDecks(CardDeck origDeck)
 * 		Accessor : 		Compares a shuffled deck to the original deck
 *
 * 		Parameter: 		origDeck (CardDeck) - unshuffled deck 
 * 		Return	 :		result (bool)  // true if decks are the same
 * 									   // false if decks are different
 **********************************************************************/
