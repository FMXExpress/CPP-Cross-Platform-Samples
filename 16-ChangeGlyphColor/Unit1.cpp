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

void __fastcall TForm1::Rectangle1Click(TObject *Sender)
{
  FillRGBEffect1->Enabled = !FillRGBEffect1->Enabled;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle2Click(TObject *Sender)
{
  FillRGBEffect2->Enabled = !FillRGBEffect2->Enabled;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle3Click(TObject *Sender)
{
  FillRGBEffect3->Enabled = !FillRGBEffect3->Enabled;
}
//---------------------------------------------------------------------------

