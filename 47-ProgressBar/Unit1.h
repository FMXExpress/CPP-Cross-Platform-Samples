//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TLabel *Label1;
	TShadowEffect *ShadowEffect1;
	TProgressBar *ProgressBar1;
	TButton *Button1;
	TTimer *Timer1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
