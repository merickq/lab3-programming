#include <windows.h>

#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a, b, c;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;

    cout << "Введите третье число: ";
    cin >> c;

    double average = (a + b + c) / 3;
    double minimum = min(a, min(b, c));
    double maximum = max(a, max(b, c));

    cout << fixed << setprecision(2);

    cout << "Среднее арифметическое: " << average << endl;
    cout << "Минимум: " << minimum << endl;
    cout << "Максимум: " << maximum << endl;

    std::cin.ignore(256, '\n');

    std::cout << "Нажмите Enter для выхода...";
    std::cin.get();

    return 0;
}
