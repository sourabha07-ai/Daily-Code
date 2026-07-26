#include <iostream>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


void modifyString(string &str){
    str = str + " Jena";
}

int main(){
  string name = "Sourabha";
  modifyString(name);
  cout <<g << name <<reset <<endl ;

    return 0;
}