#include <iostream>
#include <cmath>
using namespace std;

//?Check Prime number or Not 
void notPrime(){
    cout <<"Not a Prime Number." <<endl;
}

int main(){
    int number;
    cout <<"Enter a Number: ";
    cin >> number;

    bool isPrime = true;

    if(number <= 1){
        notPrime();
        return 0;
    }
    for(int i = 2;i <= sqrt(number) ;i++){
        if(number % i == 0){
            isPrime = false;
            break;
        }
    } 
    if(isPrime){
        cout <<"This is Prime Number." <<endl;
    }else{
        notPrime();
    }

    return 0;
}