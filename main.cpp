#include"B1.h"
#include"B2.h"
#include"D1.h"
#include"D2.h"
#include"D3.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	D3 temp(1, 2, 3, 4, 5);
	cout << "D3 temp(1, 2, 3, 4, 5)" << endl;
	temp.show_D3();
	system("pause");
	return 0;
}