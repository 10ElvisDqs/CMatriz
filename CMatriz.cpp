//---------------------------------------------------------------------------

#pragma hdrstop

#include "CMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

CMatriz::CMatriz(){
	fil=0;
	col=0;
}

int  CMatriz::GetFil(){
	return fil;
}
void CMatriz::SetFil(int _fil){

	if (_fil>=0 && _fil <= maxfil) {
		fil=_fil;
	}else{
		ShowMessage("solo se puede trabajar con 100 filas");
	}

}
int  CMatriz::GetCol(){
	return col;
}
void CMatriz::SetCol(int _col){

	if (_col>=0 && _col<= maxcol) {
	   col=_col;
	}else{
		ShowMessage("solo se puede trabajar con 100 columnas");
	}
}

int  CMatriz::GetElem(int _fil,int _col){
	if ( _fil < fil && _col< col) {
		return m[_fil][_col];
	}else{
		ShowMessage("Get ElemPocision de la fila o columna erronea");
		return 0;
	}

}
void CMatriz::SetElem(int _fil,int _col,int valor){
	if (_fil < fil && _col< col) {
		m[_fil][_col] = valor;
	}else{
		ShowMessage("Set ElemPocision de la fila o columna erronea");
	}
}

int CMatriz::SumarDiagonalPrincipal(){
	if (fil == col) {
		int suma=0;
		for (int i=0; i < fil; i++) {
			suma=suma+m[i][i];
		}
		return suma;
	}else{
		ShowMessage("No es un Matriz Cuadrada");
		return 0;
	}
}

CMatriz* CMatriz::Multiplicar(CMatriz *A,CMatriz *B){

	if (A->GetCol() != B->GetFil()) {
		ShowMessage("Las matrices no son complatibles para la multiplicacion");
		return 0;
	}

	CMatriz *resultado = new CMatriz();

	resultado->SetFil( A->GetFil() );
	resultado->SetCol( B->GetCol() );

	for (int i = 0; i < A->GetFil(); i++) {

		for (int j = 0; j < B->GetCol(); j++) {

			int sum = 0;
			for (int k = 0; k < A->GetCol(); k++) {
				sum += A->GetElem(i, k) * B->GetElem(k, j);
			}

			resultado->SetElem(i, j, sum);
		}
	}

	return resultado;

}

void CMatriz::Transpuesta(){

	int temp[maxcol][maxfil]; // Matriz temporal para almacenar la transposición

	for (int i = 0; i < fil; ++i) {
		for (int j = 0; j < col; ++j) {
			temp[j][i] = m[i][j];
		}
	}

	// Intercambiar dimensiones
	int oldFil = fil;
	fil = col;
	col = oldFil;

	// Copiar los valores transpuestos de vuelta a la matriz original
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			m[i][j] = temp[i][j];
		}
	}
}

void CMatriz::Identidad(int n){
	fil=n;
	col=n;
	for (int i = 0; i < fil; i++) {
		 for (int j= 0; j < col; j++) {
			  if (i==j) {
				  m[i][j]=1;
			  }else{
				  m[i][j]=0;
			  }
		 }
	}
}

void CMatriz::SumarFilCol( int _fil,int _col){
	int sumFil=0;
	int sumCol=0;

	for (int i = 0; i < fil; i++) {

		sumFil = sumFil + m[_fil-1][i];
		sumCol = sumCol + m[i][_col-1];

	}

	ShowMessage("La suma de la fila es: "+ IntToStr(sumFil) );
	ShowMessage("La suma de la columna es: "+ IntToStr(sumCol) );
}

bool CMatriz::esSimetrica() {
	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < i; j++) {
			if (m[i][j] != m[j][i]) {
				return false;
			}
		}
	}
	return true;
}

