#pragma once


// CMainViewDlg �Ի���

class CMainViewDlg : public CDialog
{
	DECLARE_DYNAMIC(CMainViewDlg)

public:
	CMainViewDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMainViewDlg();

// �Ի�������
	enum { IDD = IDD_MAIN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
