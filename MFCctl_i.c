

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Sat Aug 18 14:57:54 2007
 */
/* Compiler settings for .\MFCctl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_MFCctlLib,0x43083F07,0x2A3A,0x42BB,0x86,0xF9,0x02,0xA5,0xD8,0xBA,0x3A,0x85);


MIDL_DEFINE_GUID(IID, DIID__DMFCctl,0x49CCFFE8,0xAF0A,0x46A8,0xB0,0x2E,0xA8,0x05,0x85,0x55,0x19,0x00);


MIDL_DEFINE_GUID(IID, DIID__DMFCctlEvents,0xE44D1F07,0x9EF4,0x4538,0x8B,0xAC,0xD0,0xE9,0x18,0xE2,0x2F,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_MFCctl,0x5D541275,0xD9E1,0x42C4,0xBE,0xD1,0xA0,0x60,0x31,0x6B,0x76,0x95);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



