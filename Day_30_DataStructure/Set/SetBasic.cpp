#include <iostream>
#include <string>
#include <set>
using namespace std;


int main(){
    set<string> names = {"Sourabha","Puja","Liku","Baya","Abhisek"};
    
    for(string name: names ){
        cout <<name<<" ";
    }

    cout <<endl;

    set<int> nums = {1,4,8,2,9,4,7,10};
    for(int num:nums){
        cout <<num <<" ";
    }

    cout <<endl;

    set<int, greater<int>> numbers = {2,4,9,1,4,7,10};

    for(int number : numbers){
        cout <<number <<" ";
    }
   
    cout <<endl;

    set<string> cars = {"Volvo","Bmw","TATA","Suzuki","TVS"};
    for(string car: cars){
        cout << car <<"  ";
    }
    cout <<endl;
    cars.insert("MG");
    for(string car : cars){
        cout << car <<" ";
    }
   
    cout <<endl;

    set <int> digits = {1,9,7,5,3,1};
     digits.erase(1);
     for(int digit : digits){
        cout <<digit <<"  ";
     }

     cout <<endl;

     set<string> fruits = {"Apple","Banana","Potato","Cherry","Guava"};
     for(string fruit: fruits){
        cout <<fruit <<" ";
     }
     fruits.clear();

     for(string fruit:fruits){
        cout <<fruit <<" ";
     }

     cout <<endl;

     set<int> counts = {23,46,78,90,23,56,88,98};
     cout <<counts.size() <<endl;
     cout <<counts.empty() <<endl;

     
    return 0;
    }