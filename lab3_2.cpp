
#include <windows.h>

#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double a, b;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;

    if (!cin) {
        cout << "Ошибка ввода чисел!" << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    cout << "Сумма: " << a + b << endl;
    cout << "Разность: " << a - b << endl;
    cout << "Произведение: " << a * b << endl;

    if (b != 0) {
        cout << "Деление: " << a / b << endl;
        cout << "Целочисленное деление: " << floor(a / b) << endl;
        cout << "Остаток: " << fmod(a, b) << endl;
    } else {
        cout << "Деление на ноль невозможно" << endl;
    }

    cout << "Степень: " << pow(a, b) << endl;

    // Очищаем буфер ввода
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Ожидаем нажатия Enter
    cout << "\nНажмите Enter для выхода...";
    cin.get();

    return 0;
}
