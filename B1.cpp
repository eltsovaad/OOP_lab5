#include "B1.h"
#include <iostream>
using namespace std;

B1::B1()
{
}


B1::~B1()
{
}

B1::B1(int x)
{
	b_one = x;
	cout << "Конструктор В1" << endl;
}

void B1::show_B1() {
	cout << "B1= " << b_one << endl;
}