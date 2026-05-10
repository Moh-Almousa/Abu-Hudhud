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
void ReversedNumber(int Num) {
    int Reversed = 0;
    do {
        Reversed = 0;
        Reversed = Num % 10;
        Num /= 10;
        cout << Reversed << endl;
    } while (Num > 0);

}

int main()
{
    ReversedNumber(ReadNumber("Enter = "));
}