#include "Artwork.h"
#include <iostream>

Artwork::Artwork()
{
   title = "unknown" ;
   yearCreated = -1 ;
}

Artwork::Artwork(string userTitle, int userYearCreated, Artist userArtist)
{
   title = userTitle ;
   yearCreated = userYearCreated ;
   artist = userArtist ;
}

string Artwork::GetTitle()
{
   return title ;
}

int Artwork::GetYearCreated()
{
   return yearCreated ;
}

void Artwork::PrintInfo()
{
   artist.PrintInfo() ;
   cout << "Title: " << title << ", " << yearCreated << endl ;
}
