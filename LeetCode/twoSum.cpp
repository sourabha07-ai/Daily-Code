#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 3, 6};
    int target = 10;

    vector<int> ans;

    for (size_t i = 0; i < size(arr); i++) {
        for (size_t j = i + 1; j < size(arr); j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);

                cout << ans[0] << " " << ans[1];
                return 0;
            }
        }
    }

    return 0;
}