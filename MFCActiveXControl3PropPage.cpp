// MFCActiveXControl3PropPage.cpp : CMFCActiveXControl3PropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "MFCActiveXControl3.h"
#include "MFCActiveXControl3PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFCActiveXControl3PropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CMFCActiveXControl3PropPage, COlePropertyPage)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControl3PropPage, "MFCACTIVEXCONT.MFCActiveXContPropPage.1",
	0x60769f32, 0xcbdb, 0x4d79, 0x87, 0xaf, 0x1d, 0x11, 0xf7, 0x95, 0x61, 0x3c)

// CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CMFCActiveXControl3PropPage ��ϵͳע�����

BOOL CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MFCACTIVEXCONTROL3_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPage - ���캯��

CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPage() :
	COlePropertyPage(IDD, IDS_MFCACTIVEXCONTROL3_PPG_CAPTION)
{
}

// CMFCActiveXControl3PropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CMFCActiveXControl3PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CMFCActiveXControl3PropPage ��Ϣ�������
