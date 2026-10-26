#include <windows.h>

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;
    double temperature, result;

    cout << "Конвертер температур" << endl;
    cout << "1. Из C в F" << endl;
    cout << "2. Из F в C" << endl;

    cout << "Ваш выбор (1 или 2): ";
    cin >> choice;

    cout << fixed << setprecision(1);

    if (choice == 1) {
        cout << "Введите температуру в C: ";
        cin >> temperature;

        result = temperature * 9 / 5 + 32;

        cout << "Результат: " << result << " F" << endl;
    } else if (choice == 2) {
        cout << "Введите температуру в F: ";
        cin >> temperature;

        result = (temperature - 32) * 5 / 9;

        cout << "Результат: " << result << " C" << endl;
    } else {
        cout << "Некорректный выбор" << endl;
    }
    std::cin.ignore(256, '\n');

    std::cout << "Нажмите Enter для выхода...";
    std::cin.get();

    return 0;
}
