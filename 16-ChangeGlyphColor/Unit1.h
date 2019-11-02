//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
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
	TGridPanelLayout *GridPanelLayout1;
	TRectangle *Rectangle1;
	TGlyph *Glyph1;
	TFillRGBEffect *FillRGBEffect1;
	TRectangle *Rectangle2;
	TGlyph *Glyph2;
	TFillRGBEffect *FillRGBEffect2;
	TRectangle *Rectangle3;
	TGlyph *Glyph3;
	TFillRGBEffect *FillRGBEffect3;
	TImageList *ImageList1;
	void __fastcall Rectangle1Click(TObject *Sender);
	void __fastcall Rectangle2Click(TObject *Sender);
	void __fastcall Rectangle3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
