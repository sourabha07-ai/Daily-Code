#include <iostream>
using namespace std;
#define g "\033[32m"
#define r "\033[31m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
  char ch;
  cout <<y <<"Enter a Character: " <<reset;
  cin >> ch;

  if(ch >= 'A' and ch <= 'Z'){
    cout <<g <<"Capital" <<reset <<endl;
  }else{
    cout <<r <<"Not Capital" <<reset <<endl;
  }


}