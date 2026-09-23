#include <iostream>
#include <cstdlib>
using namespace std;

void FillArray(int arr[100], int &arrLength){
    arrLength=10;
    arr[0]=10;
    arr[1]=10;
    arr[2]=10;
    arr[3]=50;
    arr[4]=50;
    arr[5]=70;
    arr[6]=70;
    arr[7]=70;
    arr[8]=70;
    arr[9]=90;

}

void AddArrayElement(int Number, int arr[], int& arrlength) {
    arrlength++;
    arr[arrlength - 1] = Number;
}

short FindNumberPositionInArray(int Number , int arr[100],int arrLength){
    for(int i=0 ;i <arrLength;i++){
        if(arr[i]==Number){
            return i;
        }
    }
    return -1;
}

bool IsNumberInArray(int Number , int arr[100] , int arrLength){
    return FindNumberPositionInArray(Number,arr,arrLength) !=-1;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLengthSource, int &arrLengthDestionation) {
    for (int i = 0; i < arrLengthSource; i++) {
        if(!IsNumberInArray(arrSource[i],arrDestination,arrLengthDestionation)){
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

int main()
{

    int arrSource[100], arrDestination[100], arrLength, arr2Length = 0;
    FillArray(arrSource,arrLength);
    cout<<"Array 1 Elemment : ";
    PrintArray(arrSource,arrLength);
    CopyArrayUsingAddArrayElement(arrSource,arrDestination,arrLength,arr2Length);
    cout<<"Array 2 Elemment : ";
    PrintArray(arrDestination,arr2Length);
}
