#pragma once


// CMainDlg 对话框

class CMainDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMainDlg)

public:
	CMainDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMainDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_MAIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
