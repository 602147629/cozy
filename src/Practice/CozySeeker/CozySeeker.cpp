// CozySeeker.cpp : �������̨Ӧ�ó������ڵ㡣
//

#pragma comment(lib, "D:\\curl\\lib\\Debug\\libcurl_imp.lib") // your lib here

#include "Base/CozyInterface.h"
#include "Tester/TesterZhihu.h"

int main()
{
    Cozy::ISeekerTesterPtr tester = std::make_shared<Cozy::TesterZhihu>();
    tester->Test();

    system("pause");
    return 0;
}