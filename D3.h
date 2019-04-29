#pragma once
#include "D2.h"
class D3 :
	public D2
{
private:
	int d_three;
public:
	D3();
	~D3();
	D3(int x, int y, int z, int a, int b);
	void show_D3();
};

