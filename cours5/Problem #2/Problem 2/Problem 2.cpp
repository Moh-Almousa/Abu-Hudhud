#include <iostream>
#include<string>
using namespace std;
enum enPrime{Prime = 1 , NotPrime = 0};

int ReadNumber(string Massage) {
    int N = 0;
    cout << Massage;
    do {
        cin >> N;
    } while (N <= 0);
    return N;
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
    for (int i = 1; i <= Num; i++) {
        if (CheckPrime(i) == enPrime::Prime)
            cout << i << endl;
    }
}

int main()
{
    PrintPrimeNotPrime(ReadNumber("Enter N = "));
}

