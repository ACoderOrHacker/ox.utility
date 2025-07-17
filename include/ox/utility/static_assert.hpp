#pragma once

#include "cplusplus.hpp"
#include <cstddef>

#if OX_CPLUSPLUS < 11
namespace ox {
namespace details {
template <bool>
struct static_assert_fail;

template <>
struct static_assert_fail<true> {};

template <std::size_t N>
struct static_assert_dummy {};
}
}

#define OX_INTERNAL_JOIN_IMPL(a, b) a##b
#define OX_INTERNAL_JOIN(a, b) OX_INTERNAL_JOIN_IMPL(a, b)

#define OX_STATIC_ASSERT(expr, msg) \
    typedef ::ox::details::static_assert_dummy< \
        sizeof(::ox::details::static_assert_fail<(bool)(expr)>)> \
        OX_INTERNAL_JOIN(ox_static_assert_fail_typedef_, __LINE__)
#else
#define OX_STATIC_ASSERT(expr, msg) \
    static_assert(expr, msg)
#endif