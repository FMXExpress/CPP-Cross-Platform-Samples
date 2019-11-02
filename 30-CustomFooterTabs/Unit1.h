//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TShadowEffect *ShadowEffect4;
	TLabel *Label1;
	TLayout *Layout1;
	TSpeedButton *Button1;
	TGlyph *Glyph4;
	TLabel *Label2;
	TSpeedButton *Button2;
	TGlyph *Glyph5;
	TLabel *Label3;
	TSpeedButton *Button3;
	TGlyph *Glyph6;
	TLabel *Label4;
	TTabControl *TabControl1;
	TTabItem *TabItem1;
	TGlyph *Glyph1;
	TTabItem *TabItem2;
	TGlyph *Glyph2;
	TTabItem *TabItem3;
	TGlyph *Glyph3;
	TImageList *ImageList1;
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
