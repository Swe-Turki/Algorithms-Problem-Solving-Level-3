#include <iostream>
#include <string>
#include "../Header Files/MyLib.h"
using namespace std;



int countEachWordInString(string S1) {
  string delim = " "; // delimiter
  int count = 0;
  short pos = 0;
  string sWord; // define a string variable
  
  // use find() function to get the position of the delimiters
  while ((pos = S1.find(delim)) != std::string::npos) {
    sWord = S1.substr(0, pos); // store the word
    if (sWord != "") {
      count++ ;
    }
    S1.erase(0, pos + delim.length()); /* erase() until
    positon and move to next word. */
  }
  if (S1 != "") {
    count++;; // it print last word of the string.
  }

  return count;
}

int main() { 
  string S1 = MyLib::ReadString();
    cout << "\nThe number of words in your string is: " << countEachWordInString(S1) << endl; 

}