#pragma once


// CMainViewDlg 对话框

class CMainViewDlg : public CDialog
{
	DECLARE_DYNAMIC(CMainViewDlg)

public:
	CMainViewDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMainViewDlg();

// 对话框数据
	enum { IDD = IDD_MAIN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
