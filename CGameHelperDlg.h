#pragma once

#include "CPage0.h"
#include "CPage1.h"
#include "CPage2.h"
#include "CPage3.h"

// CGameHelperDlg 对话框

class CGameHelperDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CGameHelperDlg)

public:
	CGameHelperDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CGameHelperDlg();
	virtual BOOL OnInitDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GAME_HELPER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
	CPage0 m_page0;
	CPage1 m_page1;
	CPage2 m_page2;
	CPage3 m_page3;
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
};
