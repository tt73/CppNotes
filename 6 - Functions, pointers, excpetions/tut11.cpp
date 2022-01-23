#include<cstdlib>
#include<iostream>
#include<cmath>
#include<ctime>
#include<array>
#include<vector> // new
#include<sstream> // string steram
#include<algorithm> // ?
using namespace std;

// function prototype ?
double AddNumbers(double num1, double num2);

void AssignAge(int age);

int AssignAge2(int age);


// begin main function
int main() {

   // double num1, num2;
   // cout << "Enter num1 : ";
   // cin >> num1;
   // cout << "Enter num2 : ";
   // cin >> num2;
   // printf("%.1f + %.1f = %.1f\n",num1,num2,AddNumbers(num1,num2));

   int age = 43;
   AssignAge(age);
   cout << "New age " << age << endl;

   age =  AssignAge2(age);
   cout << "New age " << age << endl;



   return 0;
}



double AddNumbers(double num1 = 0,  // default value for num1 is 0
                  double num2 = 0){ // defualt value for num2 is 0
   return num1+num2;
}

void AssignAge(int age) {

   age = 24; // this will do nothing

}

int AssignAge2(int age) {
   age = 24;
   return age;
}

