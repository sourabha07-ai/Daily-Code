#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout <<"Enter your Name: ";
    getline( cin, name );

    int len = name.length();
    cout<<"Your name is " <<name <<endl;
    cout <<"Length of name is: " <<len <<endl;
    
    //comparisons
    cout <<(len >=8) <<endl;
   

    return 0;
}