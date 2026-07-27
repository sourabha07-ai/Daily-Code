#include <iostream>
#include <iomanip>
using namespace std;

char gradeCalculate(double avg){
    if (avg >= 90) return 'A';
    else if(avg >= 80 ) return 'B';
    else if(avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main(){
    int count;
    double sum = 0,mark;

    cout <<"Enter: How Many Subjects: ";
    cin >> count;

    if(count < 1 || count >6){
        cout <<"Invalid! " <<"Try Again!" <<endl;
        cout <<"Enter: How many Subject: ";
       return 1;
    }

    for(int i = 1; i <= count;i++){
        cout <<"Subject "<<i <<": ";
        cin >> mark;
        sum += mark;
    }

    double average = sum /count;
    cout <<fixed<< setprecision(2);
    cout <<"Avarage Mark: "<<average <<endl;
    cout <<"Grade: " <<gradeCalculate(average) <<endl;

}