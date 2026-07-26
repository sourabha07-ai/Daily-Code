#include <iostream>
using namespace std;

void fun(char a){
    cout <<"a = " <<a <<endl;
}

void fun(int a){
    cout <<"a = " <<a <<endl;
}

void fun(double a){
    cout <<"a = " <<a <<endl;
}

int main(){
    fun('A');
    fun(3);
    fun(3.4);


    return 0;
}