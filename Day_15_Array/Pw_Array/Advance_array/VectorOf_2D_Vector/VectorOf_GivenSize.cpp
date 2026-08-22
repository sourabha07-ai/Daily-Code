#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout <<"Enter a size of row: ";
    cin >> m;

    cout <<"Enter a size of cols: ";
    cin >> n;

    vector<vector<int>>vec(m,vector<int>(n,-1));

    //out put
    for(int i = 0; i < m;i++){
        for(int j = 0; j < n;j++){
            cout <<vec[i][j] <<" ";
        }
        cout <<endl;
    }





    return 0;
}