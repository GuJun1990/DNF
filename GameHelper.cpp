// GameHelper.cpp: 定义 DLL 的初始化例程。
//

#include "pch.h"
#include "framework.h"
#include "GameHelper.h"
#include "CGameHelperDlg.h"
#include "BaseAddress.h"
#include "Common.h"
#include "BaseAddress.h"
#include "OffsetAddr.h"
#include "Logger.h"


using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


BEGIN_MESSAGE_MAP(CGameHelperApp, CWinApp)
END_MESSAGE_MAP()


CGameHelperApp::CGameHelperApp()
{
	// TODO:  在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的 CGameHelperApp 对象

CGameHelperApp theApp;
CGameHelperDlg* theDlg;

// 窗口显示代码
DWORD WINAPI ShowDlg(LPARAM lpData)
{
	theDlg = new CGameHelperDlg;
	theDlg->DoModal();
	delete theDlg;
	FreeLibraryAndExitThread(theApp.m_hInstance, 1);
	return TRUE;
}

// CGameHelperApp 初始化

BOOL CGameHelperApp::InitInstance()
{
	CWinApp::InitInstance();
	公告(L"辅助加载成功!");
	WriteLog(L"辅助加载成功!");
	::CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ShowDlg, NULL, 0, 0);
	return TRUE;
}




