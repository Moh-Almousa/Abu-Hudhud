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
int CountReversedNumber(int Num, int Num2) {
    int Renainder = 0;
    int count = 0;
    do {
        Renainder = 0;
        Renainder = Num % 10;
        Num /= 10;
        if (Num2 == Renainder)
            count++;

    } while (Num > 0);
    return count;
}
void PrintAllDigitsFrequency(int Num) {
    for (int i = 0; i < 10; i++) {
        short DigitFrequency = 0;
        DigitFrequency = CountReversedNumber(Num, i);
        if (DigitFrequency > 0) {
            cout << "\n Digit " << i << " Ferquency " << DigitFrequency << " Teims" << endl;
        }
    }
}

int main()
{
    int Num = ReadNumber("Enter Number = ");
    PrintAllDigitsFrequency(Num);
}

