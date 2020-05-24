#pragma once


// CPage0 对话框

class CPage0 : public CDialogEx
{
	DECLARE_DYNAMIC(CPage0)

public:
	CPage0(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPage0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB_PAGE0 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
