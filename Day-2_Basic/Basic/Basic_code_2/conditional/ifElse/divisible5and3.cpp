#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >>num;
    
    if (num == 0 or num == 1 or num == -1){
        cout <<"This is " <<num;
    }else if(num % 5 == 0 and num % 3 ==0){
        cout<<num <<" is divisible by both 3 and 5." <<endl;
    } else{
        cout <<num <<" not divisible by 3 and 5." <<endl;
    }

    return 0;
}