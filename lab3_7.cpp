#include <windows.h>

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a, b;

    cout << "Введите первую сторону: ";
    cin >> a;

    cout << "Введите вторую сторону: ";
    cin >> b;

    if (a > 0 && b > 0) {
        double area = a * b;
        double perimeter = 2 * (a + b);

        cout << fixed << setprecision(2);

        cout << "Площадь прямоугольника: " << area << endl;
        cout << "Периметр прямоугольника: " << perimeter << endl;
    } else {
        cout << "Стороны должны быть больше нуля" << endl;
    }
    std::cin.ignore(256, '\n');

    std::cout << "Нажмите Enter для выхода...";
    std::cin.get();

    return 0;
}
