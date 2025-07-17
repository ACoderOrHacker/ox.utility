# ox.utility library

## Description

Ox.utility is a utility `header-only` `cross-platform` library

You can use it on windows, almost all unix-like systems, etc.

## Usage

```cpp

#include <iostream>
#include <ox/utility.hpp>

using namespace ox;

OX_FORCEINLINE void fun() {
    // this is a force inline function

    std::cout << bytes_of<int>() << " " << bits_of<int>() << std::endl;
    std::cout << byte_size() << std::endl;

    OX_STATIC_ASSERT(bytes_of<int>() == 4, "int requires 4 bytes"); 
}

int main() {
    std::cout << OX_CPLUSPLUS << std::endl; // cplusplus standard
    debugbreak(); // take a breakpoint at there
    fun();

    return 0;
}
```
