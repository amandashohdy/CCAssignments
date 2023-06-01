#include "OfferedCourse.h"
#include <string>
using namespace std ;

// TODO: Define mutator functions -
//      SetInstructorName(), SetTerm(), SetClassTime()
void OfferedCourse::SetInstructorName(string name) 
{
   instructorName = name ;
}

void OfferedCourse::SetTerm(string uTerm)
{
   term = uTerm ;
}

void OfferedCourse::SetClassTime(string uTime)
{
   classTime = uTime ;
}

// TODO: Define accessor functions -
//      GetInstructorName(), GetTerm(), GetClassTime()
string OfferedCourse::GetInstructorName() const 
{
   return instructorName ;
}

string OfferedCourse::GetTerm() const 
{
   return term ;
}

string OfferedCourse::GetClassTime() const
{
   return classTime ;
}
