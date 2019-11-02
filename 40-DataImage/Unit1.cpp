//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageControl1Change(TObject *Sender)
{
	TLinkObservers::ControlChanged(ImageControl1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ImageControl1Click(TObject *Sender)
{
#if defined(_PLAT_IOS) || defined(_PLAT_ANDROID)
	if (OpenDialog1->Execute())
	{
	  ImageControl1->LoadFromFile(OpenDialog1->FileName);
	}
#endif
}
//---------------------------------------------------------------------------

