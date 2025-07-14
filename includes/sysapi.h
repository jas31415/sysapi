/*
for more info on this ifdef stuff check out
https://blog.kowalczyk.info/article/j/guide-to-predefined-macros-in-c-compilers-gcc-clang-msvc-etc..html
*/
#ifdef __WIN64
# include <windows.h>
#endif
#ifdef __linux__
# include <X11/Xlib.h>
# include <assert.h>
# include <unistd.h>
# define NIL (0)
#endif

namespace sysapi
{
#ifdef __WIN64
#endif
#ifdef __linux__
    // make cross compatible window handle later
#endif

    void CreateWindow();
}