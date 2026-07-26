#include <iostream>
using namespace std; 

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"




int main(){
  cout<<g <<"=====Section start======" <<reset <<endl;
  cout <<y <<"Sum of Digigt" <<reset <<endl;//input 1234 output:10
    int num;
    cout <<"Enter a Number: ";
    cin >> num;
    int num2 = 0;

    while(num!=0){
        num2 = num2 + (num % 10);
        num = num /10; 
    }
    cout <<"Sum is: " <<g   <<num2 <<reset <<endl;



  cout <<g <<"=====Section End======" <<reset <<endl;
    return 0;
}