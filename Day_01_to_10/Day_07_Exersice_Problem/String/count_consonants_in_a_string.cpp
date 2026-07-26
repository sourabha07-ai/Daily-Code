#include <iostream>
#include <string>
using namespace std; 

// Count consonants in a string

int main(){
    string str;
    cout <<"Enter a String: ";
    getline(cin,str);

    int count = 0;

    for(char ch : str){
         if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
             if (ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u' || ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'U'){  
                    continue;
                  }    
                  else{
                       count++;
        }
    }
}
    cout <<count;
  
    return 0;
}