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
int CountReversedNumber(int Num) {
    int Remainder = 0;
    int Num2 = 0;
    do {
        Remainder = 0;
        Remainder = Num % 10;
        Num /= 10;
        Num2 = Num2 * 10 + Remainder;
    } while (Num > 0);
    return Num2;
}
void Print(int Num) {
    if (Num == CountReversedNumber(Num))
        cout << "\n Yes , it is a Palindrome number \n";
    else
        cout<< "\n No , it is NOT a Palindrome number \n";
}


int main()
{
    Print(ReadNumber("Enter Number = "));
}
