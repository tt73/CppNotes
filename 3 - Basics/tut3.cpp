#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
   string sQuestion ("Enter Number 1: ");
   string sNum1, sNum2;
   cout << sQuestion;
   cin >> sNum1;

   cout << "Enter number 2: ";
   cin >> sNum2;

   int iNum1 = stoi(sNum1); //string to integer
   int iNum2 = stoi(sNum2); //string to integer

   printf("%d + %d = %d\n",iNum1,iNum2,iNum1+iNum2);
   printf("%d - %d = %d\n",iNum1,iNum2,iNum1-iNum2);
   printf("%d * %d = %d\n",iNum1,iNum2,iNum1*iNum2);
   printf("%d / %d = %d\n",iNum1,iNum2,iNum1/iNum2);
   printf("%d %% %d = %d\n",iNum1,iNum2,iNum1%iNum2);


   // Problem:
  /*
     Make it say: Enter miles : 5
     Make it output: 8.0467
  */
   double dMiles;
   double dKilometers;
   cout << "Enter miles: ";
   cin >> dMiles; // oops, I directly put it in as double
   dKilometers = dMiles * 1.60934;
   printf("%.4f kilometers\n",dKilometers);


   return 0;
}