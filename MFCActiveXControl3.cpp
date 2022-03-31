// MFCActiveXControl3.cpp : CMFCActiveXControl3App �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "MFCActiveXControl3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMFCActiveXControl3App theApp;

const GUID CDECL _tlid = { 0xC84415B3, 0x7473, 0x492F, { 0xBA, 0x94, 0xA2, 0xB5, 0x3A, 0xC, 0x3A, 0x6D } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CMFCActiveXControl3App::InitInstance - DLL ��ʼ��

BOOL CMFCActiveXControl3App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CMFCActiveXControl3App::ExitInstance - DLL ��ֹ

int CMFCActiveXControl3App::ExitInstance()
{
	// TODO:  �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
