#pragma once
class SafeArray
{
	static const int LIMIT = 100;
	int arr[LIMIT];
public:
	void PutEl(int index, int val);
	int GetEl(int index);
};

