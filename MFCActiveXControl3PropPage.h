#pragma once

// MFCActiveXControl3PropPage.h : CMFCActiveXControl3PropPage 属性页类的声明。


// CMFCActiveXControl3PropPage : 有关实现的信息，请参阅 MFCActiveXControl3PropPage.cpp。

class CMFCActiveXControl3PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMFCActiveXControl3PropPage)
	DECLARE_OLECREATE_EX(CMFCActiveXControl3PropPage)

// 构造函数
public:
	CMFCActiveXControl3PropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_MFCACTIVEXCONTROL3 };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

