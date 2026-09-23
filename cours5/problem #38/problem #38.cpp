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
void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLengthSource, int &arrLengthDestionation) {
    for (int i = 0; i < arrLengthSource; i++) {
        if(arrSource[i]%2 !=0){
             AddArrayElement(arrSource[i], arrDestination, arrLengthDestionation);
        }
    }

}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
}
int main(){
    srand((unsigned)time(NULL));
    int arr[100],arr2[100],arrLength =0 , arr2Length = 0  ;
    arrLength =ReadNumber("Enter Length Array : ");
    FillArrayWithRandomNumbers(arr,arrLength);
    cout<<"Array Element : ";
    PrintArray(arr,arrLength);
    CopyOddNumbers(arr,arr2,arrLength,arr2Length);
    cout<<"Array Elemment Old : ";
    PrintArray(arr2,arr2Length);
    cout<<arr2Length;
}