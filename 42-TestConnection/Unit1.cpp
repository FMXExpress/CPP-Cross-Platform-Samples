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
void __fastcall TForm1::ApplicationEventsIdle(TObject *Sender, bool &Done)
{
  if (RanOnce==False)
  {
	  TestConnectionAsync();
	  RanOnce = True;
  }
}
//---------------------------------------------------------------------------

bool __fastcall TForm1::TestConnection()
{
  __try
  {
	if (IdTCPClient1->Tag == NOT_BUSY)
	{
		IdTCPClient1->Tag = BUSY;
		IdTCPClient1->ReadTimeout = 6000;
		IdTCPClient1->ConnectTimeout = 6000;
		IdTCPClient1->Port = 80;
		IdTCPClient1->Host = InternetHost;
		IdTCPClient1->Connect();
		IdTCPClient1->Disconnect();
		IdTCPClient1->Tag = NOT_BUSY;
		return True;
	} else {
		return False;
	}
  } __except(EXCEPTION_EXECUTE_HANDLER) {
	IdTCPClient1->Tag = NOT_BUSY;
	return False;
  }
}
//---------------------------------------------------------------------------
void TForm1::TestConnAnonThread()
{
	Connected = TestConnection();
}
//---------------------------------------------------------------------------
bool __fastcall TForm1::TestConnectionAsync()
{
	TThread::CreateAnonymousThread(AnonymousLambda(&this->TestConnAnonThread))->Start();
	return Connected;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Application->OnIdle = ApplicationEventsIdle;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Label2->Text = "Connected: " + IfThen(BoolToStr(TestConnectionAsync())=="-1","True","False");
}
//---------------------------------------------------------------------------

