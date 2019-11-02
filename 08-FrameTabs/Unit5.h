//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.ImgList.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TDataModule5 : public TDataModule
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule5 *DataModule5;
//---------------------------------------------------------------------------
#endif
