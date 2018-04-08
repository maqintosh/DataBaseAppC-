//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TOautorze : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TImage *Image1;
private:	// User declarations
public:		// User declarations
	__fastcall TOautorze(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOautorze *Oautorze;
//---------------------------------------------------------------------------
#endif
