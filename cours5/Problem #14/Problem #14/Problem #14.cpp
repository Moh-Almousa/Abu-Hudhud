#include <iostream>
using namespace std;

int ReadNumber(string Massage) {
    int Num = 0;
    do {
        cout << Massage;
        cin >> Num;
    } while (Num <= 0 && Num > 26);
    return Num;
}
void Prind(int Num) {
    for (int i = Num; i >= 1; i--) {
        char p = 'A' + (i - 1);
        for (int j = 1; j <= i; j++) {
            cout << p;
        }

        cout << endl;
    }
}

int main()
{
    Prind(ReadNumber("Enter Number = "));
}

