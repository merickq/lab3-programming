
import unicodedata

# Ввод строки
text = input("Введите строку: ")

# Счётчики символов
letters = 0
digits = 0
spaces = 0
punctuation = 0

# Перебор каждого символа
for char in text:
    if char.isalpha():
        letters += 1
    elif char.isdigit():
        digits += 1
    elif char == " ":
        spaces += 1
    elif unicodedata.category(char).startswith("P"):
        punctuation += 1

# Вывод статистики
print("Количество букв:", letters)
print("Количество цифр:", digits)
print("Количество пробелов:", spaces)
print("Количество знаков препинания:", punctuation)
