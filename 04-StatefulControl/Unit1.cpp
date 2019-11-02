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
  if (!LinkPropertyToFieldText->Active) {
	LinkPropertyToFieldText->Active = True;
  } else {
	  if (FDMemTable1->RecNo == FDMemTable1->RecordCount) {
		FDMemTable1->First();
	  } else {
		FDMemTable1->Next();
	  }
  }
}
//---------------------------------------------------------------------------

