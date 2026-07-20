#include <iostream>
#include <string>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

int main(){
    cout <<g <<"-----Section Start-----" <<reset <<endl;
    cout <<y <<"Count the dights:" <<reset <<endl;
    
    int num;
    cout <<"Enter Number: ";
    cin >> num;
    
    int count = 0;

    while(num!=0){ 
        num = num / 10;
        count++;

    }
    cout <<count <<endl;


    cout <<g <<"-----Section End-----" <<reset <<endl;
    return 0;
}