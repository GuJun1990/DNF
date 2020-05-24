#pragma once


// CPage3 对话框

class CPage3 : public CDialogEx
{
	DECLARE_DYNAMIC(CPage3)

public:
	CPage3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPage3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAG_PAGE3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit m_CeditDirection;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
};
