#include<iostream>
using namespace std;

int addSum(int num){
    if(num > 0){
        return num + addSum(num-1);
    }else{
        return 0;
    }
}
int main(){
   int number;
   cout <<"Enter a Number: ";
   cin >> number;

   int result = addSum(number);
   cout << result <<endl;

}