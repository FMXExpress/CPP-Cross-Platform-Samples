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
void __fastcall TForm1::SnackButtonClick(TObject *Sender)
{
  _di_IFMXDialogServiceAsync ASyncService;
  if (TPlatformServices::Current->SupportsPlatformService(__uuidof(IFMXDialogServiceAsync), &ASyncService))
  {
	  ASyncService->MessageDialogAsync( _D("Do you want to set the time?"), TMsgDlgType::mtConfirmation,
													 mbYesNo, TMsgDlgBtn::mbNo, 0,
	   [&](TModalResult const AResult)
	   {
		 switch (AResult) {
		   case mrYes:
					Label1->Text = DateTimeToStr(Now());
			break;
		   case mrNo:
					// do nothing
			break;
		 }
	   });
  }
}
//---------------------------------------------------------------------------

