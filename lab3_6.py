print("Конвертер температур")
print("1. Из °C в °F")
print("2. Из °F в °C")

choice = input("Ваш выбор (1 или 2): ")

if choice == "1":
    celsius = float(input("Введите температуру в °C: "))
    fahrenheit = celsius * 9 / 5 + 32

    print(f"Результат: {fahrenheit:.1f} °F")

elif choice == "2":
    fahrenheit = float(input("Введите температуру в °F: "))
    celsius = (fahrenheit - 32) * 5 / 9

    print(f"Результат: {celsius:.1f} °C")

else:
    print("Некорректный выбор")