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
  Memo1->Lines->Clear();

  RESTRequest1->ExecuteAsync([&](){
	Label1->Text = "Complete!";
	Memo1->Lines->Append("Userid: " + FDMemTable1->FieldByName("Userid")->AsString);
	Memo1->Lines->Append("id: " + FDMemTable1->FieldByName("id")->AsString);
	Memo1->Lines->Append("title: " + FDMemTable1->FieldByName("title")->AsWideString);
	Memo1->Lines->Append("body: " + FDMemTable1->FieldByName("body")->AsWideString);
  }, True, True, [&](TObject *Sender){
	Label1->Text = "Error!";
  });
}
//---------------------------------------------------------------------------

