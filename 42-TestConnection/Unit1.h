//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <System.Threading.hpp>
#include <System.StrUtils.hpp>
//---------------------------------------------------------------------------
class TMyAnonymousProcedure : public TCppInterfacedObject<TProc>
{
public:
	typedef    void	(__closure *TMyFunction)();
	TMyAnonymousProcedure(TMyFunction AFunction){FFunction = AFunction;}
	void __fastcall Invoke(void){FFunction();}
private:
	TMyFunction	FFunction;
};
TMyAnonymousProcedure*	AnonymousLambda(TMyAnonymousProcedure::TMyFunction i)
{
	return new TMyAnonymousProcedure(i);
}
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStyleBook *MaterialOxfordBlueSB;
	TToolBar *ToolBar1;
	TLabel *Label1;
	TShadowEffect *ShadowEffect1;
	TButton *Button1;
	TLabel *Label2;
	TIdTCPClient *IdTCPClient1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	bool RanOnce;
	bool Connected;
	void TestConnAnonThread();
	bool __fastcall TestConnection();
	bool __fastcall TestConnectionAsync();
	void __fastcall ApplicationEventsIdle(TObject *Sender, bool &Done);
	__fastcall TForm1(TComponent* Owner);
};
const int BUSY = 1;
const int NOT_BUSY = 0;
const char InternetHost[] = "www.fmxexpress.com"; // change to your own site
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
