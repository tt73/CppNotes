#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main() {

    // PROBLEM
    /*
    For this problem I want you to draw a pine tree after asking the user for the number of rows. This problem is the most difficult you have had so far, but it will teach a lot. Feel free to use any resources online to solve it.

    Here is the sample program

    How tall is the tree : 5
        #
       ###
      #####
     #######
    #########
        #

    Here are some additional tips to help you solve the problem.

    Tip 1 : You should use a while loop and 3 for loops.

    Tip 2 : I know that this is the number of spaces and hashes for the tree
    4 - 1
    3 - 3
    2 - 5
    1 - 7
    0 - 9
    Spaces before stump = Spaces before top

    TIP 3 : You will need to do the following in your program
    1. Decrement spaces by one each time through the loop
    2. Increment the hashes by 2 each time through the loop
    3. Save spaces to the stump by calculating tree height - 1
    4. Decrement from tree height until it equals 0
    5. Print spaces and then hashes for each row
    6. Print stump spaces and then 1 hash
    */

   int maxLevel;

   cout << "Enter tree height: ";
   cin >> maxLevel;

   int nSpaces, nHashes;
   int currLevel = 1;
   while (currLevel <= maxLevel){
      nHashes = 2*currLevel - 1;
      nSpaces = maxLevel - currLevel;
      for (int i = 0; i < nSpaces; i++) // space loop
      {
         cout << " ";
      }
      for (int i = 0; i < nHashes; i++) // # loop
      {
         cout << "#";
      }
      cout << endl;
      currLevel++;
   }
   for (int i = 0; i < maxLevel-1; i++)
   {
      cout << " ";
   }
   cout << "#" << endl;


   return 0;
}