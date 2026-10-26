integer = int(input("Введите целое число: "))
decimal = float(input("Введите дробное число: "))
text = input("Введите строку: ")

print(f"Значение: {integer}, Тип: {type(integer).__name__}")
print(f"Значение: {decimal}, Тип: {type(decimal).__name__}")
print(f"Значение: {text}, Тип: {type(text).__name__}")