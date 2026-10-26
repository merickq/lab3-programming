#include <windows.h>

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int integer;
    double decimal;
    string text;

    cout << "Введите целое число: ";
    cin >> integer;

    cout << "Введите дробное число: ";
    cin >> decimal;

    cin.ignore();

    cout << "Введите строку: ";
    getline(cin, text);

    cout << "Значение: " << integer << ", Тип: " << typeid(integer).name() << endl;

    cout << "Значение: " << decimal << ", Тип: " << typeid(decimal).name() << endl;

    cout << "Значение: " << text << ", Тип: " << typeid(text).name() << endl;

    std::cin.get();

    return 0;
}
