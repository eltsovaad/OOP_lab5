#include "D2.h"
#include <iostream>
using namespace std;


D2::D2()
{
}


D2::~D2()
{
}

D2::D2(int x, int y, int z, int a) : D1(y,z), B2(a) {
	d_two = x;
	cout << "Конструктор D2" << endl;
}

void D2::show_D2() {
	cout << "D2= " << d_two << endl;
	show_D1();
	show_B2();
	
}