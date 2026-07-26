#include <iostream>
using namespace std;
 

//Keep taking input until the user enters 0
int main(){
    int num;

    while(true){
        cout <<"Enter number(0 to STOP):- " ;
        cin >>num;

        if(num == 0){
            break;
        }
        cout <<"Your number is: " <<num <<endl;
    }
    cout  <<"\033[32m Program is Ended! \033[0m";
  
    return 0;
}