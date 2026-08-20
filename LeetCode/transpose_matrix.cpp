#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> answer(n,vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                answer[i][j] = matrix[j][i];
            }
        }
     return answer;
    }

};

int main(){
   vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
   cout <<"Correct Matrix: " <<endl;
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            cout << matrix[i][j]<<" ";
        }
        cout <<endl;
    }

    Solution solution;
    vector<vector<int>> result = solution.transpose(matrix);
    
     cout <<"Transpose Matrix: " <<endl;
     for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}