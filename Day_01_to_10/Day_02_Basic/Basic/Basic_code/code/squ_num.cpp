#include <iostream>
using namespace std;

#define g "\033[32m"
#define reset "\033[0m"

int main(){
    int num;
    cout <<g <<"Enter should want Square: " <<reset ;
    cin >> num;
    
    int sq = num * num;
    cout <<"The square of " <<g <<num <<reset <<" is " <<g <<sq <<reset <<endl;



    return 0;
}