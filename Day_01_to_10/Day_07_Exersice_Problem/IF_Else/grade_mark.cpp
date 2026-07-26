#include <iostream>
using namespace std;

//Grade calculator (A, B, C, D, F).
int main(){
    int marks;
    cout <<"Enter marks: ";
    cin >> marks;

      if(marks < 0 || marks > 100 ){
        cout <<"Invalid input" <<endl;
      }else if(marks == 100){
        cout << "Grade Excellent";
     }else if(marks >= 90 && marks < 100){
        cout<<"Grade A" <<endl;
     }else if(marks >= 80 && marks < 90){
        cout << "Grade B" <<endl;
     }else if(marks >= 70 && marks < 80){
        cout <<"Grade C" <<endl;
     }else if(marks >= 60 && marks < 70){
        cout <<"Grade D" <<endl;
     }else if(marks  >= 40 && marks < 60){
        cout <<"Grade D-2" <<endl;
     }else{
        cout << "Grade F(Fail)" <<endl;
     }
    
    

    return 0;
}