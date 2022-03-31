

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Mar 31 23:13:37 2022
 */
/* Compiler settings for MFCActiveXControl3.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __MFCActiveXControl3idl_h__
#define __MFCActiveXControl3idl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DMFCActiveXControl3_FWD_DEFINED__
#define ___DMFCActiveXControl3_FWD_DEFINED__
typedef interface _DMFCActiveXControl3 _DMFCActiveXControl3;

#endif 	/* ___DMFCActiveXControl3_FWD_DEFINED__ */


#ifndef ___DMFCActiveXControl3Events_FWD_DEFINED__
#define ___DMFCActiveXControl3Events_FWD_DEFINED__
typedef interface _DMFCActiveXControl3Events _DMFCActiveXControl3Events;

#endif 	/* ___DMFCActiveXControl3Events_FWD_DEFINED__ */


#ifndef __MFCActiveXControl3_FWD_DEFINED__
#define __MFCActiveXControl3_FWD_DEFINED__

#ifdef __cplusplus
typedef class MFCActiveXControl3 MFCActiveXControl3;
#else
typedef struct MFCActiveXControl3 MFCActiveXControl3;
#endif /* __cplusplus */

#endif 	/* __MFCActiveXControl3_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MFCActiveXControl3_0000_0000 */
/* [local] */ 

#pragma once
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_MFCActiveXControl3_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MFCActiveXControl3_0000_0000_v0_0_s_ifspec;


#ifndef __MFCActiveXControl3Lib_LIBRARY_DEFINED__
#define __MFCActiveXControl3Lib_LIBRARY_DEFINED__

/* library MFCActiveXControl3Lib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_MFCActiveXControl3Lib;

#ifndef ___DMFCActiveXControl3_DISPINTERFACE_DEFINED__
#define ___DMFCActiveXControl3_DISPINTERFACE_DEFINED__

/* dispinterface _DMFCActiveXControl3 */
/* [uuid] */ 


EXTERN_C const IID DIID__DMFCActiveXControl3;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A9D50109-C8C7-47B9-8D27-B9120CFC5B90")
    _DMFCActiveXControl3 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMFCActiveXControl3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMFCActiveXControl3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMFCActiveXControl3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMFCActiveXControl3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMFCActiveXControl3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMFCActiveXControl3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMFCActiveXControl3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMFCActiveXControl3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMFCActiveXControl3Vtbl;

    interface _DMFCActiveXControl3
    {
        CONST_VTBL struct _DMFCActiveXControl3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMFCActiveXControl3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMFCActiveXControl3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMFCActiveXControl3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMFCActiveXControl3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMFCActiveXControl3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMFCActiveXControl3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMFCActiveXControl3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMFCActiveXControl3_DISPINTERFACE_DEFINED__ */


#ifndef ___DMFCActiveXControl3Events_DISPINTERFACE_DEFINED__
#define ___DMFCActiveXControl3Events_DISPINTERFACE_DEFINED__

/* dispinterface _DMFCActiveXControl3Events */
/* [uuid] */ 


EXTERN_C const IID DIID__DMFCActiveXControl3Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("3E670333-22C2-4667-8AE6-275C12AA61D7")
    _DMFCActiveXControl3Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMFCActiveXControl3EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMFCActiveXControl3Events * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMFCActiveXControl3Events * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMFCActiveXControl3Events * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMFCActiveXControl3Events * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMFCActiveXControl3Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMFCActiveXControl3Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMFCActiveXControl3Events * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMFCActiveXControl3EventsVtbl;

    interface _DMFCActiveXControl3Events
    {
        CONST_VTBL struct _DMFCActiveXControl3EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMFCActiveXControl3Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMFCActiveXControl3Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMFCActiveXControl3Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMFCActiveXControl3Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMFCActiveXControl3Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMFCActiveXControl3Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMFCActiveXControl3Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMFCActiveXControl3Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MFCActiveXControl3;

#ifdef __cplusplus

class DECLSPEC_UUID("32873A3A-4801-4C91-A23C-CBC3B3A75387")
MFCActiveXControl3;
#endif
#endif /* __MFCActiveXControl3Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


