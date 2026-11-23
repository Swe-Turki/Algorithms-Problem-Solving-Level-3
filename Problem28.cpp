#include <cctype>
#include <iostream>
#include <string>
#include "../Header Files/MyLib.h"
using namespace std;

char invertCharacter(char C1) {

return isupper(C1) ? tolower(C1) : toupper(C1);
}

void invertAllLetters(string S1) {
    for (short i = 0; i < S1.length(); i++) {
      if (S1[i] != ' ' ) {
          S1[i] = invertCharacter(S1[i]);    
      }
    }
    cout << "\nString after Inverting All Letters Case: \n";
    cout << S1 << endl;
  }

int main() { 

    string S1 = MyLib::ReadString();
    invertAllLetters(S1);

}