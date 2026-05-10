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
void PrintAllDigitsFrequency(int Num) {
    while (Num > 0) {
        int Remainder = 0;
        Remainder = Num % 10;
        Num /= 10;
        for (int i = 0; i < 10; i++) {
            if (i == Remainder)
                cout << i << endl;
        }
    }

}


int main()
{
    PrintAllDigitsFrequency(CountReversedNumber(ReadNumber("Entaer  Number = ")));
}

