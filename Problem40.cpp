#include <iostream>
#include <string>
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string Delim) {
  string S1 = "";
  for (string &s : vString) {
    S1 = S1 + s + Delim;
  }
  return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string arrString[], int arrLength , string Delim) {
    string S1 = "";
   for (int i = 0 ; i <arrLength ; i++){
    S1 = S1+ arrString[i] + Delim;
   }
   return S1.substr(0, S1.length() - Delim.length());
  }

int main() {
  vector<string> vString = {"Mohammed", "Turki", "Ali", "Zyad"};
   string arrString[] = {"Mohammed", "Turki", "Ali", "Zyad"};

  cout << "\nVector after join: \n";
  cout << JoinString(vString, " ");
  cout <<"\n\nArray After Join: \n";
  cout << JoinString(arrString , 4 , " ");
  cout << endl;

}