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
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
  if (Sender==RadioButton1)
  {
	   if (!((TRadioButton *)Sender)->IsChecked)
		 {
		   FDMemTable1->Edit();
		   FDMemTable1->FieldByName("Value")->AsString = "Delphi";
		   FDMemTable1->Post();
		 }
  }
  else if (Sender==RadioButton2)
  {
	   if (!((TRadioButton *)Sender)->IsChecked)
		 {
		   FDMemTable1->Edit();
		   FDMemTable1->FieldByName("Value")->AsString = "Is";
		   FDMemTable1->Post();
		 }
  }
  else if (Sender==RadioButton3)
  {
	   if (!((TRadioButton *)Sender)->IsChecked)
		 {
		   FDMemTable1->Edit();
		   FDMemTable1->FieldByName("Value")->AsString = "Awesome";
		   FDMemTable1->Post();
		 }
  }
}
//---------------------------------------------------------------------------

