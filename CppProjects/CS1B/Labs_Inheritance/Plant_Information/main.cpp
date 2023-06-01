#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints an vector of plant (or flower) object pointers
void PrintVector(vector<Plant*>& garden)
{
   for (int i = 0 ; i < garden.size() ; i++)
   {
      garden.at(i)->PrintInfo() ;
      cout << endl ;
   }
}

int main() {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden ;

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
   string plantName ;
   int plantCost ;
   string flowerName ;
   int flowerCost ;
   bool isAnnual ;  
   string colorOfFlowers ; 
   string input;

   cin >> input;

   while(input != "-1") {
   // TODO: Check if input is a plant or flower
   //       Store as a plant object or flower object
   //       Add to the vector myGarden
      if (input == "plant") 
      {
         Plant* plantPtr = new Plant ;
         
         cin >> plantName ;
         cin >> plantCost ;
         
         plantPtr->SetPlantName(plantName) ;
         plantPtr->SetPlantCost(plantCost) ;
         myGarden.push_back(plantPtr) ;
      }
      else if (input == "flower")
      {
         string annual ;
         Flower* flowerPtr = new Flower ;
         
         cin >> flowerName ;
         cin >> flowerCost ;
         cin >> annual ;
         if (annual == "false")
            isAnnual = false ;
         else if (annual == "true")
            isAnnual = true ;
         cin >> colorOfFlowers ;
         
         flowerPtr->SetPlantName(flowerName) ;
         flowerPtr->SetPlantCost(flowerCost) ;
         flowerPtr->SetPlantType(isAnnual) ;
         flowerPtr->SetColorOfFlowers(colorOfFlowers) ;
         myGarden.push_back(flowerPtr) ;
      }
      cin >> input ;
   }

   // TODO: Call the method PrintVector to print myGarden
   PrintVector(myGarden) ;

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}
