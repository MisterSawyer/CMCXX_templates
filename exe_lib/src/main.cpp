#if !defined(NDEBUG) ^ defined(_DEBUG)
#error Exactly one of NDEBUG and _DEBUG needs to be defined!
#endif

#include <lib.h>

int ExeMain()
{
    return 0;
}