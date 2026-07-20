#include <iostream>
using namespace std;

#define g "\033[32m"
#define reset "\033[0m"

int main(){
    int num;
    cout <<"Enter a Number(even/Odd) :";
    cin >> num;
     
    if(num % 2 == 0)
{
    cout <<g <<num <<reset <<" is Even number." <<endl;
}
else{
    cout <<g <<num <<reset << " is Odd Number." <<endl;
}
    return 0;
}