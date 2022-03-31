// MFCActiveXControl3PropPage.cpp : CMFCActiveXControl3PropPage 属性页类的实现。

#include "stdafx.h"
#include "MFCActiveXControl3.h"
#include "MFCActiveXControl3PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFCActiveXControl3PropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(CMFCActiveXControl3PropPage, COlePropertyPage)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControl3PropPage, "MFCACTIVEXCONT.MFCActiveXContPropPage.1",
	0x60769f32, 0xcbdb, 0x4d79, 0x87, 0xaf, 0x1d, 0x11, 0xf7, 0x95, 0x61, 0x3c)

// CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPageFactory::UpdateRegistry -
// 添加或移除 CMFCActiveXControl3PropPage 的系统注册表项

BOOL CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MFCACTIVEXCONTROL3_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPage - 构造函数

CMFCActiveXControl3PropPage::CMFCActiveXControl3PropPage() :
	COlePropertyPage(IDD, IDS_MFCACTIVEXCONTROL3_PPG_CAPTION)
{
}

// CMFCActiveXControl3PropPage::DoDataExchange - 在页和属性间移动数据

void CMFCActiveXControl3PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CMFCActiveXControl3PropPage 消息处理程序
