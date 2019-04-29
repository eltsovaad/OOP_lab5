#pragma once
#include "B2.h"
#include "D1.h"
class D2 : private B2, private D1
{
private:
		int d_two;
public:
	D2();
	~D2();
	D2(int x, int y, int z, int a);
	void show_D2();
};
