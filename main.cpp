//---------------------------------------------------------------------------
#include "matrix.h"
//---------------------------------------------------------------------------
int main()
{
	int n, m, p;
	bool t;
	cout << "Input N, M: ";
	cin >> n >> m;
	Matrix mat(n, m, 0);
	cout << "Input precision, type: ";
	cin >> p >> t;
	mat.print(p, t);
	cout << endl;
	return 0;
}
//---------------------------------------------------------------------------