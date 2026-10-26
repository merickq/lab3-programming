text = input("Введите строку: ")

print(f"Длина строки: {len(text)}")
print(f"Верхний регистр: {text.upper()}")
print(f"Нижний регистр: {text.lower()}")

if len(text) > 0:
    print(f"Первый символ: {text[0]}")
    print(f"Последний символ: {text[-1]}")
else:
    print("Строка пустая")

print(f"Количество пробелов: {text.count(' ')}")