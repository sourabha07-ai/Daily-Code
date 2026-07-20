#include <iostream>
using namespace std;

#define r "\033[31m"
#define g "\033[32m"
#define y  "\033[33m"
#define reset "\033[0m"

int main(){
    cout <<g <<"=====Section start====="<<reset <<endl;

    int sign_num ;
    cout <<"Enter a number(check-sign): ";
    cin >> sign_num;

    if(sign_num > 0){
        cout <<g <<"Positive" << reset <<endl;
    }
    else if(sign_num ==0){
        cout << y << "This is Zero" <<reset<<endl;
    }
    else{
        cout << r <<"Negative" <<reset << endl;
    }

    cout <<g <<"=====Section End!=====" <<reset <<endl;
    return 0;
}