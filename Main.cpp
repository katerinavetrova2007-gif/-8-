#include <iostream>
#include "../StaticLib1/GeometryLib.h"
#include "../GeometryDll/GeometryDll.h"

int main() {

    setlocale(LC_ALL, "Russian");
    std::cout << "=== Лабораторная работа по геометрическим фигурам ===\n\n";

    // Использование статической библиотеки
    std::cout << "1. Использование статической библиотеки:\n";
    Geometry::listShapes();

    std::cout << "\n2. Вычисления из статической библиотеки:\n";
    std::cout << "Площадь квадрата со стороной 7: " << Geometry::squareArea(7) << std::endl;
    std::cout << "Площадь круга с радиусом 5: " << Geometry::circleArea(5) << std::endl;

    std::cout << "\n3. Использование динамической библиотеки (классы):\n";

    // Использование динамической библиотеки
    Geometry::Square square(10);
    Geometry::Circle circle(7);

    square.display();
    std::cout << "Площадь: " << square.area() << std::endl;
    std::cout << "Периметр: " << square.perimeter() << std::endl;

    std::cout << "\n";
    circle.display();
    std::cout << "Площадь: " << circle.area() << std::endl;
    std::cout << "Периметр: " << circle.perimeter() << std::endl;

    return 0;
}