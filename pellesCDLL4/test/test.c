#include <windows.h>
#include "test.h"

// 动态库的入口函数
BOOL APIENTRY DllMain(HINSTANCE hInstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}

int WINAPI sum(int a, int b)
{
	int value = a + b;
	return value;
}

int WINAPI sub(int a, int b)
{
	int value = a - b;
	return value;
}

int WINAPI multi(int a, int b)
{
	int value = a*b;
	return value;
}

