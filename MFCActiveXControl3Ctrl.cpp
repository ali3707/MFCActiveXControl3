// MFCActiveXControl3Ctrl.cpp : CMFCActiveXControl3Ctrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "MFCActiveXControl3.h"
#include "MFCActiveXControl3Ctrl.h"
#include "MFCActiveXControl3PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFCActiveXControl3Ctrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CMFCActiveXControl3Ctrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CMFCActiveXControl3Ctrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_EDIT, OnEdit)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CMFCActiveXControl3Ctrl, COleControl)
	DISP_FUNCTION_ID(CMFCActiveXControl3Ctrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CMFCActiveXControl3Ctrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO:  按需要添加更多属性页。  请记住增加计数!
BEGIN_PROPPAGEIDS(CMFCActiveXControl3Ctrl, 1)
	PROPPAGEID(CMFCActiveXControl3PropPage::guid)
END_PROPPAGEIDS(CMFCActiveXControl3Ctrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControl3Ctrl, "MFCACTIVEXCONTRO.MFCActiveXControCtrl.1",
	0x32873a3a, 0x4801, 0x4c91, 0xa2, 0x3c, 0xcb, 0xc3, 0xb3, 0xa7, 0x53, 0x87)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CMFCActiveXControl3Ctrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_DMFCActiveXControl3 = { 0xA9D50109, 0xC8C7, 0x47B9, { 0x8D, 0x27, 0xB9, 0x12, 0xC, 0xFC, 0x5B, 0x90 } };
const IID IID_DMFCActiveXControl3Events = { 0x3E670333, 0x22C2, 0x4667, { 0x8A, 0xE6, 0x27, 0x5C, 0x12, 0xAA, 0x61, 0xD7 } };

// 控件类型信息

static const DWORD _dwMFCActiveXControl3OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMFCActiveXControl3Ctrl, IDS_MFCACTIVEXCONTROL3, _dwMFCActiveXControl3OleMisc)

// CMFCActiveXControl3Ctrl::CMFCActiveXControl3CtrlFactory::UpdateRegistry -
// 添加或移除 CMFCActiveXControl3Ctrl 的系统注册表项

BOOL CMFCActiveXControl3Ctrl::CMFCActiveXControl3CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegInsertable | afxRegApartmentThreading 改为 afxRegInsertable。

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


// CMFCActiveXControl3Ctrl::CMFCActiveXControl3Ctrl - 构造函数

CMFCActiveXControl3Ctrl::CMFCActiveXControl3Ctrl()
{
	InitializeIIDs(&IID_DMFCActiveXControl3, &IID_DMFCActiveXControl3Events);
	// TODO:  在此初始化控件的实例数据。
}

// CMFCActiveXControl3Ctrl::~CMFCActiveXControl3Ctrl - 析构函数

CMFCActiveXControl3Ctrl::~CMFCActiveXControl3Ctrl()
{
	// TODO:  在此清理控件的实例数据。
}

// CMFCActiveXControl3Ctrl::OnDraw - 绘图函数

void CMFCActiveXControl3Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);
}

// CMFCActiveXControl3Ctrl::DoPropExchange - 持久性支持

void CMFCActiveXControl3Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO:  为每个持久的自定义属性调用 PX_ 函数。
}


// CMFCActiveXControl3Ctrl::OnResetState - 将控件重置为默认状态

void CMFCActiveXControl3Ctrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO:  在此重置任意其他控件状态。
}


// CMFCActiveXControl3Ctrl::AboutBox - 向用户显示“关于”框

void CMFCActiveXControl3Ctrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MFCACTIVEXCONTROL3);
	dlgAbout.DoModal();
}


// CMFCActiveXControl3Ctrl::PreCreateWindow - 修改 CreateWindowEx 的参数

BOOL CMFCActiveXControl3Ctrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("STATIC");
	return COleControl::PreCreateWindow(cs);
}

// CMFCActiveXControl3Ctrl::IsSubclassedControl - 这是一个子类控件

BOOL CMFCActiveXControl3Ctrl::IsSubclassedControl()
{
	return TRUE;
}

// CMFCActiveXControl3Ctrl::OnOcmCommand - 处理命令消息

LRESULT CMFCActiveXControl3Ctrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
	WORD wNotifyCode = HIWORD(wParam);

	// TODO:  在此接通 wNotifyCode。

	return 0;
}


// CMFCActiveXControl3Ctrl 消息处理程序


int CMFCActiveXControl3Ctrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_ViewDlg.Create(IDD_MAIN_DIALOG, this);
	return 0;
}


void CMFCActiveXControl3Ctrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);
	RECT activeXRect;
	GetClientRect(&activeXRect);
	m_ViewDlg.MoveWindow(&activeXRect);

	// TODO:  在此处添加消息处理程序代码
}
