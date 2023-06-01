#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

void Car::SetPurchasePrice(double price)
{
   purchasePrice = price ;
}

double Car::GetPurchasePrice()
{
   return purchasePrice ; 
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = (int) 
      round(purchasePrice * pow((1 - depreciationRate), carAge));
}

void Car::PrintInfo()
{
   cout << "Car's information:" << endl ;
   cout << "  Model year: " << modelYear << endl ;
   cout << "  Purchase price: $" << purchasePrice << endl ;
   cout << "  Current value: $" << currentValue << endl ;
}
