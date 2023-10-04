// Lab_03_4.cpp
// Кругліцький Мстислав
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 14

#include <iostream>

using namespace std;

int main()
{
	double x;
	double y;
	double R1;
	double R2;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	if (x > 0 && y > 0 && (x * x + y * y <=R1 * R1) && (x * x + y * y >=R2 * R2))
		cout << "upper right 1/4 circle" << endl;
	else if (x < 0 && y < 0 && (x * x + y * y <= R1 * R1) && (x * x + y * y >= R2 * R2))
		cout << "lower left 1/4 circle" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}