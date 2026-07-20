#include <iostream>
#include <vector>
using namespace std;
 
#define r "\033[31m"
#define reset "\033[0m"


int main(){
   vector<string> names = {"Sourabha","Puja","Arati","Mr.Srimanta"};
 try{

     cout << names.at(2) << " " <<names.at(3) <<endl;
     cout <<names.at(1) <<" " <<names.at(0) <<endl;
     cout <<names.at(6)<<endl;
    }catch(out_of_range &e){
        cout <<r <<e.what() <<reset <<endl; 
    }

     cout <<"Thank You!" <<endl;
    return 0;
}

