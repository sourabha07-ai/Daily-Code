#include <iostream>
using namespace std;

// Print digits of a number one by one
int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >> num;
     
     int rev = 0;
    int temp = num;

    // Reverse the number
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }

    // Print digits in original order
    while (rev > 0) {
        cout << rev % 10 << " ";
        rev = rev / 10;
    }


     
    


    return 0;
}