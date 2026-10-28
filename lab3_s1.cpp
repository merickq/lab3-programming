#include <windows.h>

#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Настройка кодировки UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double weight, height;

    // Ввод веса
    cout << "Введите вес (кг): ";
    cin >> weight;

    // Ввод роста
    cout << "Введите рост (м): ";
    cin >> height;

    // Проверка введённых значений
    if (weight > 0 && height > 0) {
        // Вычисление индекса массы тела
        double bmi = weight / (height * height);

        // Вывод результата с одним знаком после запятой
        cout << fixed << setprecision(1);
        cout << "Ваш ИМТ: " << bmi << endl;
    } else {
        cout << "Вес и рост должны быть больше нуля!" << endl;
    }

    // Ожидание нажатия Enter
    cout << "\nНажмите Enter для выхода...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
