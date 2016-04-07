#include "CozyThunderTaskCallbackStdoutImpl.h"
#include <iostream>

using namespace Cozy;

void CozyThunderTaskCallbackStdoutImpl::OnStart()
{
    std::lock_guard<std::mutex> lock(m_outMutex);
    std::cout << "task start" << std::endl;
}

// ����ֹͣ��reason = 0 ������ɣ�����Ϊ���ִ����룩
void CozyThunderTaskCallbackStdoutImpl::OnStop(int reason)
{
    std::lock_guard<std::mutex> lock(m_outMutex);
    std::cout << "task end reason :" << reason << std::endl;
}

// ������״̬��blockIdΪ1��count��state = 0 ���ؿ�ʼ 1 ������� 2����ʧ�ܣ�
void CozyThunderTaskCallbackStdoutImpl::OnBlockState(unsigned int blockId, int state)
{
    std::lock_guard<std::mutex> lock(m_outMutex);
    std::cout << "block : " << blockId << " status : ";
    if (state == 0)
    {
        std::cout << "begin";
    }
    else if (state == 1)
    {
        std::cout << "finish";
    }
    else if (state == 2)
    {
        std::cout << "failed";
    }
    else
    {
        std::cout << "undefined error";
    }
    std::cout << std::endl;
}

ICozyThunderTaskCallback* createCallback()
{
    return new CozyThunderTaskCallbackStdoutImpl();
}

void releaseCallback(Cozy::ICozyThunderTaskCallback* ptr)
{
    delete ptr;
}