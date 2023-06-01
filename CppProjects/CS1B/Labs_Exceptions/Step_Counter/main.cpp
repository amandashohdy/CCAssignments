#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

double StepsToMiles(int steps)
{
   if (steps < 0)
      throw runtime_error("Exception: Negative step count entered.") ;
      
   double miles ;
   miles = static_cast<double>(steps)/2000 ;
   return miles ;
}

int main() {

   int stepCount ;
   
   try
   {
      cin >> stepCount ;
      cout << fixed << setprecision(2) ;
      cout << StepsToMiles(stepCount) << endl ;
   }
   catch(runtime_error& except)
   {
      cout << except.what() << endl ;
   }

   return 0;
}
