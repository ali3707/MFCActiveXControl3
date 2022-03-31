// MFCActiveXControl3Ctrl.cpp : CMFCActiveXControl3Ctrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "MFCActiveXControl3.h"
#include "MFCActiveXControl3Ctrl.h"
#include "MFCActiveXControl3PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFCActiveXControl3Ctrl, COleControl)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CMFCActiveXControl3Ctrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CMFCActiveXControl3Ctrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_EDIT, OnEdit)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(CMFCActiveXControl3Ctrl, COleControl)
	DISP_FUNCTION_ID(CMFCActiveXControl3Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CMFCActiveXControl3Ctrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO:  ����Ҫ��Ӹ�������ҳ��  ���ס���Ӽ���!
BEGIN_PROPPAGEIDS(CMFCActiveXControl3Ctrl, 1)
	PROPPAGEID(CMFCActiveXControl3PropPage::guid)
END_PROPPAGEIDS(CMFCActiveXControl3Ctrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControl3Ctrl, "MFCACTIVEXCONTRO.MFCActiveXControCtrl.1",
	0x32873a3a, 0x4801, 0x4c91, 0xa2, 0x3c, 0xcb, 0xc3, 0xb3, 0xa7, 0x53, 0x87)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CMFCActiveXControl3Ctrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_DMFCActiveXControl3 = { 0xA9D50109, 0xC8C7, 0x47B9, { 0x8D, 0x27, 0xB9, 0x12, 0xC, 0xFC, 0x5B, 0x90 } };
const IID IID_DMFCActiveXControl3Events = { 0x3E670333, 0x22C2, 0x4667, { 0x8A, 0xE6, 0x27, 0x5C, 0x12, 0xAA, 0x61, 0xD7 } };

// �ؼ�������Ϣ

static const DWORD _dwMFCActiveXControl3OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMFCActiveXControl3Ctrl, IDS_MFCACTIVEXCONTROL3, _dwMFCActiveXControl3OleMisc)

// CMFCActiveXControl3Ctrl::CMFCActiveXControl3CtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CMFCActiveXControl3Ctrl ��ϵͳע�����

BOOL CMFCActiveXControl3Ctrl::CMFCActiveXControl3CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegInsertable | afxRegApartmentThreading ��Ϊ afxRegInsertable��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_MFCACTIVEXCONTROL3,
			IDB_MFCACTIVEXCONTROL3,
			afxRegInsertable | afxRegApartmentThreading,
			_dwMFCActiveXControl3OleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CMFCActiveXControl3Ctrl::CMFCActiveXControl3Ctrl - ���캯��

CMFCActiveXControl3Ctrl::CMFCActiveXControl3Ctrl()
{
	InitializeIIDs(&IID_DMFCActiveXControl3, &IID_DMFCActiveXControl3Events);
	// TODO:  �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// CMFCActiveXControl3Ctrl::~CMFCActiveXControl3Ctrl - ��������

CMFCActiveXControl3Ctrl::~CMFCActiveXControl3Ctrl()
{
	// TODO:  �ڴ�����ؼ���ʵ�����ݡ�
}

// CMFCActiveXControl3Ctrl::OnDraw - ��ͼ����

void CMFCActiveXControl3Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);
}

// CMFCActiveXControl3Ctrl::DoPropExchange - �־���֧��

void CMFCActiveXControl3Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO:  Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CMFCActiveXControl3Ctrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CMFCActiveXControl3Ctrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO:  �ڴ��������������ؼ�״̬��
}


// CMFCActiveXControl3Ctrl::AboutBox - ���û���ʾ�����ڡ���

void CMFCActiveXControl3Ctrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MFCACTIVEXCONTROL3);
	dlgAbout.DoModal();
}


// CMFCActiveXControl3Ctrl::PreCreateWindow - �޸� CreateWindowEx �Ĳ���

BOOL CMFCActiveXControl3Ctrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("STATIC");
	return COleControl::PreCreateWindow(cs);
}

// CMFCActiveXControl3Ctrl::IsSubclassedControl - ����һ������ؼ�

BOOL CMFCActiveXControl3Ctrl::IsSubclassedControl()
{
	return TRUE;
}

// CMFCActiveXControl3Ctrl::OnOcmCommand - ����������Ϣ

LRESULT CMFCActiveXControl3Ctrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
	WORD wNotifyCode = HIWORD(wParam);

	// TODO:  �ڴ˽�ͨ wNotifyCode��

	return 0;
}


// CMFCActiveXControl3Ctrl ��Ϣ�������


int CMFCActiveXControl3Ctrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	m_ViewDlg.Create(IDD_MAIN_DIALOG, this);
	return 0;
}


void CMFCActiveXControl3Ctrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);
	RECT activeXRect;
	GetClientRect(&activeXRect);
	m_ViewDlg.MoveWindow(&activeXRect);

	// TODO:  �ڴ˴������Ϣ����������
}
