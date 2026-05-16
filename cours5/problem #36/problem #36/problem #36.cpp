#include <iostream>
using namespace std;

int ReadNumber(string Massage) {
    int Num ;
    do {
        cout << Massage;
        cin >> Num;
    } while (Num < 0);
    return Num;
}

void AddArrayElement(int Number, int arr[], int& arrlength) {
    arrlength++;
    arr[arrlength-1] = Number;
}

void InputUserNumbersInArray(int arr[], int& arrlength) {
    bool AddMore = true;
    do {
        AddArrayElement(ReadNumber("pleas enter a number : "), arr, arrlength);
        AddMore = ReadNumber("Do you want to add more number [0]No , [1]Yes ?");
    } while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main()
{
    int arr[100],arrlength=0;
    InputUserNumbersInArray(arr, arrlength);
    cout << "Array Length : " << arrlength << endl;
    PrintArray(arr, arrlength);
}