#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
   string sMiles;
   double dMiles, dKilometers;
   cout << "Enter miles: ";
   getline(cin,sMiles);
   dMiles = stod(sMiles); // string to double
   dKilometers = dMiles * 1.60934;
   printf("%.1f miles = %.4f kilometers\n", dMiles,dKilometers);
   return 0;
}