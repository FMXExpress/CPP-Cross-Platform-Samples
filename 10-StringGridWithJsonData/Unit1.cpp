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
  RESTRequest1->ExecuteAsync([&](){
		Label1->Text = "Complete!";
		LinkGridToDataSourceBindSourceDB1->Active = False;
		LinkGridToDataSourceBindSourceDB1->Active = True;
	  },
	True,
	True,
	[&](TObject *Sender)
	  {
		Label1->Text = "Error!";
	  });
}
//---------------------------------------------------------------------------

