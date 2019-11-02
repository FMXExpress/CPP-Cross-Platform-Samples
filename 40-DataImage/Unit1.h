//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.StorageBin.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Dialogs.hpp>
#include <FMX.Effects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImageControl *ImageControl1;
	TToolBar *ToolBar1;
	TLabel *Label1;
	TShadowEffect *ShadowEffect1;
	TStyleBook *MaterialOxfordBlueSB;
	TFDMemTable *FDMemTable1;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TFDStanStorageBinLink *FDStanStorageBinLink1;
	TOpenDialog *OpenDialog1;
	void __fastcall ImageControl1Change(TObject *Sender);
	void __fastcall ImageControl1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
