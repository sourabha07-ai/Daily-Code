#include <iostream>
using namespace std;

int main(){
//   int x = 7;
//   int y = 7;

//   cout <<&x <<endl;
//   cout <<&y <<endl;


// int x = 7;
// int* p1 = &x;
// int* p2 = &x;
// cout <<p1 <<" " <<&p1 <<endl;
// cout <<p2 <<" " <<&p2 <<endl;

// int x = 7;
//  int* p = &x;
//  cout <<*p <<endl; // * dereferece Operator

// int x = 12;
// int* p = &x;
// cout <<x <<endl;
// *p = 10;
// cout << x <<endl;

int x = 7;
int* ptr = &x;
*ptr = *ptr + 8;
cout << x <<endl;


    return 0;
}