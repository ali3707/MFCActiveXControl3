#pragma once

// MFCActiveXControl3PropPage.h : CMFCActiveXControl3PropPage ����ҳ���������


// CMFCActiveXControl3PropPage : �й�ʵ�ֵ���Ϣ������� MFCActiveXControl3PropPage.cpp��

class CMFCActiveXControl3PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMFCActiveXControl3PropPage)
	DECLARE_OLECREATE_EX(CMFCActiveXControl3PropPage)

// ���캯��
public:
	CMFCActiveXControl3PropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_MFCACTIVEXCONTROL3 };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

