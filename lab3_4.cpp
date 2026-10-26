#include <windows.h>

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    cout << "Длина строки: " << text.length() << endl;

    string upper = text;
    string lower = text;

    transform(upper.begin(), upper.end(), upper.begin(),
              [](unsigned char c) { return toupper(c); });

    transform(lower.begin(), lower.end(), lower.begin(),
              [](unsigned char c) { return tolower(c); });

    cout << "Верхний регистр: " << upper << endl;
    cout << "Нижний регистр: " << lower << endl;

    if (!text.empty()) {
        cout << "Первый символ: " << text[0] << endl;
        cout << "Последний символ: " << text[text.length() - 1] << endl;
    } else {
        cout << "Строка пустая" << endl;
    }

    int spaces = count(text.begin(), text.end(), ' ');

    cout << "Количество пробелов: " << spaces << endl;

    std::cin.ignore(256, '\n');

    std::cout << "Нажмите Enter для выхода...";
    std::cin.get();

    return 0;
}
