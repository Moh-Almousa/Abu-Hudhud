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
int CountReversedNumber(int Num,int Num2) {
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


int main()
{
    int Num1 = ReadNumber("Pleas Enter main number = ");
    int Num2 = ReadNumber("Pleas Enter Digital Number = ");
    cout << "\n";
    cout << "Digit " << Num2 << " Frequency is " << CountReversedNumber(Num1, Num2) << " Tiems ";
}