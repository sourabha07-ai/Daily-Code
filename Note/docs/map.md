# Map in C++

std::map stores data as key-value pairs and keeps keys sorted.

```cpp
#include <map>
#include <string>

std::map<std::string, int> ages;
ages["Alice"] = 25;
ages["Bob"] = 30;
```

## Common use cases

- Lookup by key
- Counting frequencies
- Building dictionaries
