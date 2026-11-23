#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

const string ClientsFileName = "Clients.txt";
struct sClient {
  string AccountNumber;
  string PinCode;
  string Name;
  string Phone;
  double AccountBalance;
};

vector<string> SplitString(string S1, string Delim) {
  vector<string> vString;
  short pos = 0;
  string sWord; // define a string variable
  // use find() function to get the position of the delimiters
  while ((pos = S1.find(Delim)) != std::string::npos) {
    sWord = S1.substr(0, pos); // store the word
    if (sWord != "") {
      vString.push_back(sWord);
    }
    S1.erase(0, pos + Delim.length());
  }
  if (S1 != "") {
    vString.push_back(S1); // it adds last word of the string.
  }
  return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#") {
  sClient Client;
  vector<string> vClientData;

  vClientData = SplitString(Line, Seperator);

  Client.AccountNumber = vClientData[0];
  Client.PinCode = vClientData[1];
  Client.Name = vClientData[2];
  Client.Phone = vClientData[3];
  Client.AccountBalance = stod(vClientData[4]); // cast string to
  return Client;
}

vector<sClient> LoadCleintsDataFromFile(vector<sClient> &vClients ) {
  ifstream MyFile;
  sClient Client ;
  string Line;

  MyFile.open(ClientsFileName);
  
  while (getline(MyFile, Line)) {
    Client = ConvertLinetoRecord(Line);
    vClients.push_back(Client);
  }
  MyFile.close();
  return vClients;
}

void ListAllClientsInFile(vector<sClient>& vClients)
{
    cout << "\n\n"
         << setw(55) << right
         << "Client List (" << vClients.size() << ") Client(s)\n";

    cout << "-------------------------------------------------------------------------------------------\n";

    cout << "| " << left << setw(16) << "Account Number"
         << "| " << setw(15) << "Pin Code"
         << "| " << setw(25) << "Client Name"
         << "| " << setw(13) << "Phone"
         << "| " << setw(18) << "Balance\n";

    cout << "--------------------------------------------------------------------------------\n";

    for (const sClient& Client : vClients)
    {
        cout << "| " << left << setw(16) << Client.AccountNumber
             << "| " << setw(15) << Client.PinCode
             << "| " << setw(25) << Client.Name
             << "| " << setw(13) << Client.Phone
             << "| " << setw(18) << Client.AccountBalance << "\n";
    }

    cout << "-------------------------------------------------------------------------------------------\n";
}

int main() 
{ 
    vector<sClient> Clients ;
    LoadCleintsDataFromFile(Clients);
    ListAllClientsInFile(Clients); 
}