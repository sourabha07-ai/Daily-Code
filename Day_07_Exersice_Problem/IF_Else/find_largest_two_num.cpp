#include <iostream>
#include <string>
using namespace std; 
#define g "\033[32m"
#define reset "\033[0m"


int main(){
    int num_1,num_2;
    cout << "Enter first Number: ";
    cin >> num_1;
    cout << "Enter Second Number: ";
    cin >> num_2;

    string check = (num_1 == num_2) ? "Both are Same"
                   :(num_1 > num_2)  ? "First is greater than second" 
                   :"Second is greater than first";  
     cout <<g <<check <<reset << endl;
    return 0;
}