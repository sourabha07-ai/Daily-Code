#include <iostream>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

int main(){
 int num;
 cout <<y <<"Enter Number: " <<reset ;
 while (!(cin >> num)){
    cout <<r <<"Invalid!" <<g <<" try again: " <<reset <<endl;
    cin.clear();
    while(cin.get() != '\n');
 }
 cout <<y <<"You Enter Number: " <<reset <<num <<endl;

    return 0;
}