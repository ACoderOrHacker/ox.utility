#pragma once

#if defined(_MSC_VER)
#define OX_FORCEINLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define OX_FORCEINLINE __attribute__((always_inline)) inline
#else
#define OX_FORCEINLINE inline
#endif