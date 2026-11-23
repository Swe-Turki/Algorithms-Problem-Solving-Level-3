#include <iostream>
#include <string>
using namespace std;

string ReadString() {
  string S1;
  cout << "Please Enter Your String?\n";
  getline(cin, S1);
  return S1;
}

void LowerFirstLetterOfEachWord(string S1) {
    for (short i = 0; i < S1.length(); i++) {
      if (S1[i] != ' ' ) {
          S1[i] = tolower(S1[i]);    
      }
    }
    cout << "\nString after Lower : \n";
    cout << S1 << endl;
  }

  void UpperFirstLetterOfEachWord(string S1) {
 
    for (short i = 0; i < S1.length(); i++) {
      if (S1[i] != ' ') {
          S1[i] = toupper(S1[i]);
      }
    }
    cout << "\nString after Upper : \n";
    cout << S1 << endl;
  }

int main() { 
    string S1 = ReadString();
    LowerFirstLetterOfEachWord(S1); 
    UpperFirstLetterOfEachWord(S1);
}