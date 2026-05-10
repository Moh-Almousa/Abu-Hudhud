#include <iostream>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To) {
    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

void Fill2ArrayWithRandomNumbers(int arr[100], int arr2[100], int& arrLength)
{
    cout << "Enter Size Arry : ";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
        arr2[i] = RandomNumber(1, 100);
    }
    cout << endl;
}

void SumNumbersInArray(int arr[100], int arr2[100], int arr3[100], int arrlength) {
    
    for (int i = 0; i < arrlength; i++) {
        arr3[i] = arr[i] + arr2[i];
        cout << arr3[i] << " ";
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

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arr2[100];
    int arr3[100];
    int arrLength;
    Fill2ArrayWithRandomNumbers(arr, arr2 , arrLength);

    cout << "\nArray 1 Elements: " << endl;

    PrintArray(arr, arrLength);

    cout << "\nArray 2 Elements: " << endl;
    PrintArray(arr2, arrLength);

    cout << "\nSum Array 1 and Array 2 : " << endl;
    SumNumbersInArray(arr, arr2, arr3, arrLength);

}