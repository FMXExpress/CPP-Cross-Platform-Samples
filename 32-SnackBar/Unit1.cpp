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
void __fastcall TForm1::SnackButtonClick(TObject *Sender)
{
	Rectangle1->Height = 0;
	Layout1->Visible = True;
	FloatAnimation1->Enabled = True;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FloatAnimation1Finish(TObject *Sender)
{
	FloatAnimation1->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Layout1->Visible = False;
}
//---------------------------------------------------------------------------

