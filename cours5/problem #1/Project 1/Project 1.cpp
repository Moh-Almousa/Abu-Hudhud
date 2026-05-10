#include <iostream>
#include<string>
using namespace std;

void PrindHeader() {
    cout << "      Multipliace Tabile From 1 to 10\n \n";
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << "\n____________________________________________________________________________________\n";
}
string Prind(int i) {
    if (i < 10)
        return  "  |";
    else
    {
        return " |";
    }
}
void PrindMultipliaceTabile() {
    PrindHeader();
    for (int i = 1; i <= 10; i++) {
        cout << " " << i << Prind(i) << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << "\n";
    }   
    
}
int main()
{
   
    PrindMultipliaceTabile();
    //cout << "\n    1    2   3   4   5   6   7   8   9   10\n";
    //cout << "_________________________________________________\n";
    //for (int j = 1; j <= 10; j++) {

    //    for (int i = 1; i <= 10; i++) {
    //        if (i == 10)
    //            cout << i << "|" << i * j ;
    //        else
    //            cout << i << " |" << i * j << endl ;
    //    }
    //}
    //cout << "\n";
}

