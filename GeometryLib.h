#pragma once

namespace Geometry
{
    // Квадрат
    double squareArea(double side);
    double squarePerimeter(double side);

    // Круг
    double circleArea(double radius);
    double circlePerimeter(double radius);

    // Треугольник
    double triangleArea(double base, double height);
    double trianglePerimeter(double side1, double side2, double side3);

    // Функция для перечисления фигур
    void listShapes();
}
