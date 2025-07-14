#include "sysapi.h"
#include <iostream>

int main()
{
#ifdef __linux__
    std::cout << "linux " << __linux__ << '\n';
#endif
#ifdef __WIN32
    std::cout << "windows32 " << __WIN32 << '\n';
#endif
#ifdef __WIN64
    std::cout << "windows64 " << __WIN64 << '\n';
#endif
    return 0;
}