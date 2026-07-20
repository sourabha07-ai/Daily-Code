#include <iostream>
using namespace std;
// Find the sum of numbers from 1 to N.
int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int sum = 0;
    
    for (int i = 1;i<=num;i++){
        sum = sum + i;
        if(i <= num){
           if(i==num){
              cout <<i << " = ";
           }else{
               cout <<i <<" + ";
           }
        }    
    }
    cout << sum;



    return 0;
}