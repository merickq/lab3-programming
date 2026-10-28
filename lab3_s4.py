
from datetime import date

# Ввод даты рождения
day = int(input("Введите день рождения: "))
month = int(input("Введите месяц рождения: "))
year = int(input("Введите год рождения: "))

try:
    # Создание даты рождения
    birthday = date(year, month, day)

    # Получение текущей даты
    today = date.today()

    # Проверка даты рождения
    if birthday > today:
        print("Дата рождения не может быть в будущем!")
    else:
        # Вычисление возраста
        age = today.year - birthday.year

        # Проверка, наступил ли день рождения
        if (today.month, today.day) < (month, day):
            age -= 1

        # Вывод результата
        print("Ваш возраст:", age)

except ValueError:
    print("Некорректная дата рождения!")
