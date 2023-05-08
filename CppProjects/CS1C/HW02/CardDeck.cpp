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

// array of strings for associated enumeration types RankType and SuitType
string rankList[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
					   "Eight", "Nine", "Ten", "Jack", "Queen", "King"} ;
string suitList[4] = {"Clubs", "Diamonds", "Hearts", "Spades"} ;

/**********************************************************************
 * Method CardDeck(): Class CardDeck
 * 		This method is a constructor that initializes the deck member
 * 	of the CardDeck class.
 *
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		The deck data member is initialized with Card types. There is
 * no return value.
 **********************************************************************/
CardDeck :: CardDeck()
{
	int currentCard = 0 ;
	for (int currSuit = CLUBS ; currSuit <= SPADES ; currSuit++)
	{
		for (int currRank = ACE ; currRank <= KING ; currRank++)
		{
			deck[currentCard].suit = SuitType(currSuit) ;
			deck[currentCard].rank = RankType(currRank) ;
			currentCard++ ;
		}
	}
}

/**********************************************************************
 * Method PerformShuffle(): Class CardDeck
 * 		This method performs a perfect shuffle on the deck member.
 *
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		The contents of the deck array are rearranged so that the item
 * 	in the 27th position is in the 2nd, the item in the 28th position
 * 	is in the 4th and so on. There is no return value.
 **********************************************************************/
void CardDeck :: PerformShuffle()
{
	Card shuffled[DECK_SIZE] ;	// temp deck for performing shuffle
	int halfOne = 0 ;			// first half of the card deck
	int halfTwo = 26 ;			// second half of the card deck
	for (int currCard = 0 ; currCard < DECK_SIZE ; currCard++)
	{
		shuffled[currCard] = deck[halfOne] ;
		currCard++ ;
		shuffled[currCard] = deck[halfTwo] ;
		halfOne++ ;
		halfTwo++ ;
	}
	// save deck member with shuffled data
	for (int currCard = 0 ; currCard < DECK_SIZE ; currCard++)
	{
		deck[currCard] = shuffled[currCard] ;
	}
}

/**********************************************************************
 * Method PrintDeck(): Class CardDeck
 * 		This method outputs the deck member.
 *
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		The contents of the deck array are output. There is no return
 * value.
 **********************************************************************/
void CardDeck :: PrintDeck()
{
	for (int currCard = 0 ; currCard < DECK_SIZE ; currCard++)
	{
		cout << rankList[deck[currCard].rank] << " of "
			 << suitList[deck[currCard].suit] << endl ;
		if ((currCard+1) % 13 == 0)		//separates cards into
			cout << endl ;				//groups of 13
	}
}

/**********************************************************************
 * Method CompareDecks(): Class CardDeck
 * 		This method compares a deck of cards to the original state of
 * a card deck.
 *
 * PRE-CONDITIONS
 * 		none
 * POST-CONDITIONS
 * 		The current deck member is compared to an un-shuffled deck.
 * If the decks are the same, the return value, result, is true. If the
 * decks are different, the return value, result, is false.
 **********************************************************************/
bool CardDeck :: CompareDecks(CardDeck origDeck)
{
	bool result = true ;		// return value
	for (int currentCard = 0 ; currentCard < DECK_SIZE ; currentCard++)
	{
		if (deck[currentCard].suit != origDeck.deck[currentCard].suit
		 || deck[currentCard].rank != origDeck.deck[currentCard].rank)
		{
			result = false ;
			currentCard = DECK_SIZE ;	// terminates for loop
		}
	}
	return result ;
}
