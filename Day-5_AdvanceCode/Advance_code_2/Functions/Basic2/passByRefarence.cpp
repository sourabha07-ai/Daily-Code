#include <iostream>
using namespace std;

int changeValue(int &num){
    num = 10;
    return num;
}

int main(){
    int value = 30;
    changeValue(value);
    cout << value;


    return 0;
}