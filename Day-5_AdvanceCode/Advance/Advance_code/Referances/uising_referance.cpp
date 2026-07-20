#include <iostream>
using namespace std;


int main(){
  string name = "Sourabha Jena";
  string &myName = name;

  cout <<"Name: " <<name <<endl;
  cout <<"My name is " <<myName <<endl;
    return 0;
}