//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TLogowanie : public TForm
{
__published:	// IDE-managed Components
	TEdit *nazwauzytkownika;
	TEdit *haslo;
	TADOTable *Login;
	TAutoIncField *Loginid;
	TWideStringField *Loginnazwa_uzytkownika;
	TWideStringField *Loginhaslo;
	TStringField *Loginprawa_administratora;
	TDateField *Loginostatnia_wizyta;
	TImage *v;
	TLabel *Label_Nazwa_Uzytkownika;
	TLabel *Label_Haslo;
	TSpeedButton *Zaloguj;
	TSpeedButton *SpeedButton1;
	TMainMenu *MainMenu1;
	TMenuItem *Oautorze1;
	TMenuItem *Zamknij1;
	void __fastcall ZalogujClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Zamknij1Click(TObject *Sender);
	void __fastcall Oautorze1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLogowanie(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLogowanie *Logowanie;
//---------------------------------------------------------------------------
#endif
