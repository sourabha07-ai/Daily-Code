#include<iostream>
#include <string>
using namespace std;

int main(){
    string name = "Sour";
    string &meal = name;

    cout <<name <<endl;
    cout <<meal <<endl;

    meal = "Puja";

   cout <<name <<endl;
    cout <<meal <<endl;
 
    return 0;
}