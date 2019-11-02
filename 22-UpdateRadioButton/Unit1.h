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
#include <FMX.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TShadowEffect *ShadowEffect4;
	TLabel *Label1;
	TLabel *Label2;
	TLayout *Layout1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TFDMemTable *FDMemTable1;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkPropertyToField *LinkPropertyToFieldText;
	TLinkPropertyToField *LinkPropertyToFieldIsChecked;
	TLinkPropertyToField *LinkPropertyToFieldIsChecked2;
	TLinkPropertyToField *LinkPropertyToFieldIsChecked3;
	void __fastcall RadioButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
