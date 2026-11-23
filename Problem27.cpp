#include <cctype>
#include <iostream>
#include <string>
#include "../Header Files/MyLib.h"
using namespace std;



char invertCharacter(char C1) {

return isupper(C1) ? tolower(C1) : toupper(C1);
}

int main() { 

char C1 = MyLib::ReadCharacter();
invertCharacter(C1); 
cout << "\nChar after inverting case:\n";
C1 = invertCharacter(C1);
cout << C1 << endl;
}