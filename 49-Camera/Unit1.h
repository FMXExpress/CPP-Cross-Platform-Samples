//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Dialogs.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.MediaLibrary.Actions.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdActns.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Actions.hpp>
#include <System.Permissions.hpp>
#include <System.IOUtils.hpp>
#include <sysopen.h>
#include <FMX.Filter.hpp>
#include <FMX.Filter.Effects.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TLabel *Label1;
	TShadowEffect *ShadowEffect1;
	TButton *ButtonTakePhotoFromLibrary;
	TImage *ImageContainer;
	TToolBar *ToolBarBottom;
	TButton *ButtonTakePhotoFromCamera;
	TButton *ButtonRemovePhoto;
	TButton *ButtonSendImage;
	TLayout *LayoutFilterSettings;
	TListBox *ListBox1;
	TListBoxItem *ListBoxItem1;
	TListBoxItem *ListBoxItem2;
	TListBoxItem *ListBoxItem3;
	TListBoxItem *ListBoxItem4;
	TListBoxItem *ListBoxItem5;
	TListBoxItem *ListBoxItem6;
	TListBoxItem *ListBoxItem7;
	TOpenDialog *OpenDialog1;
	TActionList *ActionList;
	TTakePhotoFromLibraryAction *ActionTakePhotoFromLibrary;
	TTakePhotoFromCameraAction *ActionTakePhotoFromCamera;
	TShowShareSheetAction *ActionShowShareSheet;
	TAction *ActionClearImage;
	TAction *ActionResetEffect;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall ActionListUpdate(TBasicAction *Action, bool &Handled);
	void __fastcall ActionResetEffectExecute(TObject *Sender);
	void __fastcall ActionShowShareSheetBeforeExecute(TObject *Sender);
	void __fastcall ActionClearImageExecute(TObject *Sender);
	void __fastcall ButtonSendImageClick(TObject *Sender);
	void __fastcall ButtonTakePhotoFromCameraClick(TObject *Sender);
	void __fastcall ButtonTakePhotoFromLibraryClick(TObject *Sender);
	void __fastcall ListBoxItem1Click(TObject *Sender);
	void __fastcall ListBoxItem2Click(TObject *Sender);
	void __fastcall ListBoxItem3Click(TObject *Sender);
	void __fastcall ListBoxItem4Click(TObject *Sender);
	void __fastcall ListBoxItem5Click(TObject *Sender);
	void __fastcall ListBoxItem6Click(TObject *Sender);
	void __fastcall ListBoxItem7Click(TObject *Sender);
private:	// User declarations
	String FPermissionCamera;
	String FPermissionReadExternalStorage;
	String FPermissionWriteExternalStorage;
	TBitmap *FRawBitmap;
	TFilter *FEffect;
	void __fastcall DisplayRationale(TObject *Sender, const DynamicArray<String> APermissions, const _di_TProc APostRationaleProc);
	void __fastcall LoadPicturePermissionRequestResult(TObject *Sender, const DynamicArray<String> APermissions, const DynamicArray<TPermissionStatus> AGrantResults);
	void __fastcall TakePicturePermissionRequestResult(TObject *Sender, const DynamicArray<String> APermissions, const DynamicArray<TPermissionStatus> AGrantResults);
	void __fastcall DoOnChangedEffectParam(TObject *Sender);
	void __fastcall LoadFilterSettings(TFilterRec Rec);
public:		// User declarations
	void __fastcall SetEffect(const String AFilterName);
	void __fastcall UpdateEffect();
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
const char Attachment[] = "attachment.jpg";
#endif
