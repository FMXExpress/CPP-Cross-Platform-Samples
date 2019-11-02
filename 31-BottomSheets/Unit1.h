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
#include <FMX.Ani.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.ImageList.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TShadowEffect *ShadowEffect4;
	TLabel *Label1;
	TToolBar *ToolBar2;
	TButton *Button1;
	TLabel *Label2;
	TLabel *Label3;
	TLayout *Layout1;
	TRectangle *Rectangle1;
	TLayout *Layout2;
	TListView *ListView1;
	TFloatAnimation *FloatAnimation1;
	TFDMemTable *FDMemTable1;
	TImageList *ImageList1;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkFillControlToField *LinkFillControlToField1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FloatAnimation1Finish(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ListView1ItemClick(TObject * const Sender, TListViewItem * const AItem);
	void __fastcall Rectangle1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	void __fastcall HideBottomSheet();
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
