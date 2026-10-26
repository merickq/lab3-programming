#include <windows.h>

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int totalSeconds;

    cout << "Введите количество секунд: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << setfill('0');
    cout << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;

    std::cin.ignore(256, '\n');

    std::cout << "Нажмите Enter для выхода...";
    std::cin.get();

    return 0;
}
