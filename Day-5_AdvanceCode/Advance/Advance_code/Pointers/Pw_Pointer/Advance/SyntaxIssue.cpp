#include <iostream>
using namespace std; 

int main(){
    int x = 6;
    int y = 2;

    int* p1 = &x;
    int* p2 = &y;

    
    cout <<"p1 = " <<p1 <<" " <<"*p1 = " <<*p1 <<endl;
    cout <<"p2 = " <<p2 <<" " <<"*p2 = " <<*p2 <<endl;

  
    return 0;
}