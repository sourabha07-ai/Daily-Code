#include <iostream>
using namespace std;

#define g "\033[32m"
#define y  "\033[33m"
#define reset "\033[0m"

int main(){
     cout <<g <<"Success!" <<endl <<reset <<y <<"Input:Rectangle:" <<reset <<endl;

     float len,wid;
     cout <<g <<"Enter the length: " <<reset <<g ;
     cin >> len;
     cout <<g <<"Enter the width: " <<reset;
     cin>> wid;

     float area = len * wid;
     cout <<"The area of Reactangle is " <<g <<area<<reset;

    return 0;
}
