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

int main() {

   char cString[] = {'A',' ','s','t','r','i','n','g','\0'};
   cout << cString << endl;

   cout << "array size : " << sizeof(cString) << endl;

   vector<string> strVec(10);

   string str("I'm a string");
   strVec[0] = str;
   cout << str.at(0) << endl;

   cout << str.front() << " " << str.back() << endl;

   cout << "Length: " << str.length() << endl;

   string str2(str);
   strVec[1] = str2;

   string str3(str,4); // str except 4 spaces in
   strVec[2] = str3;

   string str4(5,'x'); // string of 5 xs
   strVec[3] = str4;

   strVec[4] = str.append(" and your not"); // concat
   str += " and your not";

   str.append(str, 34, 37); // append 34 to 37 places of str to str
   strVec[5] = str;

   str.erase(13,str.length()-1);
   strVec[6] = str;

   for (auto y: strVec){
      cout << y << endl;
   }

   if(str.find("string")!=string::npos){
      cout <<"1st not"<<str.find("string")<<endl; // ? what ?
   }

   cout << "substring" << str.substr(6,6) << endl; // begin at 6, for 6 spaces on

   reverse(str.begin(),str.end());
   cout << "Reverse " << str << endl;

   transform(str2.begin(), str2.end(),str2.begin(), ::toupper);
   cout << "Upper " << str2 << endl;

   // conversion
   // ascii codes for a char:
  /*
     char as an int of with (int)
     a - z : 97-122
     A - Z : 65 - 90
  */

   char aChar = 'Z';
   int aInt = aChar;
   cout << "A Code " << (int) 'a' << endl;

   string strNum = to_string(1+2);
   cout << "String " << strNum << endl;

   // Problem:
   // Turn any word (in caps) into ascii code
   // Turn any ascii code into


   // get input
   string input;
   cout << "Enter a word (in caps) : ";
   cin >> input;

   // convert each letter to a number
   int asciiCode;
   string output;
   for (auto y: input) {
      asciiCode = (int)y;
      output.append(to_string(asciiCode));
      cout << y << " becomes " << asciiCode << endl;
   }

   // print out
   cout << output << endl;

   // convert back
   cout << "Enter a Ascii code number : ";
   cin >> input;

   string ltrs_cap = "ABCDEFGHIJKLMNOPQRSTUVWXYZ______abc";
   string ltrs_lwr = "defghijklmnopqrstuvwxyz";

   int curPos = 0;
   string subCode;
   int intCode;
   string output2 = "";
   while (curPos < input.length()){
      subCode = input.substr(curPos,2);
      int temp = subCode[0] - '0';
      if (temp < 6) {
         subCode = input.substr(curPos,3);
         curPos +=1;
         cout << subCode << " becomes " << endl;
      } else {
         cout << subCode << endl;
      }
      curPos +=2;

      intCode = stoi(subCode);
      char letter = intCode;
      output2 += letter;
      // cout << subCode <<" becomes "<<letter<<endl;
   }

   cout << output2 << endl;


   return 0;
}
