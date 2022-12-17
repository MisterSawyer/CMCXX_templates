#if !defined(NOMINMAX)
#define NOMINMAX
#endif
#include <Windows.h>

#include <lib.h>


namespace lib
{
    void Foo()
    {
    }
}

int __stdcall WinMain(_In_ HINSTANCE instance, _In_opt_ HINSTANCE previnstance, _In_ LPSTR cmdline, _In_ int cmdshow)
{
    ExeMain();
    return 0;
}