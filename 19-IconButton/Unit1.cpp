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

void __fastcall TForm1::UpdateLabel(int AValue)
{
  Label2->Text = IntToStr(AValue);
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  FValue--;
  UpdateLabel(FValue);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  FValue++;
  UpdateLabel(FValue);
}
//---------------------------------------------------------------------------

