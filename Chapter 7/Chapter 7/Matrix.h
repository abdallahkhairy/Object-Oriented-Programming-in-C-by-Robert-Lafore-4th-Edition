#pragma once
class Matrix
{
	static const int R_LIMIT = 10,C_LIMIT=10;
	int arr[R_LIMIT][C_LIMIT];
	int rows = 0, columns = 0;
public:
	Matrix(int r, int c);
	void PutEl(int r_index, int c_index, int val);
	int GetEl(int r_index, int c_index);


};

