#include <iostream>
using namespace std;

void modifyFunction(string &str,int &num){
    str = "Puja";
    num = 12;
};

int main(){
   string myStr = "Sourabha";
   int myNum = 10;

   modifyFunction(myStr,myNum);
   
   cout <<myStr <<endl;
   cout <<myNum <<endl;
}