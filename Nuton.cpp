﻿#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;
double const epsilon = 0.0001;
double a, b, x0, x1;
double f(double x)
{
	return (0.25 * pow(x, 3) + x - 1.2502);//вычисление значения основной функции
}
double first(double x)
{
	return  (3 * pow(x, 2)) / 4 + 1;//вычесление выражения первой производной от функции
}
double second(double x)
{
	return (3 * x) / 2;//вычесление выражения второй производной от функции
}

int main()
{
	setlocale(LC_ALL, "Russian");

	a = 0;// левый конец отрезка
	b = 2;// правый конец отрезка

	if (f(a) * second(a) > 0)
	{
		x0 = a;
	}
	else
	{
		if (f(b) * second(b) > 0)
		{
			x0 = b;
		}
	}

	x1 = x0 - f(x0) / first(x0);
	cout << x1 << endl;
	int k = 1;//ввод счётчика

	while (abs(x1 - x0) > epsilon)//цикл до заданной точности
	{
		x0 = x1;
		x1 = x0 - f(x0) / first(x0);

		cout << x1 << endl;
		k = k + 1;
	}
	cout << "Корень: " << x1 << endl;
	cout << "Количество шагов: " << k << endl;

	return 0;
}