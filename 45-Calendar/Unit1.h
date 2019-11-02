//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
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
#include <FMX.Calendar.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.DateUtils.hpp>
#include <sysopen.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TLabel *Label1;
	TShadowEffect *ShadowEffect1;
	TButton *AddButton;
	TButton *BackButton;
	TCalendar *Calendar1;
	TFDMemTable *FDMemTable1;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall Calendar1ApplyStyleLookup(TObject *Sender);
	void __fastcall Calendar1Change(TObject *Sender);
	void __fastcall Calendar1DateSelected(TObject *Sender);
private:	// User declarations
public:		// User declarations
	void __fastcall CleanListBox(TListBox *AListBox, int AIndex);
	void __fastcall UpdateCalendar(TObject *Sender);
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
