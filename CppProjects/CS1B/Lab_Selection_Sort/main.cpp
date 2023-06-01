#include <iostream>

using namespace std;

void SelectionSortDescendTrace(int numbers [], int numElements) 
{
   int maxValue, maxIndex ;
   for (int start = 0 ; start < numElements-1 ; start++)
   {
      maxValue = numbers[start] ;
      maxIndex = start ;
      for (int index = start+1 ; index < numElements ; index++)
      {
         if (numbers[index] > maxValue)
         {
            maxValue = numbers[index] ;
            maxIndex = index ;
         }
      }
      numbers[maxIndex] = numbers[start] ;
      numbers[start] = maxValue ;
      for (int i = 0 ; i < numElements ; i++)
      {
         cout << numbers[i] << " " ;
      }
      cout << endl ;
   }
}


int main() {
   int input, i = 0;
   int numElements = 0;
   int numbers [10];

   for (i = 0 ; i <= 10 ; i++)
   {
      cin >> input ;
      if (input == -1)
      {
         SelectionSortDescendTrace(numbers, numElements) ;
         break ;
      }
      else
      {
         numbers[i] = input ;
         numElements++ ;
      }
   }

  return 0;
}
