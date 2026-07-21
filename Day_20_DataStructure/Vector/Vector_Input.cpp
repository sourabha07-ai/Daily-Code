#include <iostream>
#include <vector>
using namespace std;

#define y "\033[33m"
#define reset "\033[0m"


int main(){
    int n;
    cout <<"Enter the Vector Size: ";
    cin >> n;

    vector<string> names;
    cout <<"Enter " <<n <<" String" <<endl;

    for(int i = 0;i < n;i++){
        string x;
        cin >> x;
        names.push_back(x);
    }
    cout <<"Names Are: ";
    for(string name : names){
        cout <<y <<"'" <<name <<"'"  <<reset;
    }
}