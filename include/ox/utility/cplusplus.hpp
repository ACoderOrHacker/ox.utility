#pragma once

#if __cplusplus == 199711L
#define OX_CPLUSPLUS 3 /* 03 */
#define OX_CPLUSPLUS_03
#define OX_CPLUSPLUS_98
#elif __cplusplus == 201103L
#define OX_CPLUSPLUS 11
#define OX_CPLUSPLUS_11
#elif __cplusplus == 201402L
#define OX_CPLUSPLUS 14
#define OX_CPLUSPLUS_14
#elif __cplusplus == 201703L
#define OX_CPLUSPLUS 17
#define OX_CPLUSPLUS_17
#elif __cplusplus == 202002L
#define OX_CPLUSPLUS 20
#define OX_CPLUSPLUS_20
#elif __cplusplus == 202300L
#define OX_CPLUSPLUS 23
#define OX_CPLUSPLUS_23
#endif

#if OX_CPLUSPLUS >= 11
#define OX_CONSTEXPR constexpr
#define OX_NOEXCEPT noexcept
#else
#define OX_CONSTEXPR
#define OX_NOEXCEPT throw()
#endif
