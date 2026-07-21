#include <iostream>
#include <vector>
using namespace std;

#define r "\033[31m"
#define reset "\033[0m"


int main(){
 vector<int> nums = {12,34,56,78,89};
  
 try{ 
    cout <<nums.at(0) <<"\n" <<nums.at(1) <<"\n";
    cout <<nums.at(2) <<"\n" <<nums.at(3) <<"\n";
    cout <<nums.at(4) <<endl;
    cout <<nums.at(5) <<endl;
 }catch(out_of_range &e){
    cout <<r <<"Error! " <<e.what() <<reset <<endl;
 }
    return 0;
}
