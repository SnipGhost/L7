//---------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
//#include <math.h>
//---------------------------------------------------------------------------
using namespace std;
typedef double TYPE;
//---------------------------------------------------------------------------
#define TERMINAL_COL 80
//---------------------------------------------------------------------------
struct Matrix {
	TYPE **a;
	int n, m;
	Matrix(int str, int kol, bool key);
	~Matrix();
	void print(int prec, bool tp);
};
//---------------------------------------------------------------------------