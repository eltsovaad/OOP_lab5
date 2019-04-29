#include "B2.h"
#include <iostream>
using namespace std;


B2::B2()
{
}


B2::~B2()
{
}

B2::B2(int x)
{
	b_two = x;
	cout << "Конструктор В2" << endl;
}

void B2::show_B2() {
	cout << "B2= " << b_two << endl;
}