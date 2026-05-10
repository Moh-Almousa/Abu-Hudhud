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
bool isPerfect(int Num) {
    int sum = 0;
    for (int i = 1; i < Num; i++) {
        if (Num % i == 0) {
            sum += i;
        }
    }
    return Num == sum;
}
void Print(int Num) {
    for (int i = 1; i <= Num; i++) {
        if (isPerfect(i)) {
            cout << "this " << i << " perfect" << endl;
        }
    }
}


int main()
{
    Print(ReadNumber("Enter N = "));
}
