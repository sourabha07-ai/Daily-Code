#include <iostream>
#include <string>
using namespace std;


int main(){
  string pass_code = "Sourabha@1973";
  string pass_word;

  do{
    cout <<"Enter your Password: ";
    cin >>pass_word;

    if (pass_word != pass_code){
        cout <<"Wrong Password! try again: ";
    }

  }while(pass_word != pass_code);

  cout<<"Access Granted!"<<endl;

    return 0;
}