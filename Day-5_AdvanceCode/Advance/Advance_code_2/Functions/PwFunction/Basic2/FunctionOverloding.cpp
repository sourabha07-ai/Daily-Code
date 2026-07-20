#include <iostream>
using namespace std;

void fun(){
    cout <<"Hii" <<endl;
}

void fun(int a){
    cout <<"Good Morning" <<endl;
}
void fun(int a, int b){
    cout <<"Kese Ho" <<endl;
}

int main(){
     fun();
     fun(2);
     fun(2,3);

    return 0;
}
