
#include <windows.h>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Настройка кодировки UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string text;

    // Счётчики символов
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int punctuation = 0;

    // Ввод строки
    cout << "Введите строку: ";
    getline(cin, text);

    // Определение количества Unicode-символов
    int length = MultiByteToWideChar(CP_UTF8, 0, text.c_str(), -1, nullptr, 0);

    if (length > 0) {
        // Преобразование строки UTF-8 в Unicode
        wstring wideText(length, L'\0');

        MultiByteToWideChar(CP_UTF8, 0, text.c_str(), -1, &wideText[0], length);

        // Определение типов символов
        vector<WORD> types(length);

        GetStringTypeW(CT_CTYPE1, wideText.c_str(), length, types.data());

        // Перебор всех символов строки
        for (int i = 0; i < length - 1; i++) {
            if (wideText[i] == L' ') {
                spaces++;
            } else if (types[i] & C1_ALPHA) {
                letters++;
            } else if (types[i] & C1_DIGIT) {
                digits++;
            } else if (types[i] & C1_PUNCT) {
                punctuation++;
            }
        }

        // Вывод статистики
        cout << "\nКоличество букв: " << letters << endl;
        cout << "Количество цифр: " << digits << endl;
        cout << "Количество пробелов: " << spaces << endl;
        cout << "Количество знаков препинания: " << punctuation << endl;
    } else {
        cout << "Ошибка обработки строки!" << endl;
    }

    // Ожидание нажатия Enter
    cout << "\nНажмите Enter для выхода...";
    cin.get();

    return 0;
}
