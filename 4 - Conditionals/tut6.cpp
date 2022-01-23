#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

   // basic for loop
   for (int i = 0; i <= 10; i++) {
      cout << i << endl;
   }

   // cycle thru array
   int arr1[ ] = {1,2,3};
   int arrSize = sizeof(arr1)/sizeof(arr1[0]);
   for (int i = 0; i < arrSize; i++)
   {
      cout << arr1[i] << endl;
   }

   // same thing except with auto
   for(auto x: arr1){
      cout << x << endl;
   }

   // Problem:
   /*
      Calculate how much money someone has after 10 years with compound interest.
   */

   double investment, interest_rate;
   cout << "How much to invest : ";
   cin >> investment;
   cout << "Interest rate : ";
   cin >> interest_rate;
   double balance = investment;
   for (int i = 0; i < 10; i++)
   {
      balance = balance + (interest_rate*balance) + investment;

   }

   cout << "Balance is " << balance << endl;






   return 0;
}
