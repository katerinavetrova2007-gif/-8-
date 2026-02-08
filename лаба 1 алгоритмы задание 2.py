def printset(name, s):
    print(f"{name} {sorted(s)},"
          f"всего элементов: {len(s)}:")
def f():
    while True:
        print("Введите строку:")
        s = input().strip()

        if s:
            break
        print("Ошибка: строка не может быть пустой")
    char = set('56789+-*/')
    result = set()

    for simv in s:
        if simv in char:
            result.add(simv)
    if result:
        printset("Множество подходящих символов:", result)
    else:
        print("Множество подходящих символов (элементов: 0): (нет подходящих символов)")
f()
