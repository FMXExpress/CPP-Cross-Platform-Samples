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
void __fastcall TForm1::AddMessage(String const AText, TAlignLayout AAlignLayout, TCalloutPosition ACalloutPosition)
{
TCalloutRectangle *CR = nullptr;
TLabel *L = nullptr;
TCircle *TmpImg = nullptr;

  CR = new TCalloutRectangle(this);
  CR->Parent = VSB;
  CR->Align = TAlignLayout::Top;
  CR->CalloutPosition = ACalloutPosition;
  CR->Margins->Top = 10;
  CR->Margins->Bottom = 10;
  CR->Margins->Left = 5;
  CR->Height = 75;
  CR->XRadius = 25;
  CR->YRadius = CR->XRadius;
  CR->Position->Y = 999999;
  CR->Fill->Kind = TBrushKind::None;
  CR->Stroke->Color = TAlphaColorRec::White;

  L = new TLabel(this);
  L->Parent = CR;
  L->Align = TAlignLayout::Client;
  L->Text = AText;
  L->Margins->Right = 15;
  L->Margins->Left = 5;
  L->Width = CR->Width-20;

  L->WordWrap = True;
  L->AutoSize = True;

  TmpImg = new TCircle(this);
  TmpImg->Parent = CR;
  TmpImg->Align = AAlignLayout;
  TmpImg->Fill->Kind = TBrushKind::Bitmap;
  switch (AAlignLayout)
  {
	case TAlignLayout::Left:
	  TmpImg->Fill->Bitmap->Bitmap->Assign(Image1->Bitmap);
	break;
	case TAlignLayout::Right:
	  TmpImg->Fill->Bitmap->Bitmap->Assign(Image2->Bitmap);
	break;
  }
  TmpImg->Fill->Bitmap->WrapMode = TWrapMode::TileStretch;
  TmpImg->Width = 75;
  TmpImg->Margins->Left = 15;
  TmpImg->Margins->Right = 15;
  TmpImg->Margins->Top = 15;
  TmpImg->Margins->Bottom = 15;

  VSB->ScrollBy(0,-95);
}

void __fastcall TForm1::FriendMessage(String const S)
{
  AddMessage(S, TAlignLayout::Left, TCalloutPosition::Left);
}

void __fastcall TForm1::YourMessage(String const S)
{
  AddMessage(S, TAlignLayout::Right, TCalloutPosition::Right);
}


void __fastcall TForm1::Button2Click(TObject *Sender)
{
  YourMessage(Edit1->Text);
  FriendMessage("A quick brown fox jumped over the yellow log running away from the pink dog and ran down the lane.");
}
//---------------------------------------------------------------------------

