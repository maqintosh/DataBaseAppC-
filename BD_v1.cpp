//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "BD_v1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxChart"
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{                                                           //int i=0;i++;

	 //ADOTable2->TableName="gatunek";
	// ADOTable2->Open();

	  Form3->Visible=false;
	  Form2->Visible=true;
	  Form2->BringToFront();



}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button3Click(TObject *Sender)
{        samolot->Open();
		 samolot->Insert();
		 samolot->FieldByName("nazwa")->AsAnsiString="NOWY1";
		 samolot->Post();
		 //samolot->Open();



}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
ShowMessage("USUNALES REKORD Z TABELI!!!");
			samolot->Delete();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button4Click(TObject *Sender)
{
Form3->ComboBox1->ItemIndex=0;
	this->ADODataSet1->Active= false;
	this->ADODataSet1->CommandText = "SELECT * FROM zdjeciesamolot;";
	this->ADODataSet1->Active = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::ComboBox1Change(TObject *Sender)
{
	//this->ADOQuery1->SetFields()
//if(ComboBox1->ItemIndex==0){ShowMessage("wyswietlanie");}
		 switch(ComboBox1->ItemIndex) {
		   case 0:    	this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM zdjeciesamolot;";
						this->ADODataSet1->Active = true;
					 break;
		   case 1:    this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM logoproducenta;";
						this->ADODataSet1->Active = true;break;
		   case 2:    this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM samolot;";
						this->ADODataSet1->Active = true;break;
		   case 3:    this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM wprodukcji;";
						this->ADODataSet1->Active = true;break;
		  case 4:    this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM rodzaj;";
						this->ADODataSet1->Active = true;break;
		  case 5:    this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM kraj;";
						this->ADODataSet1->Active = true;break;
		  case 6:    this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM przewoznik;";
						this->ADODataSet1->Active = true;break;
		   case 7:   this->ADODataSet1->Active= false;
						this->ADODataSet1->CommandText = "SELECT * FROM listaprzewoznikow;";
						this->ADODataSet1->Active = true;break;



		 }

		// insert into cos(kolumna:,komuna2:)
		 //values()  ShellAPI
	  //	 stream->

/*zdjeciesamolot
logoproducenta
samolot
wprodukcji
rodzaj
kraj
przewoznik
listaprzewoznikow*/

	  // if(ComboBox1->ItemIndex==1){
	   //ADOTable1->Refresh();
	   

	   //}




}
//---------------------------------------------------------------------------





void __fastcall TForm3::SpeedButtonClick(TObject *Sender)
{



	   this->ADODataSet1->Active= false;
	   this->ADODataSet1->CommandText = this->Memo1 ->Text;
	   this->ADODataSet1->Active = true;

		//this->ADOCommand1->CommandText = this->Memo1->Text;
		//this->ADOCommand1->Execute();


}
//---------------------------------------------------------------------------




void __fastcall TForm3::SpeedButton2Click(TObject *Sender)
{
		this->ADOCommand1->CommandText = this->Memo1->Text;
		this->ADOCommand1->Execute();

	   //	ShowMessage("INSERT REKORD DO TABELI!!!");


}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton3Click(TObject *Sender)
{
			//w polu Edit1 wpisuje szukana wartoœæ
			//ponizsze polecenia sluza stworzeniu instancji TLocateOptions
		   //oblsuguja zdarzenia Filter
       samolot->Open();
	   TLocateOptions SearchOptions;
	   SearchOptions.Clear();
	   SearchOptions << loPartialKey;
				// TStringList *IndexList = new TStringList();
			   //	samolot->GetIndexNames(IndexList);
		//String x=IndexList->ValueFromIndex[0];

	   //	TColumn	*cyrk = new TColumn();
		//ShowMessage(DBGrid2->Columns[0]);

	  // int ile;
	   //szukaj=samolot->TableName;
	   //szukaj=samolot->GetIndexNames(szukaj)  ;
	   //ShowMessage(szukaj);

	/*   AnsiString ListOfIndexFields[20];
	   for(int i;i<2;i++){
for (int i = 0; i < samolot->IndexFieldCount; i++)    {
  ListOfIndexFields[i] = samolot->IndexFields[i]->FieldName;

   }


		ShowMessage(ListOfIndexFields[i]);
				}   */
				  // AnsiString lista[20]
			   //ShowMessage(samolotid->DisplayName);
			   //ShowMessage(samolot->IndexFields[0]->Value);
					  // int ile =  ADOQuery1->FieldCount;

							  // ShowMessage(ile);
		//TStringList *IndexList = new TStringList();
	   //	samolot->GetFieldNames(IndexList);
	   //	GetIndexNames(IndexList);
		 //ShowMessage(IndexList->Values);
				  // ShowMessage(IndexList[1]);

			//=ListBox1->Items;
			//->GetIndexNames(ListBox1->Items);


				   //ShowMessage(DBGrid1->FieldCount);


	   if(samolot->Locate("nazwa", Edit1->Text, SearchOptions))        {
			 ShowMessage("ZNALEZIONO!!!");

				 }

			 else   {

			   ShowMessage("NIE MA !!!");


				}
}



//---------------------------------------------------------------------------





void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
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



void __fastcall TForm3::SpeedButton1Click(TObject *Sender)
{
          if(Application->MessageBox(L"Czy na pewno chcesz zamkn¹æ program?",L"PotwierdŸ",
	 MB_YESNO | MB_ICONQUESTION)==IDYES){
	  

				Application->Terminate();
   }

}
//---------------------------------------------------------------------------






