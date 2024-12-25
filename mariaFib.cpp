#include <iostream>
#include <clocale>

using namespace std;
int n, i, c;
int a = 0;
int b = 1;

int main() {
    setlocale(LC_ALL, "RUS");
    cout << "Введите значение n, 2 и более";// Ввод количества чисел последовательности
    cin >> n;
    n = n - 2;
    cout << "Последовательность Фибоначчи:" << endl;
    cout << a << endl;// Первый член последовательности Фибоначчи
    cout << b << endl;// Второй член последовательности Фибоначчи
    for (i = 0; i < n; i++)
    {
        c = a + b;
        cout << c << "" << endl;// Вывод остальных членов последовательности Фибоначчи
        a = b;
        b = c;
    }
    return 0;
}