// Preprocessor directive
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){

   // argc is the number of args passed to program
   // argv is the list of args

   cout << "hi" << endl;

   // argc is always at least one
   // the first arg is the name of program

   if(argc != 1){
      cout << "You entered " << argc << " args.\n";
      for( int i = 0; i < argc; i++) {
         cout << argv[i] << "\n";
      }
   }

   return 0;
}