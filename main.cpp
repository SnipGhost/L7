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

	/*
	TYPE B[10][10];
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			B[i][j] = (i+1)*10+(j+1);

	Matrix mb(10, 10, 1);
	for (int i = 0; i < 10; ++i) mb.a[i] = B[i];
	mb.print(p, t);
	*/
	/*
	cout << mb.a << " " << mb.a[0] << " " << mb.a[2] << endl;
	cout << mb.a[0][0] << " " << **mb.a << " " << *mb.a[0] << endl;
	cout << *(*(mb.a+1)) << "  " << *mb.a[1] << endl;
	cout << *(mb.a[0]+1) << "  " << *(*mb.a+1) << endl;
	cout << mb.a[0][20] << "  " << *(mb.a[0]+20) << "  " << *mb.a[2] << endl;
	*/
	/*
	double B[10][10] = {0};
	Matrix B1
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			B[i][j] = (i+1)*10+(j+1);
			*/

	cout << endl;
	return 0;
}
//---------------------------------------------------------------------------