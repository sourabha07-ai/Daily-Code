#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >>num;

    int count = 0; 
    for(int i = 1;i <=num;i++){
        if(i % 3 == 0){
            cout <<i <<" ";
            count++;
        }
    }
    cout <<endl;
    cout <<"Count of 1 to " <<num <<" = " <<y <<count <<reset <<" numbers is divisible in 3." ;


    return 0;
}