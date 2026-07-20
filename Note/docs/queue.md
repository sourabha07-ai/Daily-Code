# Queue in C++

A queue follows the First In, First Out (FIFO) principle.

```cpp
#include <queue>

std::queue<int> q;
q.push(10);
q.push(20);
std::cout << q.front();
```

## Common operations

- push: add an item
- pop: remove the front item
- front: inspect the front item
