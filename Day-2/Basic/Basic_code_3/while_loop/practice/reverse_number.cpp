#include <iostream>
using namespace std;

//Reverser Number 
// input = 1234
//output = 4321
int main(){
    int num = 1234;
    int reverse_num = 0;

    while(num){
        reverse_num = reverse_num * 10 + num % 10;
        num = num /10; 
    }
  cout << reverse_num ;
    return 0;
}