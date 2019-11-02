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
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	Form1->Tag = TabControl1->TabIndex;
	TabControl1->GotoVisibleTab(2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DelayedSetFocus(TControl *Control)
{
  TThread::CreateAnonymousThread(
		[Control](){
			TThread::Synchronize(nullptr, [Control](){ Control->SetFocus(); });
		}
	)->Start();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BackButtonClick(TObject *Sender)
{
  switch (TabControl1->TabIndex) {
	case 1:
		TabControl1->GotoVisibleTab(0);
		break;
	case 2:
		switch (Form1->Tag) {
			case 0:
				TabControl1->GotoVisibleTab(0);
				break;
			case 1:
				TabControl1->GotoVisibleTab(1);
				break;
		}
		break;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SaveButtonClick(TObject *Sender)
{
	switch (Form1->Tag) {
		case 0:
			MasterFDMemTable->Append();
			MasterFDMemTable->FieldByName("Title")->AsString = Edit1->Text;
			MasterFDMemTable->Post();
			LinkListControlToField1->Active = False;
			LinkListControlToField1->Active = True;
		break;
		case 1:
			DetailFDMemTable->Append();
			DetailFDMemTable->Edit();
			DetailFDMemTable->FieldByName("ListId")->AsInteger = MasterFDMemTable->FieldByName("Id")->AsInteger;
			DetailFDMemTable->FieldByName("Title")->AsString = Edit1->Text;
			DetailFDMemTable->FieldByName("Done")->AsBoolean = False;
			DetailFDMemTable->Post();

			LinkListControlToField2->Active = False;
			LinkListControlToField2->Active = True;
		break;
	}
	Edit1->Text = "";
	TabControl1->GotoVisibleTab(Form1->Tag);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBox1ChangeCheck(TObject *Sender)
{
	if (DetailFDMemTable->Locate("Id",VarArrayOf(OPENARRAY(Variant, (static_cast<TListBoxItem*>(Sender)->ImageIndex)))))
	{
		DetailFDMemTable->Edit();
		DetailFDMemTable->FieldByName("Done")->AsBoolean = ListBox1->Selected->IsChecked;
		DetailFDMemTable->Post();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListView1ItemClickEx(TObject * const Sender, int ItemIndex,
		  const TPointF &LocalClickPos, TListItemDrawable * const ItemObject)

{
  DetailFDMemTable->Filtered = False;
  DetailFDMemTable->Filter = "ListId = " + MasterFDMemTable->FieldByName("Id")->AsString;
  DetailFDMemTable->Filtered = True;

  int I = 0;
  DetailFDMemTable->First();
  while (!DetailFDMemTable->Eof) {
	  ListBox1->ListItems[I]->IsChecked = DetailFDMemTable->FieldByName("Done")->AsBoolean;
	  I++;
	  DetailFDMemTable->Next();
	}
  TabControl1->GotoVisibleTab(1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabControl1Change(TObject *Sender)
{
  switch (TabControl1->TabIndex) {
	case 0:
	  AddButton->Visible = True;
	  BackButton->Visible = False;
	  break;
	case 1:
	  AddButton->Visible = True;
	  BackButton->Visible = True;
	  break;
	case 2:
	  AddButton->Visible = False;
	  BackButton->Visible = True;
	  DelayedSetFocus(Edit1);
	  break;
  }
}
//---------------------------------------------------------------------------

