while True:
    a = int(input())
    if a <= 0:
        print("Ошибка ввода")
    elif a <= 2:
        b = a * 10.5
        b = int(b)
        print(b)
    elif a > 2:
        b = 21 + a * 4
        print(b)
