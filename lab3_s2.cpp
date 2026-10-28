
#include <windows.h>

#include <iostream>
#include <limits>
#include <string>
using namespace std;

// Функция перевода числа в другую систему счисления
string convert(unsigned long long number, int base) {
    string digits = "0123456789ABCDEF";
    string result = "";

    // Отдельная обработка нуля
    if (number == 0) {
        return "0";
    }

    // Перевод числа в нужную систему
    while (number > 0) {
        int remainder = number % base;
        result = digits[remainder] + result;
        number = number / base;
    }

    return result;
}

int main() {
    // Настройка кодировки UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    unsigned long long number;

    // Ввод числа
    cout << "Введите число в десятичной: ";
    cin >> number;

    if (cin) {
        // Вывод числа в разных системах счисления
        cout << "Двоичная: " << convert(number, 2) << endl;
        cout << "Восьмеричная: " << convert(number, 8) << endl;
        cout << "Шестнадцатеричная: " << convert(number, 16) << endl;
    } else {
        cout << "Ошибка ввода!" << endl;
        cin.clear();
    }

    // Ожидание нажатия Enter
    cout << "\nНажмите Enter для выхода...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
