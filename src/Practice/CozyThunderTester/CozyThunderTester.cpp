// CozyThunderTester.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "../CozyThunder.Core/ICozyThunder.h"
#include "windows.h"
#include <iostream>

int main()
{
    LPCTSTR lpszLibrary     = TEXT("CozyThunder.Core.dll");
    HINSTANCE hInstLibrary  = ::LoadLibrary(lpszLibrary);
    if (hInstLibrary == nullptr)
    {
        
        std::cout << "load library error" << std::endl;
        goto Exit0;
    }

    typedef Cozy::ICozyThunder* (*CreateInstanceFunc)();
    auto createFunc = (CreateInstanceFunc)GetProcAddress(hInstLibrary, "createThunder");
    if (createFunc == nullptr)
    {
        std::cout << "load function error" << std::endl;
        goto Exit0;
    }

    Cozy::ICozyThunder* pthunder = createFunc();


Exit0:
    FreeLibrary(hInstLibrary);

    return 0;
}

