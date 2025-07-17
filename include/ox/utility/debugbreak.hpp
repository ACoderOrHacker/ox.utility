#pragma once

#ifdef WIN32
#include <debugapi.h>
#else
#include <csignal>
#endif

#include "forceinline.hpp"

namespace ox {

OX_FORCEINLINE
void debugbreak() {
    // see gdb source for __asm__ code
    // it's so ugly...

#ifdef _MSC_VER
    __debugbreak();
#elif defined(WIN32)
    DebugBreak();
#elif defined(__i386__) || defined(__x86_64__)
    // do 'int 3' inst
    __asm__ volatile("int $0x03");
#elif defined(__thumb__)
    __asm__ volatile(".inst 0xde01");
#elif defined(__arm__) && !defined(__thumb__)
    __asm__ volatile(".inst 0xe7f001f0");
#elif defined(__aarch64__) && defined(__APPLE__)
    __builtin_debugtrap();
#elif defined(__aarch64__)
    __asm__ volatile(".inst 0xd4200000");
#elif defined(__powerpc__)
    __asm__ volatile(".4byte 0x7d821008");
#elif defined(__riscv)
    __asm__ volatile(".4byte 0x00100073");
#else
    std::raise(SIGTRAP);
#endif
}

}