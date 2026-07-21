#include <iostream>
#include <string>
using namespace std; 

int main(){
    string name_1, name_2;
    cout <<"Typed your name: ";
    cin >> name_1;

    cin.ignore();// main

    cout <<" Typed your Full_name: ";
    getline(cin,name_2);
    cout << "My name is: " <<name_1 <<endl;
    cout <<"FullName: " << name_2 <<endl;

     

    return 0;
}