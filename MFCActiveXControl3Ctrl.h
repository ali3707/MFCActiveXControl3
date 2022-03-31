#pragma once

// MFCActiveXControl3Ctrl.h : CMFCActiveXControl3Ctrl ActiveX �ؼ����������

#include "MainViewDlg.h"
// CMFCActiveXControl3Ctrl : �й�ʵ�ֵ���Ϣ������� MFCActiveXControl3Ctrl.cpp��

class CMFCActiveXControl3Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CMFCActiveXControl3Ctrl)

// ���캯��
public:
	CMFCActiveXControl3Ctrl();
	CMainViewDlg m_ViewDlg;

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CMFCActiveXControl3Ctrl();

	DECLARE_OLECREATE_EX(CMFCActiveXControl3Ctrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CMFCActiveXControl3Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMFCActiveXControl3Ctrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CMFCActiveXControl3Ctrl)		// �������ƺ�����״̬

	// ����ؼ�֧��
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
	};
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

