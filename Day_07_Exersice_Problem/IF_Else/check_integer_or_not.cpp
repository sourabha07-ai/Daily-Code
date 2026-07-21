#include <iostream>
using namespace std; 

int main(){
    float num1;
    cout <<"Enter a Real Number: ";
    cin >> num1;

    int num2 = (int)num1;
    if(num1 == num2) cout <<" Integer Number.";
    else cout<< "Not Integer Number.";
  
    return 0;
}