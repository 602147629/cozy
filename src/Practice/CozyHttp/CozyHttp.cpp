// CozyHttp.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "uv.h"
#include "CozyHttpServer.h"

int main()
{
    CozyHttpServer s = CozyHttpServer();
    s.Init("0.0.0.0", 80, 64);
    s.Start();
    return 0;
}

