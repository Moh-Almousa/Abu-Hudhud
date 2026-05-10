#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrime { Prime = 1, NotPrime = 0 };

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

enPrime CheckPrime(int Num) {

    int M = round(Num / 2);
    for (int count = 2; count <= M; count++) {
        if (Num % count == 0) {
            return enPrime::NotPrime;
        }
    }
    return enPrime::Prime;
}

void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2length) {
    int count = 0;
    for (int i = 0; i < arrLength; i++) {
        if (CheckPrime(arrSource[i]) == enPrime::Prime) {
            arrDestination[count] = arrSource[i];
            count++;
        }
    }
    arr2length = --count;
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
    int arrLength;
    int arr2length;

    FillArrayWithRandomNumbers(arr, arrLength);

    CopyOnlyPrimaryNumbers(arr, arr2, arrLength , arr2length);
    cout << "\nArray 1 Elements: " << endl;
    
    PrintArray(arr, arrLength);

    cout << "\nPrime Number in Array 2 : " << endl;
    
    PrintArray(arr2, arr2length);

}