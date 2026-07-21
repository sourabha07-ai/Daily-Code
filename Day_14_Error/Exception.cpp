#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num = {1,2,3};

    try{

        cout << num.at(10);

    }

    catch(exception &e){
        cout << e.what();
    }
}