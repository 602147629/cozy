#include "stdafx.h"
#include "CozyThunderImpl.h"

#include "CozyThunderTaskImpl.h"
#include <algorithm>

using namespace Cozy;

bool CozyThunderImpl::Initialize()
{
    return true;
}

void CozyThunderImpl::UnInitialize()
{
    std::for_each(std::begin(m_ThunderTaskList), std::end(m_ThunderTaskList), [](auto ptr) { delete ptr; });
    m_ThunderTaskList.clear();
}

ICozyThunderTask* CozyThunderImpl::CreateTask(const wchar_t* sCfgPath)
{
    auto ptr = new CozyThunderTaskImpl();
    ptr->SetCfgPath(sCfgPath);

    m_ThunderTaskList.emplace_back(ptr);
    return ptr;
}

ICozyThunderTask* CozyThunderImpl::LoadTask(const wchar_t* sCfgPath)
{
    return nullptr;
}

bool CozyThunderImpl::SaveTask(ICozyThunderTask* pTask)
{
    return false;
}

// �ͷ�task
bool CozyThunderImpl::ReleaseTask(ICozyThunderTask* pTask)
{
    auto iter = std::find(std::begin(m_ThunderTaskList), std::end(m_ThunderTaskList), pTask);
    if (iter != m_ThunderTaskList.end())
    {
        m_ThunderTaskList.erase(iter);
        delete pTask;
        return true;
    }
    return false;
}

// ����task��صĻ����ļ��������ļ����ͷ�task�����������������ɵ��ļ�
bool CozyThunderImpl::ClearTask(ICozyThunderTask* pTask)
{
    return false;
}

Cozy::ICozyThunder* createThunder()
{
    return new CozyThunderImpl();
}

void releaseThunder(Cozy::ICozyThunder* ptr)
{
    delete ptr;
}