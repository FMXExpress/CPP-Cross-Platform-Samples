//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef __ANDROID__
#include <Androidapi.Helpers.hpp>
#include <Androidapi.JNI.Os.hpp>
#endif
#include <FMX.DialogService.hpp>
#include <wwEmailWithAttachment.hpp>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	FRawBitmap = new TBitmap(0, 0);
#ifdef __ANDROID__
	FPermissionCamera = JStringToString(TJManifest_permission::JavaClass->CAMERA);
	FPermissionReadExternalStorage = JStringToString(TJManifest_permission::JavaClass->READ_EXTERNAL_STORAGE);
	FPermissionWriteExternalStorage = JStringToString(TJManifest_permission::JavaClass->WRITE_EXTERNAL_STORAGE);
#endif
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
	delete FRawBitmap;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DisplayRationale(TObject *Sender, const DynamicArray<String> APermissions, const _di_TProc APostRationaleProc)
{
	String RationaleMsg;

	for (int i = 0; i < APermissions.Length; i++) {
		if (APermissions[i] == FPermissionCamera)
			RationaleMsg = RationaleMsg + "The app needs to access the camera to take a photo" + sLineBreak + sLineBreak;
		else if (APermissions[i] == FPermissionReadExternalStorage)
			RationaleMsg = RationaleMsg + "The app needs to load photo files from your device";
	}

	// Show an explanation to the user *asynchronously* - don't block this thread waiting for the user's response!
	// After the user sees the explanation, invoke the post-rationale routine to request the permissions
	TDialogService::ShowMessage(RationaleMsg,
		[APostRationaleProc](TModalResult AKey)
		{
			APostRationaleProc->Invoke();
		});
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ActionListUpdate(TBasicAction *Action, bool &Handled)
{
	LayoutFilterSettings->Visible = !ActionResetEffect->Checked;
	ActionClearImage->Enabled = !ImageContainer->Bitmap->IsEmpty();
	ActionShowShareSheet->Enabled = !FRawBitmap->IsEmpty();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ActionResetEffectExecute(TObject *Sender)
{
	ImageContainer->Bitmap->Assign(FRawBitmap);
	ActionResetEffect->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ActionShowShareSheetBeforeExecute(TObject *Sender)
{
	ActionShowShareSheet->Bitmap = ImageContainer->Bitmap;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ActionClearImageExecute(TObject *Sender)
{
	FRawBitmap->SetSize(0, 0);
	ImageContainer->Bitmap->SetSize(0, 0);
	ImageContainer->Bitmap->Assign(FRawBitmap);
	ActionResetEffect->Execute();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SetEffect(const String AFilterName)
{
	ActionResetEffect->Checked = False;
	FEffect = TFilterManager::FilterByName(AFilterName);
	if (FEffect != NULL) {
		TFilterRec Rec = FEffect->FilterAttr();
		UpdateEffect();
		LoadFilterSettings(Rec);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonSendImageClick(TObject *Sender)
{
#if defined(_PLAT_IOS) || defined(_PLAT_ANDROID)
	ActionShowShareSheet->Execute();
#else
	String LFileName = System::Ioutils::TPath::Combine(ExtractFilePath(ParamStr(0)),Attachment);
	ImageContainer->Bitmap->SaveToFile(LFileName);
	Wwemailwithattachment::wwEmail("delphi@example.com", NULL, NULL,  "Check out my photo!", "C++Builder is AWESOME!", LFileName);
#endif
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonTakePhotoFromCameraClick(TObject *Sender)
{
#if defined(_PLAT_IOS) || defined(_PLAT_ANDROID)
	DynamicArray<String> permissions;
	permissions.Length = 3;
	permissions[0] = FPermissionCamera;
	permissions[1] = FPermissionReadExternalStorage;
	permissions[2] = FPermissionWriteExternalStorage;

	PermissionsService()->RequestPermissions(permissions, TakePicturePermissionRequestResult, DisplayRationale);
#else
	ActionTakePhotoFromCamera->Execute();
#endif
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonTakePhotoFromLibraryClick(TObject *Sender)
{
#if defined(_PLAT_IOS) || defined(_PLAT_ANDROID)
	DynamicArray<String> permissions;
	permissions.Length = 2;
	permissions[0] = FPermissionReadExternalStorage;
	permissions[1] = FPermissionWriteExternalStorage;

	PermissionsService()->RequestPermissions(permissions, LoadPicturePermissionRequestResult, DisplayRationale);
#else
	if (OpenDialog1->Execute()==true)
	{
		ImageContainer->Bitmap->LoadFromFile(OpenDialog1->FileName);
		FRawBitmap->Assign(ImageContainer->Bitmap);
	}
#endif
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DoOnChangedEffectParam(TObject *Sender)
{
	TTrackBar *TrackBarTmp = static_cast<TTrackBar*>(Sender);
	if (TrackBarTmp != NULL && FEffect != NULL) {
		FEffect->ValuesAsFloat[TrackBarTmp->TagString] = TrackBarTmp->Value;
		UpdateEffect();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::UpdateEffect()
{
	bool LValue = False;
	ActionListUpdate(NULL, LValue);
	if (FEffect != NULL) {
		FEffect->ValuesAsBitmap["Input"] = FRawBitmap;
		ImageContainer->Bitmap = FEffect->ValuesAsBitmap["Output"];
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBoxItem1Click(TObject *Sender)
{
	ActionResetEffect->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBoxItem2Click(TObject *Sender)
{
	SetEffect("GaussianBlur");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBoxItem3Click(TObject *Sender)
{
	SetEffect("Pixelate");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBoxItem4Click(TObject *Sender)
{
	SetEffect("Wave");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBoxItem5Click(TObject *Sender)
{
	SetEffect("Contrast");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBoxItem6Click(TObject *Sender)
{
	SetEffect("PaperSketch");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBoxItem7Click(TObject *Sender)
{
	SetEffect("Sharpen");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LoadFilterSettings(TFilterRec Rec)
{
	int i = 0;
	LayoutFilterSettings->DeleteChildren();
	TFilterValueRecArray Values = Rec.Values;
	for (i = 0; i < Values.Length; i++)
	{
		TFilterValueRec RecValue = Values[i];
		if (RecValue.ValueType != TFilterValueType::Float)
			continue;
		TTrackBar *TB = new TTrackBar(this);
		TB->Parent = LayoutFilterSettings;
		TB->Orientation = TOrientation::Vertical;
		TB->Align = TAlignLayout::Left;
		TB->Min = RecValue.Min.AsExtended();
		TB->Max = RecValue.Max.AsExtended();
		TB->Value = RecValue.Value.AsExtended();
		TB->TagString = RecValue.Name;
		TB->Tracking = false;
		TB->OnChange = DoOnChangedEffectParam;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LoadPicturePermissionRequestResult(TObject *Sender, const DynamicArray<String> APermissions, const DynamicArray<TPermissionStatus> AGrantResults) {
	// 2 permissions involved: READ_EXTERNAL_STORAGE and WRITE_EXTERNAL_STORAGE
	if ((AGrantResults.Length == 2) &&
		(AGrantResults[0] == TPermissionStatus::Granted) &&
		(AGrantResults[1] == TPermissionStatus::Granted))
		ActionTakePhotoFromLibrary->Execute();
	else
		TDialogService::ShowMessage("Cannot do photo editing because the required permissions are not granted");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TakePicturePermissionRequestResult(TObject *Sender, const DynamicArray<String> APermissions, const DynamicArray<TPermissionStatus> AGrantResults) {
	// 3 permissions involved: CAMERA, READ_EXTERNAL_STORAGE and WRITE_EXTERNAL_STORAGE
	if ((AGrantResults.Length == 3) &&
		(AGrantResults[0] == TPermissionStatus::Granted) &&
		(AGrantResults[1] == TPermissionStatus::Granted) &&
		(AGrantResults[2] == TPermissionStatus::Granted))
		ActionTakePhotoFromCamera->Execute();
	else
		TDialogService::ShowMessage("Cannot take picture because the required permissions are not granted");
}
//---------------------------------------------------------------------------

