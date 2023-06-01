#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"
#include <string>

class StringInstrument : public Instrument {
	// TODO: Declare private data members: numStrings, numFrets
	private :
	   string numStrings ;
	   string numFrets ;

   public :
	// TODO: Declare mutator functions - 
	//      SetNumOfStrings(), SetNumOfFrets()
	   void SetNumOfStrings(string strings) ;
	   void SetNumOfFrets(string frets) ;

	// TODO: Declare accessor functions -
	//      GetNumOfStrings(), GetNumOfFrets()
	   string GetNumOfStrings() const ;
	   string GetNumOfFrets() const ;


};

#endif
