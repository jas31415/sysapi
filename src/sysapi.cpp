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