def printset(name, s):
    print(f"{name} (элементов: {len(s)}): {sorted(s)}")

def tochki(x1, y1, x2, y2):
    tochki_set = set()
    for x in range(x1, x2 + 1):
        for y in range(y1, y2 + 1):
            tochki_set.add((x, y))
    return tochki_set

def input_rect(num):
    while True:
        try:
            print(f"\nВведите координаты прямоугольника {num} (x1 y1 x2 y2):")
            coords = input().split()

            if len(coords) != 4:
                print("Ошибка: нужно 4 числа")
                continue

            x1 = int(coords[0])
            y1 = int(coords[1])
            x2 = int(coords[2])
            y2 = int(coords[3])

            if not (1 <= x1 <= 10 and 1 <= y1 <= 10 and
                    1 <= x2 <= 10 and 1 <= y2 <= 10):
                print("Ошибка: координаты должны быть от 1 до 10")
                continue

            if x1 > x2 or y1 > y2:
                print("Ошибка: x1 должен быть <= x2, y1 должен быть <= y2")
                continue
            return x1, y1, x2, y2

        except ValueError:
            print("Ошибка: введите целые числа")

def main():
    print("Проверка пересечения прямоугольников")

    x1, y1, x2, y2 = input_rect(1)
    x3, y3, x4, y4 = input_rect(2)

    A = tochki(x1, y1, x2, y2)
    B = tochki(x3, y3, x4, y4)

    printset("Множество A", A)
    printset("Множество B", B)

    intersection = A.intersection(B)

    if intersection:
        print("Прямоугольники ПЕРЕСЕКАЮТСЯ")
        printset("Общие точки", intersection)
    else:
        print("Прямоугольники НЕ пересекаются")
main()