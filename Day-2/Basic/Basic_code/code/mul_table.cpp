#include <iostream>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y  "\033[33m"
#define reset "\033[0m"

int main(){
    cout <<g <<"=====Section Start=====" <<reset <<endl;
    cout <<y <<"Mutiplication Table:" <<reset <<endl;

    int num;
    cout <<"Enter Number: ";
    cin >>num ;

    for (int i = 1;i<=10;i++){
        cout << num << " * " <<i <<" = " <<num * i <<endl; 
    }


    cout <<g <<"=====Section End.=====" <<reset <<endl;
    return 0;
}