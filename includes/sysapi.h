#pragma once
/*
    i do da includes here

    for more info on this stuff check out
    https://blog.kowalczyk.info/article/j/guide-to-predefined-macros-in-c-compilers-gcc-clang-msvc-etc..html
*/
#ifdef __WIN64
# include <windows.h>
#endif
#ifdef __linux__
# include <unistd.h>
#endif

namespace sysapi
{

}