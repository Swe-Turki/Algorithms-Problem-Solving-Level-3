#include <cctype>
#include <iostream>
#include <string>
#include "../Header Files/MyLib.h"
using namespace std;

bool IsVowel(char Ch1) {
    Ch1 = tolower(Ch1);
    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
  }

  void printVowels(string S1) {
    
    for (short i = 0; i < S1.length(); i++) {
      if (IsVowel(S1[i])) {
          cout << S1[i] << "  ";
      }
    }
    
  }

int main() { 
    string S1 = MyLib::ReadString();
    
    cout << "\nVowels in string are : " ;
    printVowels(S1);
    cout << endl;
}