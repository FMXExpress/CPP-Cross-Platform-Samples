//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Gestures.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TShadowEffect *ShadowEffect4;
	TLabel *Label1;
	TStyleBook *MaterialOxfordBlueSB;
	TTabControl *TabControl1;
	TTabItem *TabItem1;
	TGlyph *Glyph1;
	TTabItem *TabItem2;
	TGlyph *Glyph2;
	TTabItem *TabItem3;
	TGlyph *Glyph3;
	TImageList *ImageList1;
	TGestureManager *GestureManager1;
	TActionList *ActionList1;
	TNextTabAction *NextTabAction1;
	TPreviousTabAction *PreviousTabAction1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
