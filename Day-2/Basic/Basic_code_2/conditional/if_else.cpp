#include <iostream>
using namespace std;

int main(){
    int num_1 , num_2;
    cout << "Enter a number : ";
    cin >> num_1;

    cout << "Enter another number: ";
    cin >> num_2;

    bool is_true = num_1 > num_2;
    
    if(num_1 == num_2){
        cout<<num_1 <<" Equal to " <<num_2 <<endl;
    }else if(is_true){
        cout<<num_1 <<" is greater than " <<num_2 <<endl;
    }else{
        cout <<num_2 <<" is greater than " <<num_1 <<endl;
    }


    return 0;
}