#pragma once

// MFCActiveXControl3Ctrl.h : CMFCActiveXControl3Ctrl ActiveX 控件类的声明。

#include "MainViewDlg.h"
// CMFCActiveXControl3Ctrl : 有关实现的信息，请参阅 MFCActiveXControl3Ctrl.cpp。

class CMFCActiveXControl3Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CMFCActiveXControl3Ctrl)

// 构造函数
public:
	CMFCActiveXControl3Ctrl();
	CMainViewDlg m_ViewDlg;

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CMFCActiveXControl3Ctrl();

	DECLARE_OLECREATE_EX(CMFCActiveXControl3Ctrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CMFCActiveXControl3Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMFCActiveXControl3Ctrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CMFCActiveXControl3Ctrl)		// 类型名称和杂项状态

	// 子类控件支持
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

