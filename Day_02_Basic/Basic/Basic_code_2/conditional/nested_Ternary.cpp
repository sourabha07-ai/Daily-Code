#include <iostream>
#include <string>
using namespace std;

/*Note: Although nested ternary operators work, it's usually better to use a normal if...else if...else statement for clarity.*/

int main(){
    int time ;

    string message = (time < 12) ? "Good Morning" 
                 : (time < 18) ? "Good afternoon" 
                 : (time < 20 ) ? "Good evening" 
                 : "Good Night"; 

    cout <<message <<endl;

    return 0;
}