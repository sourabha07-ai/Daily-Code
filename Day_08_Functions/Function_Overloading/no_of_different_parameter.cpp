#include<iostream>
using namespace std;

int numFunction(int a,int b){
    return a + b;
};

int numFunction(int a,int b,int c){
    return a + b + c;
};
int main(){
    int result_1 = numFunction(12,34);
    int result_2 = numFunction(12,34,4);

    cout <<"Result - 1: " <<result_1 <<endl;
    cout <<"Result - 2: " <<result_2 <<endl;

    return 0;
}