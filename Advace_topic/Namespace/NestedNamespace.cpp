#include <iostream>
using namespace std;

namespace Book{
    namespace Name{
        void Show(){
            cout <<"Nested Namespce" <<endl;
        } 
    } 
}
int main(){
    Book::Name::Show();
}