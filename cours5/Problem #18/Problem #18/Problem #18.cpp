#include <iostream>
#include<string>
using namespace std;
string ReadName(string Massage) {
    string Name = "";
    cout << Massage ;
    getline(cin , Name) ;
    return Name;
}

string Encryption(string Name , int key) {
    for (int i = 0; i < Name.length(); i++) {
        Name[i] = char((int)Name[i] + key);
    }
    return Name;
}
string Decryption(string Name , int key) {
    for (int i = 0; i < Name.length(); i++) {
        Name[i] = char((int)Name[i] - key);
    }
    return Name;
}

void Print(string Name) {
    int key = 2;
    string eName = Encryption(Name,key);
    string dName = Decryption(eName, key);
    cout << "Text Berfor Enquter : " << Name << endl;
    cout << "Text After Enquter : " << eName << endl;
    cout << "Text After Dequter  : " << dName << endl;
}

int main()
{
    Print(ReadName("Enter Name = "));
}

