
# Ввод десятичного числа
number = int(input("Введите число в десятичной системе: "))

# Проверка числа
if number >= 0:
    # Перевод в различные системы счисления
    binary = bin(number)[2:]
    octal = oct(number)[2:]
    hexadecimal = hex(number)[2:].upper()

    # Вывод результатов
    print("Двоичная:", binary)
    print("Восьмеричная:", octal)
    print("Шестнадцатеричная:", hexadecimal)
else:
    print("Введите неотрицательное число!")
