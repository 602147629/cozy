// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

// ������뽫λ������ָ��ƽ̨֮ǰ��ƽ̨��ΪĿ�꣬���޸����ж��塣
// �йز�ͬƽ̨��Ӧֵ��������Ϣ����ο� MSDN��
#define WINVER			0x0500		// ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
#define _WIN32_WINNT	0x0501	// ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
#define _RICHEDIT_VER	0x0200
#define _WIN32_IE		0x0600	// ����ֵ����Ϊ��Ӧ��ֵ���������� IE �������汾��

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS

#define _WTL_NO_CSTRING
#define _WTL_NO_WTYPES

#include <atlbase.h>
#include <atlstr.h>
#include <atltypes.h>
#include <atlapp.h>

extern CAppModule _Module;
#include<atlwin.h>
#include <atlcrack.h>
#include <atlsplit.h>
#include <atlframe.h>
#include <atlgdi.h>
#include <atlctrls.h>
#include <atlctrlx.h>
#include <atlmisc.h>
#include <tinyxml/tinyxml.h>
#include "BkWin/CBkDialogViewImplEx.h"
#include "bkres/bkres.h"

