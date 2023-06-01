#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team 
{
   public :
      // TODO: Declare mutator functions - 
      //       SetName(), SetWins(), SetLosses()
      void SetName(string teamName) ;
      void SetWins(int teamWins) ;
      void SetLosses(int teamLosses) ;
      
      // TODO: Declare accessor functions - 
      //       GetName(), GetWins(), GetLosses()
      string GetName() ;
      int GetWins() ;
      int GetLosses() ;
      
      // TODO: Declare GetWinPercentage()
      float GetWinPercentage() ;
      
      // TODO: Declare PrintStanding()
      void PrintStanding() ;
   
   // TODO: Declare private data members - name, wins, losses
   private :
      string name ;
      int wins ;
      int losses ;
};

#endif
