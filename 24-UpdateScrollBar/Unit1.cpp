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
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
  Edit1->Text = FloatToStr(ScrollBar1->Value);
  TLinkObservers::ControlChanged(Edit1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Validate(TObject *Sender, UnicodeString &Text)
{

  float LValue = StrToFloat(Text);
  if (LValue!=ScrollBar1->Value)
  {
	ScrollBar1->Value = StrToFloat(Text);
  }
}
//---------------------------------------------------------------------------

