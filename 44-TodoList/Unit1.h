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
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <sysopen.h>
#include <System.Threading.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTabControl *TabControl1;
	TTabItem *ListTab;
	TListView *ListView1;
	TTabItem *ListItemsTab;
	TListBox *ListBox1;
	TTabItem *EditTab;
	TLabel *Label2;
	TEdit *Edit1;
	TButton *SaveButton;
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TLabel *Label1;
	TShadowEffect *ShadowEffect1;
	TButton *AddButton;
	TButton *BackButton;
	TFDMemTable *MasterFDMemTable;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkListControlToField *LinkListControlToField1;
	TLinkListControlToField *LinkListControlToField2;
	TFDMemTable *DetailFDMemTable;
	TBindSourceDB *BindSourceDB2;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall BackButtonClick(TObject *Sender);
	void __fastcall SaveButtonClick(TObject *Sender);
	void __fastcall ListBox1ChangeCheck(TObject *Sender);
	void __fastcall ListView1ItemClickEx(TObject * const Sender, int ItemIndex, const TPointF &LocalClickPos,
          TListItemDrawable * const ItemObject);
	void __fastcall TabControl1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	void __fastcall DelayedSetFocus(TControl *Control);
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
