#include "D3.h"
#include <iostream>
using namespace std;


D3::D3()
{
}


D3::~D3()
{
}

D3::D3(int x, int y, int z, int a, int b) : D2(y, z, a, b) {
	d_three = x;
	cout << "Конструктор D3" << endl;
}

void D3::show_D3() {
	cout << "D3= " << d_three << endl;
	show_D2();
}