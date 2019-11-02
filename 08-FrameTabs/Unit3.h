//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TSecondFrame : public TFrame
{
__published:	// IDE-managed Components
	TGlyph *Glyph2;
private:	// User declarations
public:		// User declarations
	__fastcall TSecondFrame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSecondFrame *SecondFrame;
//---------------------------------------------------------------------------
#endif
