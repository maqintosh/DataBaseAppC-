//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "BD_v1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
   #include "Unit6.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLogowanie *Logowanie;
//---------------------------------------------------------------------------
__fastcall TLogowanie::TLogowanie(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLogowanie::ZalogujClick(TObject *Sender)
{
bool flaga=false;
   //ShowMessage(Login->RecordCount);
   if(Login->Active==false){
   Login->Active=true;      }
   Login->First();
for(int i=0;i < Login->RecordCount;i++){

  if(Login->FieldByName("nazwa_uzytkownika")->AsString.LowerCase() == nazwauzytkownika->Text.LowerCase()){
   if(Login->FieldByName("haslo")->AsString == haslo->Text){
		   flaga=true;
		  //Login->Active=true;
		  Login->Edit();
		   Login->FieldByName("ostatnia_wizyta")->AsDateTime= Now();
		   Login->Post();
		   //Login->Active=false;
           break;
	}

}
	  Login->Next();

}    //oblsuga bledu wpisywania hasla
	if(flaga){

	if(Login->FieldByName("prawa_administratora")->AsInteger == 1){
	ShowMessage("!!!WITAJ W PANELU ADMINISTRATORA!!!");
	Form2->Label1->Caption ="WITAJ W PANELU ADMINISTRATORA";
	//Logowanie->Hide();
	Form2->Show();
	Form2->BringToFront();

	if(Form2->SpeedButton1->Enabled == false){
	Form2->SpeedButton1->Enabled=true; }

	 }
	   else{
		   ShowMessage("!!!WITAJ W PANELU UZYTKOWNIKA!!!");
		Form2->Show();
		Form2->BringToFront();
		Form2->SpeedButton1->Enabled=false;

	   }



	}

	 else{
	 ShowMessage("!!!B£ÊDNE HASLO LUB NAZWA UZYTKOWNIKA SPRAWDZ PISOWNIE!!!");




	}
}
//---------------------------------------------------------------------------

void __fastcall TLogowanie::FormClose(TObject *Sender, TCloseAction &Action)
{
 if(Application->MessageBox(L"Czy na pewno chcesz zamkn¹æ program?",L"Zamykanie aplikacji w toku...",
	 MB_YESNO | MB_ICONQUESTION)==IDNO){
	  //Tresc->Lines->Clear();
	  //nazwapliku="";//zabezpieczam nadpisanie pliku aktualnie otwartego

				Action=caNone;
   }
			 else{
				Application->Terminate();}
}
//---------------------------------------------------------------------------








void __fastcall TLogowanie::SpeedButton1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
Logowanie->haslo->PasswordChar=0;
}
//---------------------------------------------------------------------------

void __fastcall TLogowanie::SpeedButton1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
Logowanie->haslo->PasswordChar=1;
}
//---------------------------------------------------------------------------


void __fastcall TLogowanie::Zamknij1Click(TObject *Sender)
{

if(Application->MessageBox(L"Czy na pewno chcesz zamkn¹æ program?",L"Zamykanie aplikacji w toku...",
	 MB_YESNO | MB_ICONQUESTION)==IDNO){
	  //Tresc->Lines->Clear();
	  //nazwapliku="";//zabezpieczam nadpisanie pliku aktualnie otwartego


   }
			 else{
				Application->Terminate();}
}
//---------------------------------------------------------------------------

void __fastcall TLogowanie::Oautorze1Click(TObject *Sender)
{
   Oautorze->Show();
}
//---------------------------------------------------------------------------

