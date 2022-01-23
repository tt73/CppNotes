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

// pointers are variables for address of other variables

// function prototype
void AssignAge3(int* pAge);

void DoubleArray(int *arr, int size);

// begin main function
int main() {

   int age = 43; // the actual variable
   int* pAge = NULL;    // the pointer to the variable
   pAge = &age; // the & is the reference operator
   int* pBlank;  // points to null be default

   // hexidecimal address
   cout << "Address : " << pAge << endl;
   cout << "Value at address : " << *pAge << endl;
   cout << "Null address : " << pBlank << endl;

   // get used to the syntax
   int intArray[] = {1,2,3,4};
   int* pIntArray = intArray; // looks weird, but it works

   cout << "1st val: " << *pIntArray << ", Address: " << pIntArray << endl;
   pIntArray++;
   cout << "2nd val: " << *pIntArray << ", Address: " << pIntArray << endl;
   pIntArray++;
   cout << "3rd val: " << *pIntArray << ", Address: " << pIntArray << endl;
   pIntArray++;
   cout << "4th val: " << *pIntArray << ", Address: " << pIntArray << endl;


   AssignAge3(pAge);
   cout << "New age : " << age << endl;

   // How to use the function:
   // input: integer array, don't use a reference operator
   // This makes sense because arrays are just pointers to the first element in a series of contiguous memory data.
   int arr[] = {1,2,3,4};
   DoubleArray(arr, 4);
   for(int i = 0; i < 4; i++){
      cout << arr[i] << endl;
   }


   return 0;
}


void AssignAge3(int* pAge) {
   *pAge = 24;
}

// syntax: just use it like a regular array
// For some reason, you don't need to de-reference (*var) when working with arrays

// ARG: the argument is expecting a pointer to an integer
// BODY: the body of the code is just treating `arr` as a regular array
void DoubleArray(int *arr, int size) {
   for (int i = 0; i < size; i++) {
      arr[i] *= 2;
   }
}

