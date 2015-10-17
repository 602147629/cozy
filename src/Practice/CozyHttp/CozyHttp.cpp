// CozyHttp.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "uv.h"
#include "CozyHttpServer.h"
#include "CozyHttpRequest.h"
#include <iostream>

void OnWork(const CozyHttpRequest& req, CozyHttpResponse& rsp)
{
    std::cout << req.GetUrl() << std::endl;
}

int main()
{
    CozyHttpServer s = CozyHttpServer();
    s.Init("0.0.0.0", 80, 64);
    s.SetCallback(OnWork);
    s.Start();
    return 0;
}



