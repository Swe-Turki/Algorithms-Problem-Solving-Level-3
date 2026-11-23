#include <cctype>
#include <iostream>
#include <string>
#include "../Header Files/MyLib.h"
using namespace std;

  int countCapitalLetters(string S1) {
    int count = 0 ;
    for (short i = 0; i < S1.length(); i++) {
      if (S1[i] != ' ' && !ispunct(S1[i])) {
          if (isupper(S1[i]))
          count++;
      }
    }
    return count;
  }
  int countLowerLetters(string S1) {
    int count = 0 ;
    for (short i = 0; i < S1.length(); i++) {
      if (S1[i] != ' ' && !ispunct(S1[i])) {
          if (islower(S1[i]))
          count++;
      }
    }
    return count;
  }

int main() { 
    string S1 = MyLib::ReadString();
    cout << "\nString Length = "<< S1.length() << endl; 
    cout << "Capital Letters Count = " << countCapitalLetters(S1) << endl;
    cout << "Lower Letters Count = " << countLowerLetters(S1) << endl;
}