#include <iostream>
using namespace std;

string ReadPassword(string Massage) {
	string Password = "";
	cout << Massage << endl;
	cin >> Password;
	return Password;
}

bool SerachPassword(string Password) {
	string Word = "";
	int count = 0;
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int z = 65; z <= 90; z++) {

				Word = Word + (char)i;
				Word = Word + (char)j;
				Word = Word + (char)z;
				
				count++;
				
				cout << "Trial ["<<count<<"] : "<<Word << endl;
				
				if (Word == Password) {
					cout << "-----------------\n";
					cout << "Passwrord : " << Password << endl;
					cout << "Fount after " << count << " Trials\n";
					return true;
				}

				Word = "";
			}
		}
	}
	return false;
}

int main()
{
	SerachPassword(ReadPassword("Enter Password = "));
}

