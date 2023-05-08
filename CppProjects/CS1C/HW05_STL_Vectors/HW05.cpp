/*********************************
 * AUTHOR       : Amanda Shohdy
 * ASSIGNMENT   : HW02
 * CLASS        : CS1C
 * SECTION      : TTH 1:30-3:50p
 * DUE DATE     : 26 January 2023
 * 
 * HW05.cpp
**********************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std ;

vector<int> Lotto(int range, int spots) ;	// function prototype


/**********************************************************************
 * Function main()
 *      This function creates and modifies a vector called winners 
 * containing integers. The winners vector is assigned a specified 
 * amount of random integers within a specified range using the 
 * Lotto() function. The winning numbers are output to the console 
 * with predefined values and with input from the user. 
 * 
 * INPUT
 *      userRange (int) - the range of numbers to select from
 *      userSpots (int) - the length of the winners vector
 * OUTPUT
 *      The winning numbers produced by predefined values and by the 
 * user's input are output to the console.
 **********************************************************************/
int main() 
{
	cout << endl << endl ;
	cout << "*********************" << endl ;
	cout << "*** AMANDA SHOHDY ***" << endl ;
	cout << "***      HW05     ***" << endl ;
	cout << "*********************" << endl << endl << endl ;

	vector<int> winners ;

	cout << "**********************************" << endl ;
	cout << "* WINNING NUMBERS - LOTTO(51, 6) *" << endl ;
	cout << "**********************************" << endl << endl ;
	winners = Lotto(51, 6) ;   // assign winners vector using Lotto()
	cout << "Winning Numbers: " ;
	for (int i = 0 ; i < 6 ; i++)
	{
		cout << winners[i] << "   " ;
	}               // outputs winner numbers
	cout << endl << endl << endl ;

	cout << "**********************************" << endl ;
	cout << "* WINNING NUMBERS - INPUT VALUES *" << endl ;
	cout << "**********************************" << endl << endl ;
	int userRange, userSpots ;    // take in user selections
	cout << "Enter range: " ;
	cin >> userRange ;
	cout << "Enter number of spots: " ;
	cin >> userSpots ;
	winners = Lotto(userRange, userSpots) ;  // assign winners vector 
	cout << endl ;                           // using Lotto()
	cout << "Winning Numbers: " ;
	for (int i = 0 ; i < userSpots ; i++)
	{
		cout << winners[i] << "   " ;
	}               // outputs winner numbers
	cout << endl << endl << endl ;
}

/**********************************************************************
 * Function Lotto()
 *      This function assigns a vector with a specified amount of 
 * random numbers within a specified range. This function does not 
 * allow the vector to contain repeat values.
 * 
 * PRE-CONDITIONS
 *      range (int) - range of random numbers
 *      spots (int) - length of vector
 * POST-CONDITIONS
 *      A vector containing a specified amount of random numbers 
 * within a specified range is returned. 
 **********************************************************************/
vector<int> Lotto(int range, int spots)
{
	vector<int> nums ;     // all numbers within the range
	vector<int> lotto ;   // winning lotto numbers
	for (int i = 1 ; i <= range ; i++)
	{
		nums.push_back(i) ;    // add all possible numbers
	}
	random_shuffle(nums.begin(), nums.end()) ;  // shuffle all numbers
	for (int i = 0 ; i < spots ; i++)
	{
		lotto.push_back(nums[i]) ;  // add the first 'spots' numbers
	}                               // to the winning lotto numbers
	return lotto ;
}

/*     Without the use of random_shuffle() 
vector<int> Lotto2(int range, int spots)
{
	vector<int> lotto ;
	unsigned seed = time(0) ;   // random seed
	srand(seed) ;
	lotto.push_back(rand() % (range+1)) ; // assigns vector first entry
	for (int i = 1 ; i < spots ; i++)
	{
		int randomNum = rand() % (range+1) ;
		for (int index = 0 ; index < lotto.size() ; index++) 
		{   // for loop and if statement ensure no repeat values
			if (randomNum == lotto.at(index) || randomNum == 0) 
			{
				randomNum = rand() % (range+1) ;
				index = 0 ;
			}
		}
		lotto.push_back(randomNum) ;    // add random number to vector
	}
	return lotto ;
}
*/
