// CozyELFCppTester.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "../CozyElfCpp/ElfReader.h"

int main()
{
    const std::string filename = "D:\\1.so";

    auto result = CozyElf::ElfReader::Load(filename);
    std::cout << "FileName : " << filename << std::endl;

    int l = result->GetShdrCount();
    std::cout << "Section Count : " << l << std::endl;
    for (int i = 0; i < l; ++i)
    {
        auto hdr = result->GetShdr(i);
        auto name = hdr.GetName();
        if (name != nullptr)
        {
            std::cout << "Section" << i << " : " << name << "\t\tVirtualAddress : " << hdr.GetAddress() << std::endl;
        }
    }

    system("pause");
    return 0;
}

