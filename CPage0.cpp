// CPage0.cpp: 实现文件
//

#include "pch.h"
#include "GameHelper.h"
#include "CPage0.h"
#include "afxdialogex.h"


// CPage0 对话框

IMPLEMENT_DYNAMIC(CPage0, CDialogEx)

CPage0::CPage0(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAB_PAGE0, pParent)
{

}

CPage0::~CPage0()
{
}

void CPage0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPage0, CDialogEx)
END_MESSAGE_MAP()


// CPage0 消息处理程序
