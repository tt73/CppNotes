#include<cstdlib>
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<array>
#include<vector> // new
#include<sstream> // string steram
#include<algorithm> // ?
using namespace std;

vector<int> Range(int start, int max, int step);

int main() {

   vector<int> range = Range(1,10,2);

   for(auto x: range){ // auto is reallly useful to remember
      cout << x << endl;
   }

   // Exceptionas
  /* common
     1. wrong data type
     2. file cannot be found
     3. user input is invalid
  */

   // Example 1
   double num1 = 0, num2 = 0;
   cout << "Enter num1 : "; cin >> num1;
   cout << "Enter num2 : "; cin >> num2;
   try {
      if(num2==0){
         throw "Division by zero is not defined";
      } else {
         printf("%.1f / %.1f = %.2f\n",num1,num2,num1/num2);
      }
   } catch( const char* exp) {
      cout << "Error : " << exp << endl;
   }

   // Example 2
   try {
      cout << "Throwing exception\n";
      throw runtime_error("Grr I'm stopping this program!");                   // cuz of this
      cout << "Can you print me?\n"; // this will never run
   }
   catch(exception &exp){
      cout << "Handled exception : " << exp.what() << endl; // what() returns the error message string
      cout << "I apologize for my friend" << endl;
   }

   catch(...) {
      cout << "default exception catch\n";
   }


   cout << "Program now resumes." << endl;

   return 0;
}



vector<int> Range(int start, int max, int step){
   // not optimal but whatever
   int i = start;
   vector<int> range;
   while( i <= max) {
      range.push_back(i);
      i += step;
   }
   return range;
}