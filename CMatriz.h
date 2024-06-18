//---------------------------------------------------------------------------

#ifndef CMatrizH
#define CMatrizH
//---------------------------------------------------------------------------
const int maxfil=100;
const int maxcol=100;
class CMatriz{
  private:
	int fil;
	int col;
	int m[maxfil][maxcol];

  public:
	CMatriz();
	int  GetFil();
	void SetFil(int _fil);
	int  GetCol();
	void SetCol(int _col);
	int  GetElem(int _fil,int _col);
	void SetElem(int _fil,int _col,int valor);
	int SumarDiagonalPrincipal();
	CMatriz* Multiplicar(CMatriz *A,CMatriz *B);
	void Transpuesta();
	void Identidad(int n);
	void SumarFilCol( int _fil,int _col);
	bool esSimetrica();
};

#endif
