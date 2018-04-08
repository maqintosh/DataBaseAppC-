//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include "BD_v1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton4Click(TObject *Sender)
{
		if(Application->MessageBox(L"Czy na pewno chcesz zamkn¹æ program?",L"Zamykanie aplikacji w toku...",
	 MB_YESNO | MB_ICONQUESTION)==IDYES){


			Application->Terminate();
   }



}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
//Form2->Visible=false;
Form3->Visible=true;
Form3->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
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

void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{ // this->Hide();
	Form4->Show();
//Form2->Visible=false;
//Form4->Visible=true;
Form4->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{      Logowanie->Hide();
	   Form1->Show();



}
//---------------------------------------------------------------------------

