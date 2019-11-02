// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwEmailWithAttachment.pas' rev: 33.00 (Windows)

#ifndef WwemailwithattachmentHPP
#define WwemailwithattachmentHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.Math.hpp>
#include <System.Generics.Collections.hpp>
#include <System.IOUtils.hpp>
#include <System.StrUtils.hpp>
#include <System.Win.ComObj.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.Registry.hpp>
#include <System.TypInfo.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wwemailwithattachment
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TwwEmailAttachmentLocation : unsigned char { Default, Cache, Files, ExternalDrive, ExternalCache };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall wwEmail(System::UnicodeString *Recipients, const int Recipients_High, System::UnicodeString *ccRecipients, const int ccRecipients_High, System::UnicodeString *bccRecipients, const int bccRecipients_High, System::UnicodeString Subject, System::UnicodeString Content, System::UnicodeString AttachmentPath, System::UnicodeString mimeTypeStr = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE void __fastcall wwEmail(System::UnicodeString Recipients, System::UnicodeString ccRecipients, System::UnicodeString bccRecipients, System::UnicodeString Subject, System::UnicodeString Content, System::UnicodeString AttachmentPath, System::UnicodeString mimeTypeStr = System::UnicodeString())/* overload */;
}	/* namespace Wwemailwithattachment */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WWEMAILWITHATTACHMENT)
using namespace Wwemailwithattachment;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwemailwithattachmentHPP
