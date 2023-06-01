#include <iostream>
using namespace std;

int Fibonacci(int n) 
{
   static int num1 = 0;
   static int num2 = 1 ;
   int temp ;
   if (n < 0) 
      return -1 ;
   else if (n == 0)
      return num1 ;
   else
   {
      temp = num2 ;
      num2 = num1 + num2 ;
      num1 = temp ;
      Fibonacci(n-1) ;
   }
}

int main() {
   int startNum;
   
   cin >> startNum;  
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;
   
   return 0;
}
