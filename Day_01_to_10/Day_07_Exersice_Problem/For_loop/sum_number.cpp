#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter Number: ";
    cin >> num;
    int sum = 0;

    int count = 1;

    while(count <= num){
        sum += count;
        cout <<count <<" ";
        count++;
    }
    cout <<endl;
    
    cout << "Sum of Number is: "<<sum <<endl;

    return 0;
}