//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "BD_v1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include <jpeg.hpp>
//#include <stdimage.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SpeedButton1Click(TObject *Sender)
{
	   Form4->Visible=false;
	   Form2->Visible=true;
       Form2->BringToFront();



}
//---------------------------------------------------------------------------
void __fastcall TForm4::SpeedButton2Click(TObject *Sender)
{
//String jan=Form4->Image1->GetNamePath();
		 //ShowMessage(jan );
		 TPngImage* image = new TPngImage();
				   //image->
	Image1->Picture->LoadFromFile("C:/Users/Mateusz Cieœliñski/Desktop/BAZA DANYCH PROJEKT/wel.png")  ;

}
//---------------------------------------------------------------------------



void __fastcall TForm4::SpeedButton3Click(TObject *Sender)
{
	 // otworz opcje wyboru pliku
  if (OpenPictureDialog1->Execute())
	//czy istnieje plik
    if (FileExists(OpenPictureDialog1->FileName))

	  Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
    else

	  throw(Exception("!!!Podany plik nie istnieje!!!"));


	  /* OPCJONALNY ZAPIS DO PLIKU ALE JA CHCE DO BAZY SCIEZKE ALBO BYTEA

	  // execute a save picture dialog
  if (SavePictureDialog1->Execute())
    // first check if file exists
    if (FileExists(SavePictureDialog1->FileName))
      // if it exists, raise an exception
      throw(Exception("File already exists. Cannot overwrite."));
    else
      // otherwise, save the image data into the file
	  Image1->Picture->SaveToFile(SavePictureDialog1->FileName);*/



}
//---------------------------------------------------------------------------

void __fastcall TForm4::SpeedButton4Click(TObject *Sender)
{
	   //fizyczne dodanie zdjecia do folderu bazy
	String nazwa= ExtractFileName(OpenPictureDialog1->FileName);
	UnicodeString sciezkazapisu =   "C:\\Users\\Mateusz Cieœliñski\\Desktop\\BAZA DANYCH PROJEKT\\" + nazwa;
	UnicodeString sciezkapobrania = OpenPictureDialog1->FileName;

	CopyFile(sciezkapobrania.w_str(),sciezkazapisu.w_str(),false) ;
	Edit1->Text=sciezkazapisu;
//zapis file path do bazy danych
	zdjeciesamolot->Open();
	zdjeciesamolot->Insert();

	zdjeciesamolot->FieldByName("adres")->AsString=sciezkazapisu;

	//wyciagnieniecie id
		AnsiString id_memo=Memo1->Text;
		int id_memo_int= StrToInt(id_memo);
		zdjeciesamolot->FieldByName("fk_zdjeciesamolot")->AsInteger=id_memo_int;



	zdjeciesamolot->Post();
	zdjeciesamolot->Close();
	//czyszczenie

   Memo1->Clear();
//powodzenie
	ShowMessage("Uda³o siê dodaæ!");
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
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

void __fastcall TForm4::FormCreate(TObject *Sender)
{

	ListBox1->Clear();
    samolot->Active=true;
	samolot->First();
		for (int i = 0; i < samolot->RecordCount; i++)
			{
				String	id=samolot->FieldByName("id")->Text;
					String samolot_nazwa = samolot->FieldByName("id")->Text + " "+ samolot->FieldByName("nazwa")->Text ;
					ListBox1->Items->Add(samolot_nazwa);
					samolot->Next();

			}


}
//---------------------------------------------------------------------------

