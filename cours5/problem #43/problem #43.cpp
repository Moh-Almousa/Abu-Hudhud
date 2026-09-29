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

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
    cout << endl;
}
int CountEvenNumbers(int arr[100],int arrLength)
{
    int count =0;
    for(int i=0;i<arrLength;i++){
        if(arr[i]%2 == 0){
            count++;
        }
    }
    return count;
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
    int arr[100],arrLength;
    arrLength= ReadNumber("Enter Length in Array : ");
    FillArrayWithRandomNumbers(arr,arrLength);
    cout<<"Array Elements : ";
    PrintArray(arr,arrLength);
    cout<<"Even Numbers Count : ";
    cout<<CountEvenNumbers(arr,arrLength);
    return 0;
}