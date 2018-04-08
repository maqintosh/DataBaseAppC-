//---------------------------------------------------------------------------

#ifndef BD_v1H
#define BD_v1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include "frxChart.hpp"
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
	TComboBox *ComboBox1;
	TButton *Button4;
	TDataSource *danerodzaj;
	TMemo *Memo1;
	TPanel *Panel1;
	TButton *Button5;
	TButton *Button1;
	TButton *Button6;
	TADODataSet *ADODataSet1;
	TADOCommand *ADOCommand1;
	TDataSource *danesamolot;
	TEdit *Edit1;
	TADOQuery *ADOQuery1;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton1;
	TADOTable *samolot;
	TADOTable *fk_rodzaj;
	TAutoIncField *samolotid;
	TWideStringField *samolotnazwa;
	TIntegerField *samolotliczbaplatow;
	TWideStringField *samolotukladszkrzydel;
	TIntegerField *samolotfk_wprodukcji;
	TIntegerField *samolotfk_rodzaj;
	TIntegerField *samolotfk_kraj;
	TWideStringField *samolotrodzaj;
	TADOTable *fk_kraj;
	TADOTable *fk_wprodukcji;
	TStringField *samolotCzywprodukcji;
	TStringField *samolotKraj;
	TfrxChartObject *frxChartObject1;
	TDBGrid *DBGrid2;
	TADOTable *wyswietlanie;
	TDataSource *wyswietlaniedata;
	TDataSource *komendy;
	TDataSource *wyswietlanietabela;
	TSpeedButton *SpeedButton5;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall SpeedButtonClick(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
