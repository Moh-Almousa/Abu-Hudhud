#include <string>
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
int SumReversedNumber(int Num) {
    int Reversed = 0;
    int sum = 0;
    do {
        Reversed = 0;
        Reversed = Num % 10;
        sum += Reversed;
        Num /= 10;
    } while (Num > 0);
    return sum;
}
void Print(int sum) {
    cout << "sum = " << sum << endl;
}


int main()
{
    Print(SumReversedNumber(ReadNumber("Enter = ")));
}

