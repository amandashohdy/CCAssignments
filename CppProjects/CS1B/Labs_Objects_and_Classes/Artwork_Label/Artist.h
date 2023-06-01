#ifndef ARTISTH
#define ARTISTH

#include <string>
using namespace std;

class Artist{
   public:
      Artist();

      Artist(string userArtistName, int userBirthYear, int userDeathYear);

      string GetName() const;

      int GetBirthYear() const;

      int GetDeathYear() const;

      void PrintInfo() const;
   
   private:
      string artistName ;
      int birthYear ;
      int deathYear ;

};

#endif
