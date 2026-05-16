#include <iostream>
using namespace std;

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

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
    //cout << "Enter Size Arry : ";
    //cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
    cout << endl;
}

void AddArrayElement(int Number, int arr[], int& arrlength) {
    arrlength++;
    arr[arrlength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLengthSource, int arrLengthDestionation) {
    for (int i = 0; i < arrLengthSource; i++) {
         AddArrayElement(arrSource[i], arrDestination, arrLengthDestionation);
    }

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
    srand((unsigned)time(NULL));

    int arrSource[100], arrDestination[100], arrLength, arr2Length = 0;
    arrLength = ReadNumber("Enter sizr array : ");
    FillArrayWithRandomNumbers(arrSource, arrLength);
    cout << "Array Elemnt1 : \n";
    PrintArray(arrSource, arrLength);
    CopyArrayUsingAddArrayElement(arrSource, arrDestination, arrLength,arr2Length);
    cout << "Array Copy Elemunt : \n";
    PrintArray(arrDestination, arrLength);
}