#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> name_age = {
        {"Sourabha Jena" , 23},
        {"Puja",22},
        {"Devid",21}
    };

    name_age["Siya"] = 24; 

    // for(auto it = name_age.begin(); it != name_age.end();it++){
    //     cout <<it->first <<" " <<it->second <<endl;
    // }

    for(auto it : name_age){
        cout <<it.first <<" " <<it.second <<endl;
    }

}
