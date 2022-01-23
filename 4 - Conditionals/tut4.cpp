#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {

   // Determine school grade
   // 5 -> kindergarten
   // 6-17 -> 1-12
   // 17 -> college

   string sAge;
   cout << "Enter age : ";
   cin >> sAge;
   int iAge = stoi(sAge);

   if (iAge < 5){
      cout << "Too young for school" << endl;

   } else if (iAge==5) {
      cout << "Go to Kindergarten" << endl;

   } else if (iAge >5 && iAge <18){
      cout << "Go to grade " << (iAge-4) << endl;
   } else {
      cout << "Go to college" << endl;
   }

   // ternary
   int myAge = 20;
   bool canIVote = (myAge >= 18) ? true : false;

   cout.setf(ios::boolalpha);

   cout << "Can I vote : " << canIVote << endl;

   return 0;
}