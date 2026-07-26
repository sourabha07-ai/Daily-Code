#include<iostream>
using namespace std;

class Dog{
    public:
    void brak(string a);
};

void Dog::brak(string a){ 
    cout<<"Dog Bark: " << a <<endl;
}

int main(){
    Dog myDog;
    myDog.brak("Woof!");
    return 0;
}