/*
Q9. Count Negatives. Given an M ×N matrix which is sorted in non-increasing order both
row-wise and column-wise, count the number of negative numbers. Find an optimal approach
that runs in O(M + N ) time complexity.
Constraints: 1 ≤M, N ≤104, −105≤arr[i][j] ≤105.
Sample Input: {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}}
Sample Output: 8
Q10. Toeplitz Matrix. A matrix is a Toeplitz matrix if every diagonal from top-left to
bottom-right has the same elements. Write a function to check if a given M ×N matrix is a
Toeplitz Matrix. Return true or false.
Constraints: 1 ≤M, N ≤103.
Sample Input: {{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}}
Sample Output: true
Q11. Rotate Matrix by 180 Degrees. Given an N ×N square matrix, rotate it by 180
degrees in-place. You must not use any extra 2D array for the final result.
Constraints: 1 ≤N ≤103.*/

#include<iostream>
#include<vector>
using namespace std;

bool isToeplitz(const vector<vector<int>>& mat) {
    int rows = mat.size();
    if (rows == 0) return true;

    int cols = mat[0].size();
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (mat[i][j] != mat[i - 1][j - 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}};
    cout << boolalpha << isToeplitz(arr) << endl;
    return 0;
}
