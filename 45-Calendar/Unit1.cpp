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
void __fastcall TForm1::CleanListBox(TListBox *AListBox, int AIndex)
{
	if (AListBox->ItemByIndex(AIndex)->TagObject!=NULL)
	{
	  if (AListBox->ItemByIndex(AIndex)->TagObject->ClassType() == __classid(TCircle))
		{
		  delete (TRectangle*)(AListBox->ItemByIndex(AIndex)->TagObject);
		  AListBox->ItemByIndex(AIndex)->TagObject = NULL;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::UpdateCalendar(TObject *Sender)
{
	TListBox *LB = (TListBox*)(Calendar1->Controls->Items[0]->Controls->Items[0]->Controls->Items[3]);

	int DaysInMonth = DaysInAMonth(YearOf(Calendar1->DateTime), MonthOfTheYear(Calendar1->DateTime));

	int StartMonth = 0;
	int EndMonth = 0;
	int LastMonth = 1;
	for (int I = 0; I < LB->Count; I++)
	{
		if (StrToInt(LB->ItemByIndex(I)->Text)==1)
		 {
		   StartMonth = 1;
		   LastMonth = Max(I,1);
		 }

		if ((StartMonth==1) && (EndMonth==0))
		  {
			if (FDMemTable1->Locate("EventDateTime",VarArrayOf(OPENARRAY(Variant, (EncodeDate(YearOf(Calendar1->DateTime), MonthOfTheYear(Calendar1->DateTime), StrToInt(LB->ItemByIndex(I)->Text)))))))
			{
				if (LB->ItemByIndex(I)->TagObject==NULL)
				{
					LB->ItemByIndex(I)->TagObject = new TCircle(LB->ItemByIndex(I));
					TCircle *Circle = (TCircle*)(LB->ItemByIndex(I)->TagObject);
					Circle->Parent = LB->ItemByIndex(I);
					Circle->Align = TAlignLayout::Client;
					Circle->Fill->Kind = TBrushKind::None;
					Circle->Stroke->Color = TAlphaColorRec::Red;
					Circle->Stroke->Thickness = 3;
					Circle->HitTest = False;
					Circle->Opacity = 0.5;
				 }
			}
			else
			{
				CleanListBox(LB, I);
			}
		  }
		else
		  {
			CleanListBox(LB, I);
		  }

		if ((StartMonth==1) && (StrToInt(LB->ItemByIndex(I)->Text)==DaysInMonth))
		  {
			EndMonth = 1;
		  }

	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	FDMemTable1->AppendRecord(ARRAYOFCONST((Calendar1->Date.DateString(),"Calendar Record")));
	UpdateCalendar(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Calendar1ApplyStyleLookup(TObject *Sender)
{
	UpdateCalendar(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Calendar1Change(TObject *Sender)
{
	UpdateCalendar(this);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Calendar1DateSelected(TObject *Sender)
{
	UpdateCalendar(this);
}
//---------------------------------------------------------------------------

