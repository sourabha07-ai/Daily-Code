# Stack in C++

A stack follows the Last In, First Out (LIFO) principle.

```cpp
#include <stack>

std::stack<int> s;
s.push(10);
s.push(20);
std::cout << s.top();
```

## Common operations

- push: add an item
- pop: remove the top item
- top: view the top item
