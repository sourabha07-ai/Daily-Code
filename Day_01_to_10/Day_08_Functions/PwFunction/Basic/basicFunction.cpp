#include <iostream>
using namespace std;
#define p "\033[35m"
#define y "\033[33m"
#define reset "\033[0m"


void puja_fun(){
    cout <<p <<"Love you" <<reset <<endl; 
}
int main(){
   cout <<"Hello" <<y <<" Puja" <<reset <<endl;
   puja_fun();
}