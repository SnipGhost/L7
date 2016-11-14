//---------------------------------------------------------------------------
#include "matrix.h"
//---------------------------------------------------------------------------
Matrix::Matrix(int str, int kol, bool key): n(str), m(kol)
{
	int x = 1, c = 0;
	a = new TYPE *[n];
	for (int i = 0; i < n; ++i) 
	{
		a[i] = new TYPE [m];
		int fact = 1;
		for (int j = 0; j < m; ++j) 
		{
			fact *= (j+1);
			c++;
			if (key) a[i][j] = c;
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
	int dop = 0, k, l;
	cout << setprecision(prec);
	if (tp) {
		cout << fixed << right;
		dop = 5;
	} else {
		cout << scientific << right;
		dop = 9;
	}
	for (int i = 0; i < TERMINAL_COL; ++i) cout << "-";
	for (k = 0; k < m; ++k) 
		if (TERMINAL_COL > (m-k)*(prec+dop)) break;
	int width = (TERMINAL_COL-1) / (m-k);
	k = m-k;
	l = 0;
	while (l < m)
	{
		int s = (l+k >= m) ? m : l+k;
		for (int j = l; j < s; ++j) cout << setw(width) << j;
		cout << endl;
		for (int i = 0; i < n; ++i)
		{
			for (int j = l; j < s; ++j)
			{
				cout << setw(width) << a[i][j];
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < TERMINAL_COL; ++i) cout << "-";
		l += k; 
	}
}
//---------------------------------------------------------------------------