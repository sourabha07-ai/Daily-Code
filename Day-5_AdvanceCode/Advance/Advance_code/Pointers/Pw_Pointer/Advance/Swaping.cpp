#include <iostream>
using namespace std;

void swap1(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5, b = 9;
    cout <<"a = " <<a <<", b = " <<b <<endl;
    swap1(&a,&b);
    cout <<"a = " <<a <<", b = " <<b <<endl;
 

    return 0;
}