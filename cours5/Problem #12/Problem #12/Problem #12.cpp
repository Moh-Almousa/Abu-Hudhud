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
void Prind(int Num) {
    for (int i = Num; i >= 1; i--) {// i=3 3>=1 {
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

