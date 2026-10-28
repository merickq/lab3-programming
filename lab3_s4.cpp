
#include <windows.h>

#include <ctime>
#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Настройка кодировки UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int day, month, year;

    // Ввод даты рождения
    cout << "Введите день рождения: ";
    cin >> day;

    cout << "Введите месяц рождения: ";
    cin >> month;

    cout << "Введите год рождения: ";
    cin >> year;

    // Получение текущей даты
    time_t now = time(nullptr);
    tm today;
    localtime_s(&today, &now);

    int currentDay = today.tm_mday;
    int currentMonth = today.tm_mon + 1;
    int currentYear = today.tm_year + 1900;

    // Определение количества дней в месяце
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Проверка корректности даты
    bool valid = year >= 1 && month >= 1 && month <= 12;

    if (valid) {
        // Проверка високосного года
        bool leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

        if (leap && month == 2) {
            daysInMonth[2] = 29;
        }

        if (day < 1 || day > daysInMonth[month]) {
            valid = false;
        }
    }

    // Проверка, что дата не в будущем
    if (valid && (year > currentYear || (year == currentYear && month > currentMonth) ||
                  (year == currentYear && month == currentMonth && day > currentDay))) {
        valid = false;
    }

    if (valid) {
        // Вычисление возраста
        int age = currentYear - year;

        // Если день рождения ещё не наступил
        if (currentMonth < month || (currentMonth == month && currentDay < day)) {
            age--;
        }

        // Вывод результата
        cout << "\nВаш возраст: " << age << endl;
    } else {
        cout << "\nНекорректная дата рождения!" << endl;
    }

    // Ожидание нажатия Enter
    cout << "\nНажмите Enter для выхода...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
