#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To) {
    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Enter Size Arry : ";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int SumNumbersInArray(int arr[100], int arrlength) {
    int Sum = 0;
    for (int i = 0; i < arrlength; i++) {
        Sum += arr[i];
    }
    return Sum;
}

float ArrayAverage(int arr[100], int arrlength) {
    return (float) SumNumbersInArray(arr, arrlength) / arrlength;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);
    cout << "\Avarge of Array : " << ArrayAverage(arr, arrLength) << endl;
}