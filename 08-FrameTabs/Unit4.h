//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TThirdFrame : public TFrame
{
__published:	// IDE-managed Components
	TGlyph *Glyph3;
private:	// User declarations
public:		// User declarations
	__fastcall TThirdFrame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TThirdFrame *ThirdFrame;
//---------------------------------------------------------------------------
#endif
