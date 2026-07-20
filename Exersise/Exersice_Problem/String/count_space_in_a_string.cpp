#include <iostream>
#include <string>
using namespace std; 

//Count spaces in a string

int main(){
    string str;
    cout <<"Enter a string: ";
    getline(cin,str);

    int count = 0;

    for(char ch : str ){
        if(ch == ' '){
            count++;
        }
    }
   cout <<"Present Space: "<<count <<endl;
  
    return 0;
}