// CozyELFCppTester.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "../CozyELFCpp/Src/ELFReader.h"

int main()
{
    auto ret = ELFReader::Load("D:\\1.so");
    return 0;
}

