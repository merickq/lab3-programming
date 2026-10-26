a = float(input("Введите первое число: "))
b = float(input("Введите второе число: "))
c = float(input("Введите третье число: "))

average = (a + b + c) / 3
minimum = min(a, b, c)
maximum = max(a, b, c)

print(f"Среднее арифметическое: {average:.2f}")
print(f"Минимум: {minimum}")
print(f"Максимум: {maximum}")