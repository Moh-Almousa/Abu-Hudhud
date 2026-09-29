#include <iostream>
#include<math.h>
using namespace std;

float ReadNumber(string Massage) {
    int Num = 0;
    cout << Massage;
    cin >> Num;
    return Num;
}
float MyAbs(int Num){
    if(Num>=0){
        return Num;
    }
    else{
        return Num * -1;
    }
}
int main()
{
    float Num,Num2;
    Num=ReadNumber("Enter Number : ");
    cout<<"My abs result : "<<MyAbs(Num)<<endl;
    Num2=abs(Num);
    cout<<"abs result : "<<Num2<<endl;

}