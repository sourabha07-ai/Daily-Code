#include<iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> animals;

    animals.push("Tiger");
    animals.push("Cat");
    animals.push("Cow");
    animals.push("Dog");
    animals.push("deer");

    stack<string> temp = animals;

    while(!temp.empty()){
       cout << temp.top() <<" ";
       temp.pop();
    }
    
}