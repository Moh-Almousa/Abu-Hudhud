#include <iostream>
#include <string>
using namespace std;

enum enPrime {Prime = 1 , NotPrime = 0};
int ReadNumber(string Massage) {
    int Num = 0;
    do {
        cout << Massage << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
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
void PrintPrimeNotPrime(int Num) {
    switch (CheckPrime(Num)) {
    case enPrime::NotPrime:
        cout << "this " << Num << " Not Prime" << endl;
        break;
    case enPrime::Prime:
        cout << "this " << Num << " Prime ";
        break;
    }
}
int main()
{
    int Number = ReadNumber("Enter Number  = ");
    PrintPrimeNotPrime(Number);
}
