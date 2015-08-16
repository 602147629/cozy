// CozyDitto.Core.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "CozyDittoCore.h"

#pragma comment(lib, "CozyDitto.Base.lib")

#define COZYDITTO_BASE_IMPORT
#include "../CozyDitto.Base/CozyDittoBase.h"

LPCTSTR lpShowWindowText = TEXT("ShowWindowHotKey");

COZYDITTO_CORE_API bool RegisterShowWindowHotKey(HWND hWnd, UINT fsModifiers, UINT vk)
{
    return CozyRegisterHotKey(hWnd, ::GlobalAddAtom(lpShowWindowText), fsModifiers, vk);
}

COZYDITTO_CORE_API bool UnregisterShowWindowHotKey(HWND hWnd)
{
    return CozyUnregisterHotKey(hWnd, ::GlobalAddAtom(lpShowWindowText));
}