#include <iostream>
#include <ox/utility.hpp>

int main() {
    std::cout << OX_CPLUSPLUS << std::endl; // cplusplus standard
    
    OX_STATIC_ASSERT(true, "fuck");
    // ox::debugbreak();
    return 0;
}