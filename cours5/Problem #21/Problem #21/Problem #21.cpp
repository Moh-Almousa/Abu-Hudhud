/*
	Inpout : 5 
	output : 
	key[1] = XXXX-XXXX-XXXX-XXXX
	key[2] = YYYY-YYYY-YYYY-YYYY
	key[3] = QQQQ-QQQQ-QQQQ-QQQQ
	key[4] = TTTT-TTTT-TTTT-TTTT
	key[5] = HHHH-HHHH-HHHH-HHHH
							
*/

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
int RandomNumber(int From, int To) {
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}
char GetRandomCharacter(enCharType CharType) {
	switch (CharType) {
	case enCharType::SamallLetter:
		return char(RandomNumber(97, 122));
	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enCharType::SpecialCharacter:
		return char(RandomNumber(33, 47));
	case enCharType::Digit:
		return char(RandomNumber(48, 57));
	}
}
string GenerateWord(enCharType enWord , short length) {
	string word = "";
	for (int i = 1; i <= length; i++) {
		word += GetRandomCharacter(enWord);
	}
	return word;
}
string GenerateKey() {
	string key = "";
	key = GenerateWord(enCharType::CapitalLetter, 4) + '-';
	key += GenerateWord(enCharType::CapitalLetter, 4) + '-';
	key += GenerateWord(enCharType::CapitalLetter, 4) + '-';
	key += GenerateWord(enCharType::CapitalLetter, 4)  ;
	return key;
}
int ReadNumber(string mss) {
	int num = 0;
	cout << mss << endl;
	cin >> num;
	return num;
}
void Print(int Num) {
	for (int i = 1; i <= Num; i++) {
		cout << "Key [" << i << "] = " << GenerateKey() <<endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	Print(ReadNumber("Enter Number Key = "));
	//cout << "Key [1] = " << WriteDaush(SumPassowrdKey(enCharType::CapitalLetter));
}

