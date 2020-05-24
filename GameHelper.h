// GameHelper.h: GameHelper DLL 的主标头文件
//

#pragma once
#include <cstdint>
#include <string>
#include <sstream>
#include "DataType.h"
#include <vector>

using namespace std;

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// 主符号

class CGameHelperApp : public CWinApp
{
public:
	CGameHelperApp();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
