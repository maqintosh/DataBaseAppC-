//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "BD_v1.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
//ADOTable1->Active = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
	{
	Form1->Visible=false;
	Form2->Visible=true;
	Form2->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
 switch(ComboBox1->ItemIndex) {
		   case 0:    Form3->wyswietlanie->Close();
					Form3->wyswietlanie->TableName="zdjeciesamolot";
					Form3->wyswietlanie->Open();
					 break;
		   case 1:    Form3->wyswietlanie->Close();
					Form3->wyswietlanie->TableName="logoproducenta";
					Form3->wyswietlanie->Open();break;
		   case 2:    Form3->wyswietlanie->Close();
					Form3->wyswietlanie->TableName="samolot";
					Form3->wyswietlanie->Open();
					break;
		   case 3:    Form3->wyswietlanie->Close();
					Form3->wyswietlanie->TableName="wprodukcji";
					Form3->wyswietlanie->Open();break;
		  case 4:    Form3->wyswietlanie->Close();
					Form3->wyswietlanie->TableName="rodzaj";
					Form3->wyswietlanie->Open();break;
		  case 5:   Form3-> wyswietlanie->Close();
				   Form3->	wyswietlanie->TableName="kraj";
					Form3->wyswietlanie->Open();break;
		  case 6:    Form3->wyswietlanie->Close();
					Form3->wyswietlanie->TableName="przewoznik";
					Form3->wyswietlanie->Open();break;
		   case 7:    Form3->wyswietlanie->Close();
					Form3->wyswietlanie->TableName="listaprzewoznikow";
				   Form3->	wyswietlanie->Open();break;



		 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
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

