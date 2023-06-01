#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	// TODO: Declare private data members - courseNumber, courseTitle
   private :
      string courseNumber ;
      string courseTitle ;
      
   public :

	// TODO: Declare mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()
	void SetCourseNumber(string number) ;
	void SetCourseTitle(string title) ;

	// TODO: Declare accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
   string GetCourseNumber() const ;
   string GetCourseTitle() const ;

	// TODO: Declare PrintInfo()
	void PrintInfo() const ;

};

#endif
