// CozyELFCppTester.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "../CozyElfCppEasySample/src/ElfReader.h"

int main()
{
    CozyElf::ElfReader reader;
    reader.Load("D:\\1.so");

    return 0;
}

