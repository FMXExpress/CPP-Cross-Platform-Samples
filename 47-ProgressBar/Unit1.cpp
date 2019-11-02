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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Timer1->Enabled = !Timer1->Enabled;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	if (ProgressBar1->Value==ProgressBar1->Max)
	{
		ProgressBar1->Value = ProgressBar1->Min;
	} else {
		ProgressBar1->Value = ProgressBar1->Value+5;
	}
}
//---------------------------------------------------------------------------

