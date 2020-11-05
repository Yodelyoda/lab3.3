// Lab_03_3.cpp
// < Новосільського Сергія >
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // результат обчислення виразу
	double R1;
	double R2;
	R1 = 1;
	R2 = 2;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -R1)
		y = (R1+pow(R1,2))/(R1+2);
	else
		if (-R1 < x && x <= 0)
			y = R1-sqrt(pow(R1,2)-pow(x,2));
		else
			if (0 < x && x <= R2)
				y = R2 + sqrt(pow(R2, 2) - pow(x, 2));
			else
				if (R2 < x && x <= 4)
					y = -R1;
				else
					y = -(R1*x) / 4;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}