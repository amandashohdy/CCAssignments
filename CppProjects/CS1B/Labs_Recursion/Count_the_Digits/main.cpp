#include <iostream>
using namespace std;

/* TODO: Write recursive DigitCount() function here. */
int DigitCount(int num) 
{
   static int size = 1 ;
   if (num < 10)
      return size ;
   else
   {
      size++ ;
      DigitCount(num/10) ;
   }
}


int main() {
   int num;
   int digits;

   cin >> num;
   digits = DigitCount(num);
   cout << digits << endl;
   return 0;
}
