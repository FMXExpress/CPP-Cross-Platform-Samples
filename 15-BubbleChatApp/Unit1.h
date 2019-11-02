//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TVertScrollBox *VSB;
	TLayout *Layout1;
	TButton *Button2;
	TEdit *Edit1;
	TImage *Image1;
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TShadowEffect *ShadowEffect4;
	TLabel *Label1;
	TImage *Image2;
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	void __fastcall AddMessage(String const AText, TAlignLayout AAlignLayout, TCalloutPosition ACalloutPosition);
	void __fastcall FriendMessage(String const S);
	void __fastcall YourMessage(String const S);
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
