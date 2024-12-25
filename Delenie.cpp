#include <iostream>
#include <clocale>
#include <cmath> 

using namespace std;

double a, b, x;

const double epsilon = 0.0001; // точность

double f(double x)
{
    return 0.25 * pow(x, 3) + x - 1.2502;//вычисление значения основной функции
}

int main()
{
    setlocale(LC_ALL, "Russian");

    a = 0; // левый конец отрезка
    b = 2; // правый конец отрезка

    int k = 0; // шаги

    while (abs(b - a) > epsilon)
    {
        x = (a + b) / 2;

        cout << x << endl; // вывод корня

        if (f(a) * f(x) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }

        k = k + 1;//счётчик
    }

    cout << "Корень: " << (a + b) / 2 << endl;
    cout << "Количество шагов: " << k + 1 << endl;

    return 0;
}