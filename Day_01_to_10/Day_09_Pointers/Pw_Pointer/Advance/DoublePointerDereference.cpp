#include <iostream>
using namespace std; 

int main(){
    int x = 10;
    int* p1 = &x;
    int** p2 = &p1;

    cout <<"x = " <<x <<endl;
    cout <<"*p1 = " <<*p1 <<endl;
    cout <<"**p2 = " <<**p2 <<endl;

    cout <<"&x = " <<&x <<endl;
    cout <<"p1 = " <<p1  <<endl;
    cout <<"*p2 = " <<*p2<< endl; 
    return 0;
}