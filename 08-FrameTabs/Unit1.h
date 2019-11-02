//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
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
	TFirstFrame *FirstFrame1;
	TTabItem *TabItem2;
	TSecondFrame *SecondFrame1;
	TTabItem *TabItem3;
	TThirdFrame *ThirdFrame1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
