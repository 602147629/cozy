#ifndef __COZY_THUNDER_TASK_CALLBACK_STDOUT_IMPL__
#define __COZY_THUNDER_TASK_CALLBACK_STDOUT_IMPL__

#include "ICozyThunderTaskCallback.h"
#include <mutex>

namespace Cozy
{
    class CozyThunderTaskCallbackStdoutImpl : public ICozyThunderTaskCallback
    {
    public:
        // ��ʼ����
        virtual void OnStart();
        // ����ֹͣ��reason = 0 ������ɣ�����Ϊ���ִ����룩
        virtual void OnStop(int reason);
        // ������״̬��blockIdΪ1��count��state = 0 ���ؿ�ʼ 1 ������� 2����ʧ�ܣ�
        virtual void OnBlockState(unsigned int blockId, int state);
    private:
        std::mutex m_outMutex;
    };
}

#endif // __COZY_THUNDER_TASK_CALLBACK_STDOUT_IMPL__
