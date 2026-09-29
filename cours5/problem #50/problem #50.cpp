#include <iostream>   
using namespace std; 

int MySqrt(int Number)
{
    return pow(Number,0.5);
}

int ReadNumber(string Massage) {
    int Num = 0;
    do {
        cout << Massage;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}


int main()
{
    int Number = ReadNumber("Enter Number : "); 
    cout << "My Sqrt Result : " << MySqrt(Number) << endl;
    cout << "C++ Sqrt Result: " << sqrt(Number) << endl;
    return 0;  
}
