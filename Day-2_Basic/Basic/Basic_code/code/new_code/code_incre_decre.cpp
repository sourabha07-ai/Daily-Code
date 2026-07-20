#include <iostream>
using namespace std;

int main(){
    auto people_in_room = 0;
    cout <<"people in Room :" <<people_in_room <<endl;

    //3 people enter
    people_in_room++;
    cout <<"One person enter, People in room: " <<people_in_room <<endl;

    people_in_room++;
    cout <<"One person enter, People in room: " <<people_in_room <<endl;

    people_in_room++;
    cout <<"One person enter , People in room: " <<people_in_room <<endl;

    people_in_room--;
    cout <<"One person left, People in room: " <<people_in_room <<endl;



    return 0;
}