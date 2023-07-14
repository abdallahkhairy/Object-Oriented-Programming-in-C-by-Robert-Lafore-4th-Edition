#include "Matrix.h"
#include <iostream>
using namespace std;


Matrix::Matrix(int r, int c) :rows(r), columns(c)
{

}

void Matrix::PutEl(int r_index, int c_index, int val)
{
	if(r_index >= 0 && r_index < rows && c_index >= 0 && r_index < columns)
		arr[r_index][c_index] = val;
	else
		cout << " Index is out of Boundries " << endl;
}

int Matrix::GetEl(int r_index, int c_index)
{
	if (r_index >= 0 && r_index < rows && c_index >= 0 && r_index < columns)
		return arr[r_index][c_index] ;
	else
		cout << " Index is out of Boundries " << endl;
	return -1;
}
