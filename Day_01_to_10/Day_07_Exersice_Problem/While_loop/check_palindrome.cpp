#include <iostream>
using namespace std;

// Check palindrome number
int main(){
    int num;
    cout <<"Enter a Number: ";
    cin >> num;

    int original_num = num;
    int rev = 0;
    while(num > 0){
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    // cout <<rev;
    if (original_num == rev){
        cout <<original_num <<" this is Palindrome Number." <<endl;
    }else{
        cout <<"Not Palindrome" <<endl;
    }


    return 0;
}