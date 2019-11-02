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
	if (ListView1->Height==0)
	{
	  Layout1->Visible = True;
	  FloatAnimation1->Enabled = True;
	} else {
	  HideBottomSheet();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FloatAnimation1Finish(TObject *Sender)
{
	FloatAnimation1->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	ListView1->Height = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListView1ItemClick(TObject * const Sender, TListViewItem * const AItem)

{
  HideBottomSheet();

  Label3->Text = AItem->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle1Click(TObject *Sender)
{
  HideBottomSheet();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HideBottomSheet()
{
  ListView1->Height = 0;
  Layout1->Visible = False;
}
//---------------------------------------------------------------------------

