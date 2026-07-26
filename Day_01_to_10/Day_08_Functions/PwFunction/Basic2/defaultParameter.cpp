#include <iostream>
using namespace std;

void fun(int age = 20){
    cout <<"My age is: " <<age <<endl;
}

void power(int base, int exponent = 2){
    int ans = 1;

    for(int i = 0; i < exponent;i++){
        ans *= base;
    }
    cout <<ans <<endl;
}
int max1(int a, int b){
   if(a >= b) return a;
   else return b;
}
int  main(){
    fun();
    fun(21);
    
    power(2);
    power(2,3);
    power(2,8);

    cout << max1(2,4);


    return 0;
}
