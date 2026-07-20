# Deque in C++

A deque is a double-ended queue that allows fast insertion and removal from both ends.

```cpp
#include <deque>

std::deque<int> d = {1, 2, 3};
d.push_front(0);
d.push_back(4);
```

## Benefits

- Efficient front and back operations
- Useful for sliding-window and queue-like problems
