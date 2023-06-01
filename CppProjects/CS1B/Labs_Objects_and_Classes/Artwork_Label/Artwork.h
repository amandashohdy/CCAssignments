#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"

class Artwork{
   public:
      Artwork();

      Artwork(string userTitle, int userYearCreated, Artist userArtist);

      string GetTitle();

      int GetYearCreated();

      void PrintInfo();
   
   private:
      string title ;
      int yearCreated ;
      Artist artist ;

};

#endif
