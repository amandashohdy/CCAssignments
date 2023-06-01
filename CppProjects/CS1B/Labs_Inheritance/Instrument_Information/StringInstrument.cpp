#include "StringInstrument.h"
#include <string>

// TODO: Define mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets()
   	void StringInstrument::SetNumOfStrings(string strings)
   	{
   	   numStrings = strings ;
   	}
   	
	   void StringInstrument::SetNumOfFrets(string frets) 
	   {
	      numFrets = frets ;
	   }


// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets()
      string StringInstrument::GetNumOfStrings() const 
      {
         return numStrings ;
      }
	   string StringInstrument::GetNumOfFrets() const 
	   {
	      return numFrets ;
	   }

