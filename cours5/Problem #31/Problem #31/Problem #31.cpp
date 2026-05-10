#include <iostream>
#include <cstdlib>
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

void Swap(int& A, int& B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}

void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    }
}

void FillArrayWith1ToNum(int arr[100], int arrLength)
{
    for (int i = 0; i <= arrLength; i++)
    {
        arr[i] = i + 1;
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

    int arr[100];
    int arrLength = ReadNumber("Enter number of elements : ");
    FillArrayWith1ToNum(arr, arrLength);
    cout << "\nArray elements before shuffle: \n";
    PrintArray(arr, arrLength);
    ShuffleArray(arr, arrLength);
    cout << "\nArray elements after shuffle: \n";
    PrintArray(arr, arrLength);

}