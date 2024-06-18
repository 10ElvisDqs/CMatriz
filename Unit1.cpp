//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "CMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CMatriz *A, *B,*C;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	A=new CMatriz();
	B=new CMatriz();
	C=new CMatriz();

}

//---------------------------------------------------------------------------
void Formulario_A_Matriz(TStringGrid *sg,CMatriz *m){
	int col=StrToInt(sg->ColCount);
	int fil=StrToInt(sg->RowCount);
	m->SetCol(col);
	m->SetFil(fil);
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			int valor=StrToInt( sg->Cells[j][i] );
			m->SetElem(i,j,valor);
		}
	}

}

void Matriz_A_Formulario(CMatriz *m, TStringGrid *sg){
	sg->ColCount = m->GetCol();
	sg->RowCount = m->GetFil();

	for (int i = 0; i < m->GetFil(); i++) {
		for (int j = 0; j < m->GetCol(); j++) {
			sg->Cells[j][i] = m->GetElem(i,j);

		}
	}

}


//---------------------------------------------------------------------------
void __fastcall TForm1::btn_dimencionarAClick(TObject *Sender)
{
   SGA->RowCount = StrToInt(filA->Text) ;
   SGA->ColCount = StrToInt(colA->Text) ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_dimencinarBClick(TObject *Sender)
{
   SGB->RowCount = StrToInt(filB->Text);
   SGB->ColCount = StrToInt(colB->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::A1Click(TObject *Sender)
{
	Formulario_A_Matriz(SGA, A);
	int suma = A->SumarDiagonalPrincipal();
	ShowMessage("La Suma total es: "+ IntToStr(suma));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AB1Click(TObject *Sender)
{
	Formulario_A_Matriz(SGA, A);
	Formulario_A_Matriz(SGB, B);
	C = A->Multiplicar(A, B);
	Matriz_A_Formulario( C , SGC);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::A3Click(TObject *Sender)
{
	Formulario_A_Matriz(SGA, A);
	A->Transpuesta();
	Matriz_A_Formulario( A , SGA);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::A5Click(TObject *Sender)
{
	Formulario_A_Matriz(SGA, A);
	A->Identidad(StrToInt(n->Text));
	Matriz_A_Formulario( A , SGA);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::A7Click(TObject *Sender)
{
	Formulario_A_Matriz(SGA, A);
	A->SumarFilCol( StrToInt(filA->Text), StrToInt(colA->Text) );

}
//---------------------------------------------------------------------------
void __fastcall TForm1::A9Click(TObject *Sender)
{
	Formulario_A_Matriz(SGA, A);
	A->esSimetrica() ? ShowMessage("Es Simetrica") : ShowMessage("No Es Simetrica");
}
//---------------------------------------------------------------------------
