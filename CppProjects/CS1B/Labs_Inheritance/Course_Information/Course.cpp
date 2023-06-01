#include "Course.h"
#include <string>
using namespace std ;

	// TODO: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string number)
{
   courseNumber = number ;
}

void Course::SetCourseTitle(string title)
{
   courseTitle = title ;
}

	// TODO: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
string Course::GetCourseNumber() const
{
   return courseNumber ;
}

string Course::GetCourseTitle() const
{
   return courseTitle ;
}

	// TODO: Define PrintInfo()
void Course::PrintInfo() const
{
   cout << "Course Information: " << endl ;
   cout << "   Course Number: " << courseNumber << endl ;
   cout << "   Course Title: " << courseTitle << endl ;
}
