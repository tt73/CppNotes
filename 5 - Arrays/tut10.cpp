#include<cstdlib>
#include<iostream>
#include<cmath>
#include<ctime>
#include<array>
#include<vector> // new
#include<sstream> // string steram
#include<algorithm> // ?
using namespace std;

int main() {

   // make a vector
   vector<int> vecRandNums(2);
   vecRandNums[0] = 10;
   vecRandNums[1] = 20;

   vecRandNums.push_back(30); // increase the size
   cout << "Vector size : " << vecRandNums.size() << endl;

   cout << "Last value : " << vecRandNums[vecRandNums.size()-1] << endl;

   vector<int>::iterator it;
   it = find(vecRandNums.begin(), vecRandNums.end(),20);
   cout << * it << endl;

   string sMessage = "This is a random string";
   vector<string> vecsWord;
   stringstream ss(sMessage);
   string sIndivStr;
   char cSpace = ' ';

   while(getline(ss, sIndivStr, cSpace)){
      vecsWord.push_back(sIndivStr);
   }

   for(int i = 0; i < vecsWord.size(); i++){
      cout << vecsWord[i] << endl;
   }


   // Problem:
   // User inputs a calculation and then you return the answer.
   // Enter calculation (ex. 5 + 6) : 10 - 6
   // 10.0 - 6.0 = 4.0

   // get raw input
   string sRawInput;
   cout << "\n\nEnter calculation (ex. 5 + 6) : ";

   // cin >> sRawInput; // THIS DOESN'T GET THE WHOLE LINE
   getline(cin,sRawInput); // this works


   // debugging
   // cout << "raw in : " << sRawInput << endl;

   // parse the input
   stringstream ssInput(sRawInput);
   string sIndivInput;
   char cSeperator = ' ';
   vector<string> vecsParsedInput;
   while(getline( ssInput, sIndivInput, cSeperator )){
      vecsParsedInput.push_back(sIndivInput);
      // debugging
      // cout << sIndivInput << endl;
   }

   // process the input
   double num1, num2, result;
   string op;
   num1 = stod(vecsParsedInput[0]);
   num2 = stod(vecsParsedInput[2]);
   op = vecsParsedInput[1];
   if (op=="+") {
      result = num1 + num2;
   } else if (op=="-"){
      result = num1 - num2;
   } else if (op=="*") {
      result = num1*num2;
   } else if (op=="/") {
      result = num1/num2;
   } else {
      cout << "invalid input" << endl;
      return 0;
   }

   cout << num1 << " " << op << " " << num2 << " = " << result << endl;

   return 0;
}