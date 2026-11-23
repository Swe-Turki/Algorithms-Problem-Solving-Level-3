#include <cctype>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
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
  size_t pos = 0;
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
  Client.AccountBalance = stod(vClientData[4]);
  return Client;
}

vector<sClient> LoadCleintsDataFromFile(string FileName) {
  vector<sClient> vClients;
  fstream MyFile;
  MyFile.open(FileName, ios::in); // read Mode
  if (MyFile.is_open()) {
    string Line;
    sClient Client;
    while (getline(MyFile, Line)) {
      if (Line.empty())
        continue;
      Client = ConvertLinetoRecord(Line);
      vClients.push_back(Client);
    }
    MyFile.close();
  }
  return vClients;
}

void PrintClientCard(sClient Client) {
  cout << "\nThe following are the client details:\n";
  cout << "\nAccout Number: " << Client.AccountNumber;
  cout << "\nPin Code : " << Client.PinCode;
  cout << "\nName : " << Client.Name;
  cout << "\nPhone : " << Client.Phone;
  cout << "\nAccount Balance: " << Client.AccountBalance << endl;
}

bool FindClientByAccountNumber(string AccountNumber, sClient &Client,
                               vector<sClient> &vClients) {
  for (sClient C : vClients) {
    if (C.AccountNumber == AccountNumber) {
      Client = C;
      return true;
    }
  }
  return false;
}
string ReadClientAccountNumber() {
  string AccountNumber = "";
  cout << "\nPlease enter AccountNumber? ";
  cin >> AccountNumber;
  return AccountNumber;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
  string stClientRecord = "";
  stClientRecord += Client.AccountNumber + Seperator;
  stClientRecord += Client.PinCode + Seperator;
  stClientRecord += Client.Name + Seperator;
  stClientRecord += Client.Phone + Seperator;
  stClientRecord += to_string(Client.AccountBalance);
  return stClientRecord;
}

bool SaveClientsToFile(string FileName, vector<sClient>& vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    if (!MyFile.is_open())
        return false;

    for (const sClient& Client : vClients)
        MyFile << ConvertRecordToLine(Client) << endl;

    MyFile.close();
    return true;
}

bool UpdateClientRecord(string AccountNumber, vector<sClient> &vClients, char UserAnswer) {

    if (UserAnswer == 'Y' || UserAnswer == 'y') {
    for (int i = 0; i < vClients.size(); i++) {
      if (vClients[i].AccountNumber == AccountNumber) {
        cout << "\nEnter PinCode: ";
        cin >> vClients[i].PinCode;

        cout << "\nEnter Name: ";
        cin >> vClients[i].Name;

        cout << "\nEnter Phone: ";
        cin >> vClients[i].Phone;

        cout << "\nEnter Account Balance: ";
        cin >> vClients[i].AccountBalance;
        return SaveClientsToFile(ClientsFileName, vClients);
        
      }
    }
  }
  
  return false;
}

int main() {
  sClient Client;
  char UserAnswer;
  vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
  string AccountNumber = ReadClientAccountNumber();
  if (FindClientByAccountNumber(AccountNumber, Client, vClients)) {
    PrintClientCard(Client);
    cout << "\nAre you sure you want delete this client? y/n? \n";
    cin >> UserAnswer;
    if (UpdateClientRecord(AccountNumber, vClients, UserAnswer)) {
      cout << "\nClient Updated Successfully.\n";
    } else {
      cout << "\nClient Updated Failed or Cancelled.\n";
    }

  } else {
    cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!\n";
  }

  return 0;
}