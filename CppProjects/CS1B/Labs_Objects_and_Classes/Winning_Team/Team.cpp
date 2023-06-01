#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

// TODO: Implement mutator functions - 
//       SetName(), SetWins(), SetLosses()
void Team::SetName(string teamName)
{
   name = teamName ;
}

void Team::SetWins(int teamWins)
{
   wins = teamWins ;
}

void Team::SetLosses(int teamLosses)
{
   losses = teamLosses ;
}
   
// TODO: Implement accessor functions - 
//       GetName(), GetWins(), GetLosses()
string Team::GetName()
{
   return name ;
}

int Team::GetWins()
{
   return wins ;
}

int Team::GetLosses()
{
   return losses ;
}
   
// TODO: Implement GetWinPercentage()
float Team::GetWinPercentage()
{
   return static_cast<float>(wins)/(static_cast<float>(wins+losses)) ;
}

// TODO: Implement PrintStanding()
void Team::PrintStanding()
{
   float winPercentage = GetWinPercentage() ;
   cout << setprecision(2) << fixed ;
   cout << "Win percentage: " << winPercentage << endl ;
   if (winPercentage < 0.5)
      cout << "Team " << name << " has a losing average." << endl ;
   else 
      cout << "Congratulations, Team " << name << " has a winning average!" << endl ;
}
