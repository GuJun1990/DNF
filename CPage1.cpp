// CPage1.cpp: 实现文件
//

#include "pch.h"
#include "GameHelper.h"
#include "CPage1.h"
#include "afxdialogex.h"


// CPage1 对话框

IMPLEMENT_DYNAMIC(CPage1, CDialogEx)

CPage1::CPage1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TAB_PAGE1, pParent)
{

}

CPage1::~CPage1()
{
}

void CPage1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPage1, CDialogEx)
END_MESSAGE_MAP()


// CPage1 消息处理程序
