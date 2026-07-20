# Sorting in C++

Sorting arranges data into a meaningful order such as ascending or descending.

```cpp
#include <algorithm>
#include <vector>

std::vector<int> nums = {5, 2, 8, 1};
std::sort(nums.begin(), nums.end());
```

## Notes

- std::sort works for many standard containers.
- It is efficient and widely used.
