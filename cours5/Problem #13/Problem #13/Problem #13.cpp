#include <iostream>
using namespace std;

int ReadNumber(string Massage) {
    int Num = 0;
    do {
        cout << Massage;
        cin >> Num;
    } while (Num <= 0 && Num>26);
    return Num;
}
void Prind(int Num) {
    for (int i = 1; i <=Num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }

        cout << endl;
    }
}

int main()
{
    Prind(ReadNumber("Enter Number = "));
}

