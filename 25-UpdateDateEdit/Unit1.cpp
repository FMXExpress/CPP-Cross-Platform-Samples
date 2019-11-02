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
  BehindEdit1->Text = DateTimeToStr(Now());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BehindEdit1Validate(TObject *Sender, UnicodeString &Text)

{
  TDateTime LValue = StrToDateTime(Text);
  if (LValue!=DateEdit1->DateTime)
  {
	DateEdit1->DateTime = StrToDateTime(Text);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DateEdit1Change(TObject *Sender)
{
  BehindEdit1->Text = DateEdit1->Text;
  TLinkObservers::ControlChanged(BehindEdit1);
}
//---------------------------------------------------------------------------

