#ifndef __COZY_THUNDER_TASK_IMPL__
#define __COZY_THUNDER_TASK_IMPL__

#include "ICozyThunderTask.h"

namespace Cozy
{
    class CozyThunderTaskImpl : public ICozyThunderTask
    {
    public:
        CozyThunderTaskImpl();
        ~CozyThunderTaskImpl();

        // state = 0 ������ 1 �������� 2 ������ͣ����������أ� 3 �������
        virtual int GetTaskState();
        virtual const wchar_t* GetCfgPath();
        virtual const wchar_t* GetRemotePath();
        virtual const wchar_t* GetLocalPath();
        virtual unsigned long GetFileSize();
        virtual unsigned int GetBlockCount();
        // state = 0 ���ؿ�ʼ 1 ������� 2����ʧ��
        virtual int GetBlockState(unsigned int blockId);

        virtual void SetCfgPath(const wchar_t* path);
        virtual void SetRemotePath(const wchar_t* path);
        virtual void SetLocalPath(const wchar_t* path);

        virtual void SetTaskCallback(ICozyThunderTaskCallback* pCallback);
        // state 0/2 -> 1
        virtual bool Start();
        // state 1 -> 2
        virtual bool Stop();
    private:
        ICozyThunderTaskCallback* m_pCallback;
        int m_state;
        const wchar_t* m_lpszCfgPath;
        const wchar_t* m_lpszRemtotePath;
        const wchar_t* m_lpszLocalPath;
    };
}

#endif // __COZY_THUNDER_TASK_IMPL__