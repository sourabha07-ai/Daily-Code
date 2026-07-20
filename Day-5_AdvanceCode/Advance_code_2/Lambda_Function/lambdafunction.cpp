#include <iostream>
using namespace std;

int main(){
   auto name = [](){
    cout <<"Lambda Function.";
   };
   
  name();
 return 0;
}