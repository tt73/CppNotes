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

// my function prototype
vector<string> StringToVector(string, char);

string VectorToString(vector<string>, char);

string TrimWhiteSpace(string str);

int main() {

   // How to convert string into vector of strings
   string sSentence = "abc 123 test yadayada";
   vector<string> vec = StringToVector(sSentence,' ');
   for (auto s: vec){
      cout << s << " " << s.size() << endl;
   }

   // How to convert vector of strings into a string
   vector<string> vNames(3);
   vNames[0] = "bob";
   vNames[1] = "sue";
   vNames[2] = "tom";

   string sNames = VectorToString(vNames, ',');
   cout << sNames << endl;


   // How to trim white spaces
   string paddedStr = "     empty white spaces, BE GONE!     ";
   string trimmedStr = TrimWhiteSpace(paddedStr);
   cout << trimmedStr << "... did it work?" << endl;


   return 0;
}


// * my solution
// vector<string> StringToVector(string input, char seperator){
//    vector<string> output;
//    int pos = 0;
//    for (int i = 0; i < input.size(); i++) {
//       if (input[i]==seperator) {
//          output.push_back(input.substr(pos,i-pos));
//          pos = i + 1;
//       }
//    }
//    output.push_back(input.substr(pos,input.size()-pos));
//    return output;
// }

// * Here's the slick solution with StriNg STreAm. OOOooo how fancy
vector<string> StringToVector(string input, char seperator){

   vector<string> output;
   stringstream ss(input);
   string word;

   while(getline(ss, word, seperator)){
      output.push_back(word);
   }
   return output;
}


string VectorToString(vector<string> input, char sep){
   string output;

   for(auto name: input) {
      output.append(name);
      output += sep;
   }
   output.erase(output.end()-1);

   return output;
}

// this may seem like cheating
string TrimWhiteSpace(string str){

   size_t leadingSpace = str.find_first_not_of(" ");
   str.erase(0,leadingSpace);

   size_t paddingSpace = str.find_last_not_of(" ");
   str.erase(paddingSpace+1);

   return str;
}
