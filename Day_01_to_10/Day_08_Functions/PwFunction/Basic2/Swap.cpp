#include <iostream>
using namespace std;

void swap1(int& a, int& b){
   int temp = a;
   a = b;
   b = temp;
}

int main(){
    int a = 8 , b = 7;

    cout <<"a = " <<a <<" "<<"b = " <<b <<endl;
    //   a = a + b;
    //   b = a - b;
    //   a = a - b;
    // cout <<"a = " <<a <<" "<<"b = " <<b <<endl;
    // swap(a,b);
    // cout <<"a = " <<a <<" "<<"b = " <<b <<endl;


    // a = (a + b) - (b = a);
    // cout <<"a = " <<a <<" "<<"b = " <<b <<endl;
    
    swap1(a,b);
    cout <<"a = " <<a <<" "<<"b = " <<b <<endl;


    return 0;
}