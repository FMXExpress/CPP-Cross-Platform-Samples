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
  RESTRequest1->ExecuteAsync(
	[&](){
		Label1->Text = "Complete!";

		FDMemTable1->BeginBatch();
		TJSONObject *LJSON = (TJSONObject*)TJSONObject::ParseJSONValue(RESTResponse1->Content);
		for (int I = 0; I < LJSON->Count; I++) {
			FDMemTable1->AppendRecord(
			ARRAYOFCONST((
				((TJSONPair*)(LJSON->Pairs[I]))->JsonString->ToString(),
				((TJSONPair*)(LJSON->Pairs[I]))->JsonValue->ToString()
			)));
		}
		FDMemTable1->EndBatch();

		LinkListControlToField2->Active = False;
		LinkListControlToField2->Active = True;

		FDMemTable1->First();

	  },
	True,
	True,
	[&](TObject *Sender){
		Label1->Text = "Error!";
	  });
}
//---------------------------------------------------------------------------

