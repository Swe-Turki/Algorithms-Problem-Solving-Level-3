#include <cctype>
#include <iostream>
#include <string>
#include "../Header Files/MyLib.h"
using namespace std;


  int countLetter(string S1 , char C1) {
    int count = 0 ;
    for (short i = 0; i < S1.length(); i++) {
      if (S1[i] == C1) {
          count++;
      }
    }
    return count;
  }

int main() { 
    string S1 = MyLib::ReadString();
    char C1 = MyLib::ReadCharacter();
    cout << "\nLetter " << C1 << " count = " << countLetter(S1, C1) << endl;
}