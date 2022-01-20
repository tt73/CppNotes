#include <cstdlib>
#include <iostream>
#include <string> // new one
#include <limits> // min and max
using namespace std;

// this is a global variable - don't use them lol
int g_iRandNum = 0; // Hungarian notation: g_ for global, i for integer

const double PI = 3.14159265; // constant: usually in capslock

int main(int argc, char* argv[]){

   // boolean - true or false
   bool bMarried = false;

   // character
   char chMyGrade = 'A';

   // non-negative integers up to 60,000 ish
   unsigned short int u16Age = 28;

   // interger ranging from -30k to +30k
   short int siWeight = 180;

   // big numbers
   int nDays = 7;

   // bigger numbers
   long lBigNum = 1000000;

   // floating point numbers - only holds 6 digits after the decimal
   float fPi = 3.14159;

   // watch this - only good up to 6
   float fBigFloat = 1.1111111111111111;
   float fBigFloat2 = 1.1111111111111111;
   float fBigSum = fBigFloat + fBigFloat2;
   printf("fFloatSum Precision: %.10f\n",fBigSum); // prints out 2.2222223282

   // bigger floating point numbers
   cout << "Min Double " << numeric_limits<double>::min() << endl;
   cout << "Max Double " << numeric_limits<double>::max() << endl;

   // accurate up to 15
   double dbBigFloat = 1.1111111111111111;
   double dbBigFloat2 = 1.1111111111111111;
   double dbBigSum = dbBigFloat + dbBigFloat2;
   printf("dbFloatSum Precision: %.20f\n",dbBigSum); // prints out 2.22222222222222232091

   // even bigger numbers
   long double ldPi = 3.14;
   cout << "Min long double " << numeric_limits<long double>::min() << endl;
   cout << "Max long double " << numeric_limits<long double>::max() << endl;

   // print size
   cout<<" size of int" << sizeof(int)<< endl;

   printf("character %c, integer %d, integer padded with spaces %5d, float with 3 precision %.3f, string %s", 'A', 1, 2, 2.1718,"hi");

   return 0;
}