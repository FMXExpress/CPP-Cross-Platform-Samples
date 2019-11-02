//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TFirstFrame : public TFrame
{
__published:	// IDE-managed Components
	TGlyph *Glyph1;
private:	// User declarations
public:		// User declarations
	__fastcall TFirstFrame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFirstFrame *FirstFrame;
//---------------------------------------------------------------------------
#endif
