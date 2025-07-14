/*
for more info on this ifdef stuff check out
https://blog.kowalczyk.info/article/j/guide-to-predefined-macros-in-c-compilers-gcc-clang-msvc-etc..html
*/
#ifdef __WIN64
#   include <windows.h>
#endif
#ifdef __linux__
#   include <X11/Xlib.h>
#   include <assert.h>
#   include <unistd.h>
#   define NIL (0)
#endif

#include "sysapi.h"

void sysapi::CreateWindow()
{
    Display* pDisplay = XOpenDisplay(NIL);
    assert(pDisplay);
    Window window = XCreateWindow(
        pDisplay, DefaultRootWindow(pDisplay),
        0, 0, 200, 200, 0,
        CopyFromParent, CopyFromParent, CopyFromParent,
        NIL, 0);
    XMapWindow(pDisplay, window);
    XFlush(pDisplay);
    sleep(10);
}