#pragma once

#include <cstddef>

#include "cplusplus.hpp"

namespace ox {
OX_CONSTEXPR std::size_t byte_size() { return 8; }
template <typename T>
OX_CONSTEXPR std::size_t bytes_of() {
    return sizeof(T);
}

template <typename T>
OX_CONSTEXPR std::size_t bits_of() {
    return bytes_of<T>() * byte_size();
}
}  // namespace ox