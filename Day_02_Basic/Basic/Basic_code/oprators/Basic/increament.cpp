#include<iostream>
using namespace std;

int main(){
    int x = 10;
    cout << x++ <<endl;
    cout << x <<endl;

    cout <<endl;

    int y = 10;
    cout << ++y <<endl;
    cout << y <<endl; 

    cout << endl;

    int num = 10 ;
    num = num++ + --num;//20
    cout <<num <<endl;

    int num2 = 10;
    num2 = --num2 + ++num2;//20
    cout <<num2 <<endl;

    int num3 = 10;
    num3 = ++num3 - ++num3;//0
    cout << num3 <<endl;

    return 0 ;
}