#pragma once


// CPage2 对话框

class CPage2 : public CDialogEx
{
	DECLARE_DYNAMIC(CPage2)

public:
	CPage2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPage2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB_PAGE2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	CEdit m_edit;
	CEdit m_edit1;
	CEdit m_edit2;
	CEdit m_edit3;
	CEdit m_edit4;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
