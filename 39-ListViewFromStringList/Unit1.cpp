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
  TStringList *SL = new TStringList;
  __try
  {

	SL->Text = "C++Builder\ris\rawesome!";

	FDMemTable1->BeginBatch();
	for (int I = 0; I < SL->Count; I++) {
		FDMemTable1->AppendRecord(ARRAYOFCONST((SL->Strings[I],0)));
	}
	FDMemTable1->EndBatch();

	LinkListControlToField1->Active = False;
	LinkListControlToField1->Active = True;

	FDMemTable1->First();
  }
  __finally
  {
	delete SL;
  }
}
//---------------------------------------------------------------------------

