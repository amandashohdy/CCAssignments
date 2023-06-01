#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	// TODO: Declare private data members - instructorName, term, classTime
   private :
      string instructorName ;
      string term ;
      string classTime ;

   public :
	// TODO: Declare mutator functions -
	//      SetInstructorName(), SetTerm(), SetClassTime()
	void SetInstructorName(string name) ;
	void SetTerm(string uTerm) ;
	void SetClassTime(string uTime) ;

	// TODO: Declare accessor functions -
	//      GetInstructorName(), GetTerm(), GetClassTime()
   string GetInstructorName() const ;
   string GetTerm() const ;
   string GetClassTime() const ;

};

#endif
