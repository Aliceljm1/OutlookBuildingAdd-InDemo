// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// ĳЩ CString ���캯��������ʽ��


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>


#import "libid:AC0714F2-3D04-11D1-AE7D-00A0C90F26F4" raw_interfaces_only, raw_native_types,  named_guids,rename("FONTSIZE","ADDNDRFONTSIZE") auto_search \
	rename_namespace("AddInDesignerObjects")

#import "libid:2DF8D04C-5BFA-101B-BDE5-00AA0044DE52" raw_interfaces_only, rename("RGB","OfficeRGB") \
	rename("IAccessible","OfficeIAccessible") \
	rename("RGB","OfficeRGB") \
	raw_native_types, named_guids, auto_search \
	rename_namespace("Office")
#import "C:\Program Files (x86)\Common Files\Microsoft Shared\OFFICE15\MSO.DLL" raw_interfaces_only, raw_native_types, no_namespace, named_guids, auto_search

using namespace AddInDesignerObjects;
using namespace Office;


//#import "C:\Program Files (x86)\Common Files\Designer\MSADDNDR.DLL" raw_interfaces_only, raw_native_types, no_namespace, named_guids, auto_search
