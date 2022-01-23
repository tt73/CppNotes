#include<cstdlib>
#include<iostream>
#include<cmath>
#include<ctime>
#include<array>
using namespace std;

int main() {

   int arrNums1[10]= {1}; // works

   int arrNums2[] = {1,2,3}; // works

   // int arrNums[2] = {1, 2, 3}; // will not compile

   int arrNums3[5] = {8, 9};

   // basic printing
   cout << "1st value of array 1: " << arrNums1[0] << endl;
   cout << "2nd value of array 1: " << arrNums1[1] << endl;
   cout << "3rd value of array 1: " << arrNums1[2] << endl;

   // size
   cout << "Array Size : " << sizeof(arrNums3)/sizeof(*arrNums3) << endl;
   cout << "Array Size : " << sizeof(arrNums3)/sizeof(arrNums3[0]) << endl;

   // looping
   cout << "Array 2 : ";
   for(auto x: arrNums2){
      cout << x << ", ";
   }
   cout << endl;

   // the array object
   array<int,5> arrNums4 = {9,8,7,6};

   // looping
   for(auto j = arrNums4.begin(); j != arrNums4.end(); j++){
      cout << " " << *j;
   }
   cout << endl;

   // printing info
   cout << "size is :" << arrNums4.size() << endl;
   cout << "max size is : "<< arrNums4.max_size() << endl;
   cout << "Empty : " << (arrNums4.empty() ? "yes" : "no") << endl;
   cout << "1st val : " << arrNums4[0] << endl;

   arrNums4.fill(5); // useful for filling with 0s or 1s

   array<int,5> arrNums5 = {9,8,7,6};
   arrNums5.swap(arrNums4);
   for(auto x: arrNums5) cout << x << endl;

   return 0;
}