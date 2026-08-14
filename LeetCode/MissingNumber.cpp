#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 4, 5, 0, 2, 6};
    int n = nums.size();

    int array_sum = 0;
    int nums_sum = 0;

    for (int i = 0; i < n; i++) {
        nums_sum += i;
        array_sum += nums[i];
    }

    nums_sum += n;  // include n

    int missing_num = nums_sum - array_sum;

    cout << "Missing Number: " << missing_num << endl;

    return 0;
}