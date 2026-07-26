#include <iostream>
using namespace std;
void fun(int x, float y){
    cout << "Sourabha" <<endl;
    cout <<x <<" " <<y <<endl;
}

void fun (float x , int y){
    cout << "Druve" <<endl;
    cout <<x <<" " <<y <<endl;
}

int main(){
  fun(13.5,12);
  fun(12,12.4);

    return 0;
}
