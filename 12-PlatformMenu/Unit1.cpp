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
void __fastcall TForm1::FormCreate(TObject *Sender)
{
#if (defined(_PLAT_ANDROID) || defined(_PLAT_IOS))
	MultiView1->ControlType = TControlType::Platform;
#else
	MultiView1->ControlType = TControlType::Styled;
#endif
}
//---------------------------------------------------------------------------

