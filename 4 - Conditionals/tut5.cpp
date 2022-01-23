#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath> // lib for C++ math
#include <ctime> // for rng
using namespace std;

// checkout cppreference.com for a giant list of built-in functions.

int main() {

   cout << "absolute value of (-10) = " << abs(-10) << endl;
   cout << "max of (-1, 3) = " << max(-1,3) << endl;
   cout << "min(5, 4) = " << min(5, 4) << endl;
   cout << "fmax(5.3, 4.3) = " << fmax(5.3, 4.3) << endl;
   cout << "fmin(5.3, 4.3) = " << fmin(5.3, 4.3) << endl;
   cout << "ceil(10.45) = " << ceil(10.45) << endl;
   cout << "floor(10.45) = " << floor(10.45) << endl;
   cout << "round(10.45) = " << round(10.45) << endl;
   cout << "pow(2,3) = " << pow(2,3) << endl;
   cout << "sqrt(100) = " << sqrt(100) << endl;
   cout << "cbrt(1000) = " << cbrt(1000) << endl;

   srand(time(NULL));
   int secretNum = rand() % 11; // random number 0 to 10
   cout << "Secret number : " << secretNum << endl;
   return 0;
}