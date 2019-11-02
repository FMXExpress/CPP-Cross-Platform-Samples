//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#pragma comment (lib, "xmlrtl")

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

  DefaultDOMVendor = sOmniXmlVendor;

  DataMemo->Lines->Clear();
  XMLMemo->Lines->SaveToFile(System::Ioutils::TPath::Combine(ExtractFilePath(ParamStr(0)),"data.xml"));
  _di_IXMLDocument Doc = Xml::Xmldoc::LoadXMLDocument(
						  System::Ioutils::TPath::Combine(
							  ExtractFilePath(ParamStr(0)),"data.xml"));
  _di_IXMLNode Data = Doc->DocumentElement;
  for (int I = 0; I < Data->ChildNodes->Count; I++)
  {
	DataMemo->Lines->Append(IntToStr(I));
	_di_IXMLNode Node = Data->ChildNodes->Get(I);
	if (Node->LocalName == "cpp")
	{
	  DataMemo->Lines->Append(" a -> " + Node->ChildNodes->GetNode("a")->Text);
	  DataMemo->Lines->Append(" b -> " + Node->ChildNodes->GetNode("b")->Text);
	  DataMemo->Lines->Append(" c -> " + Node->ChildNodes->GetNode("c")->Text);
	}
  }
}
//---------------------------------------------------------------------------

