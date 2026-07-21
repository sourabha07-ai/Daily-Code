#include <iostream>
using namespace std;

#define g "\033[32m"
#define y  "\033[33m"
#define reset "\033[0m"

int main(){
      cout <<g <<"=====Section Start.=====" <<reset <<endl <<y <<"Swap Number\n" <<reset ;
    // cout <<g <<"__________________________________" <<reset <<endl;
    int num1,num2;
    cout <<"Container A: ";
    cin >> num1;
    cout << "Container B: ";
    cin >>num2;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout <<g <<"___________________________________" <<reset <<endl;

    cout <<"Container A: " <<num1 <<endl;
    cout <<"Container B: " <<num2 <<endl;


    cout <<g <<"=====Section End.=====" <<reset<<endl;

    return 0;
}