#include <iostream>
#include <Windows.h>

using namespace std;

typedef void(*Func)();

int main()
{
    while(1)
    {
        HMODULE dll = LoadLibrary(L"dll.dll");
        if(!dll)
        {
            cout << "dll.dll not found" << endl;
            return 0;
        }
        Func func = (Func)GetProcAddress(dll,"init");
        if(!func)
        {
            cout << "init method not found in dll.dll" << endl;
            return 0;
        }
        func();
        FreeLibrary(dll);
        Sleep(20*1000);
    }
    return 0;
}
