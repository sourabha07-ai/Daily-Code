#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
    vector<string> animals = {"Dog","Tiger","Fox","Elephent","OX"};

    vector<string>::iterator it;

    for(it = animals.begin(); it != animals.end() ; ++it){
        cout << *it <<" ";
    }


  

    return 0;
}