// MainViewDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCActiveXControl3.h"
#include "MainViewDlg.h"
#include "afxdialogex.h"


// CMainViewDlg 对话框

IMPLEMENT_DYNAMIC(CMainViewDlg, CDialog)

CMainViewDlg::CMainViewDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMainViewDlg::IDD, pParent)
{

}

CMainViewDlg::~CMainViewDlg()
{
}

void CMainViewDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMainViewDlg, CDialog)
END_MESSAGE_MAP()


// CMainViewDlg 消息处理程序
