 #include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        // Create the triangle
        for(int i = 1; i <= numRows; i++) {
            ans.push_back(vector<int>(i, 1));
        }

        // Calculate middle elements
        for(int i = 1; i < ans.size(); i++) {
            for(int j = 1; j < ans[i].size() - 1; j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }

        return ans;
    }
};

int main() {
    int num_rows;

    cout << "Enter Number of Rows: ";
    cin >> num_rows;

    Solution solution;
    vector<vector<int>> answer = solution.generate(num_rows);

    cout << "The Pascal Triangle is:\n";
    for(int i = 0; i < answer.size(); i++) {
        for(int j = 0; j < answer[i].size(); j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}