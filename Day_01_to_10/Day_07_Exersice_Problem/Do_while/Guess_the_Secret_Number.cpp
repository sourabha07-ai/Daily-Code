#include <iostream>
using namespace std;

int main(){
   int guess = 9;
   int num;

   do{
    cout <<"Enter a Secret Number: ";
    cin >> num;

    if(guess != num){
        cout <<"Wrong Answer! Try again: "<<endl; 
    }
   }while(guess != num);

    cout <<"Congratulation..." <<endl;

    return 0;
}