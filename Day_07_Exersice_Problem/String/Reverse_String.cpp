#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
  string str;
  cout <<"Enter your String: ";
  getline(cin,str);
  
  for(int i = str.size() - 1;i >= 0 ;i--){
     cout <<str.at(i) <<" ";
  }

    return 0 ;
}