#include <iostream>
using namespace std;

int main(){ 
    int n;
    cout <<"Input: ";
    cin >> n;

    int no_of_Space = 0;
    int no_of_Star = 2 * n -1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= no_of_Space; j++){
            cout <<"  ";
        }
        for(int k = 1; k <= no_of_Star ; k++){
            cout <<"* ";
        }
        no_of_Space++;
        no_of_Star -= 2;
        cout <<endl;
    }

    return 0;
}