//---------------------------------------------------------------------------
#include "matrix.h"
//---------------------------------------------------------------------------
Matrix::Matrix(int str, int kol, bool key): n(str), m(kol)
{
	long x = 1;
	a = new TYPE *[n];
	for (int i = 0; i < n; ++i) 
	{
		a[i] = new TYPE [m];
		long fact = 1;
		for (int j = 0; j < m; ++j) 
		{
			fact *= (j+1);
			if (key) cin >> a[i][j];
			else 
			{
				if (i == j) a[i][j] = 1;
				else if (j > i) a[i][j] = pow( x, i+1) / pow(fact, i+1);
				else            a[i][j] = pow(-x, i+1) / pow(fact, i+1);
			}
		}
	}
	cout << "Initialize the matrix\n";
}
//---------------------------------------------------------------------------
Matrix::~Matrix()
{
	for (int i = 0; i < n; ++i)
		delete [] a[i];
	delete [] a;
	a = NULL;
	cout << "Destruct the matrix\n";
}
//---------------------------------------------------------------------------
void Matrix::print(int prec, bool tp)
{
	int dop = 0, k;
	cout << setprecision(prec);
	if (tp) {
		cout << fixed << right;
		dop = 5;
	} else {
		cout << scientific << right;
		dop = 8;
	}
	for (int i = 0; i < TERMINAL_COL; ++i) cout << "-";
	for (k = 0; k < m; ++k) 
		if (TERMINAL_COL-(m-k) >= (m-k)*(prec+dop)) break;
	int width = TERMINAL_COL / (m-k);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (m-j == k) cout << endl;
			cout << setw(width-1) << a[i][j];
		}
		cout << endl;
		if (k > 0) cout << endl;
	}
	for (int i = 0; i < TERMINAL_COL; ++i) cout << "-";
}
//---------------------------------------------------------------------------
