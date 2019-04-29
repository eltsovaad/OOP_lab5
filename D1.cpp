#include "D1.h"
#include <iostream>
using namespace std;


D1::D1()
{
}


D1::~D1()
{
}

D1::D1(int x, int y):B1(y) {
	d_one = x;
	cout << "Конструктор D1" << endl;
}

void D1::show_D1() {
	cout << "D1= " << d_one << endl;
	show_B1();
}