//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *SGA;
	TStringGrid *SGB;
	TStringGrid *SGC;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *filA;
	TEdit *colA;
	TButton *btn_dimencionarA;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *filB;
	TEdit *colB;
	TButton *btn_dimencinarB;
	TMainMenu *MainMenu1;
	TMenuItem *funciones1;
	TMenuItem *funciones2;
	TMenuItem *A1;
	TMenuItem *A2;
	TMenuItem *multiplicar1;
	TMenuItem *AB1;
	TMenuItem *procedimientos1;
	TMenuItem *procedimientos2;
	TMenuItem *A3;
	TMenuItem *A4;
	TMenuItem *C1;
	TMenuItem *Identidad1;
	TMenuItem *Identidad2;
	TMenuItem *A5;
	TMenuItem *A6;
	TEdit *n;
	TMenuItem *A7;
	TMenuItem *A8;
	TMenuItem *esSimetrica1;
	TMenuItem *A9;
	void __fastcall btn_dimencionarAClick(TObject *Sender);
	void __fastcall btn_dimencinarBClick(TObject *Sender);
	void __fastcall A1Click(TObject *Sender);
	void __fastcall AB1Click(TObject *Sender);
	void __fastcall A3Click(TObject *Sender);
	void __fastcall A5Click(TObject *Sender);
	void __fastcall A7Click(TObject *Sender);
	void __fastcall A9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
