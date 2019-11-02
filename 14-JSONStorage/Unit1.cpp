//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include <System.IOUtils.hpp>
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
  FDMemTable1->SaveToFile(System::Ioutils::TPath::Combine(System::Ioutils::TPath::GetDocumentsPath(),"file.json"),TFDStorageFormat::sfJSON);
}
//---------------------------------------------------------------------------

