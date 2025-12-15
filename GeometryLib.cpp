#include "GeometryLib.h"
#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace Geometry
{
    // Квадрат
    double squareArea(double side) {
        return side * side;
    }

    double squarePerimeter(double side) {
        return 4 * side;
    }

    // Круг
    double circleArea(double radius) {
        return M_PI * radius * radius;
    }

    double circlePerimeter(double radius) {
        return 2 * M_PI * radius;
    }

    // Треугольник
    double triangleArea(double base, double height) {
        return 0.5 * base * height;
    }

    double trianglePerimeter(double side1, double side2, double side3) {
        return side1 + side2 + side3;
    }

    // Функция для перечисления фигур
    void listShapes() {
        std::cout << "Доступные фигуры:\n";
        std::cout << "1. Квадрат\n";
        std::cout << "2. Круг\n";
        std::cout << "3. Треугольник\n";
    }
}