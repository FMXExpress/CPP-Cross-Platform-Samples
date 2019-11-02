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
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TVertScrollBox *VertScrollBox1;
	TRectangle *Rectangle1;
	TLabel *Label1;
	TInvertEffect *InvertEffect1;
	TShadowEffect *ShadowEffect1;
	TImage *Image1;
	TFillRGBEffect *FillRGBEffect2;
	TRectangle *Rectangle2;
	TLabel *Label2;
	TInvertEffect *InvertEffect2;
	TShadowEffect *ShadowEffect2;
	TImage *Image2;
	TFillRGBEffect *FillRGBEffect1;
	TRectangle *Rectangle3;
	TLabel *Label3;
	TInvertEffect *InvertEffect3;
	TShadowEffect *ShadowEffect3;
	TImage *Image3;
	TFillRGBEffect *FillRGBEffect3;
	TToolBar *ToolBar1;
	TLabel *Label4;
	TShadowEffect *ShadowEffect4;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
