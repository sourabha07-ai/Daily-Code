#include <iostream>
using namespace std;

int doubleNum(int num){
    return num * 2;
}

int main(){ 
    for(int i = 1;i <= 5;i++){
        cout <<"Double of " << i <<" is " <<doubleNum(i) <<endl;
    }
  

    return 0;
}