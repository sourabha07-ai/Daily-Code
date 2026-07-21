#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

    try{

        throw underflow_error("Number is too small.");

    }

    catch(underflow_error &e){
        cout << e.what();
    }
}