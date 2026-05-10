#include <iostream>
#include<string>
#include <cstdlib>
using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int ReadNumber(string Massage) {
    int Num = 0;
    do {
        cout << Massage;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

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
string GenerateWord(enCharType enWord, short length) {
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
    key += GenerateWord(enCharType::CapitalLetter, 4);
    return key;
}

void FillArrayWithKeys(string arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = GenerateKey();
    }
}

void PrintArray(string arr[100], int arrLength)
{
    cout << "\nArray elements : \n\n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Arry[" << i << "] = " << arr[i] << endl;
    }

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength = ReadNumber("How many keys do you want to generate? ");
    FillArrayWithKeys(arr, arrLength);
    PrintArray(arr, arrLength);

}