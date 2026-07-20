#include <iostream>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y  "\033[33m"
#define reset "\033[0m"


int main(){
    cout <<g <<"=====Section Start.=====" <<endl <<y <<"Largeast of 3 Numbers:-" <<reset <<endl;
    
    int num1,num2,num3;
    cout <<"First Number: ";
    cin >> num1;
    cout <<"Second Number: ";
    cin >> num2;
    cout<<"Third Number: ";
    cin >> num3;
     

    if(num1 > num2 && num1 > num3){
        cout <<"Largest is "<<y <<"1st" <<reset <<" Number is: " <<g <<num1 <<reset <<endl; 
    }
    else if (num2 > num1 && num2 > num3){
        cout << "Largest is" <<y <<"2nd" <<reset  <<" Number is: " <<g <<num2 <<reset <<endl;
    }
    else{
        cout <<"Largest is "<<y <<"3rd" <<reset <<" Number is: " <<g <<num3 <<reset <<endl;
        }

    cout <<g <<"=====Section End.=====" <<reset <<endl;
    return 0;
}