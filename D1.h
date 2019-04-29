#pragma once
#include "B1.h"
class D1 :
	public B1
{
private:
	int d_one;
public:
	D1();
	~D1();
	D1(int x, int y);
	void show_D1();
};
