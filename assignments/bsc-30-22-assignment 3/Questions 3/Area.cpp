#include "area.h"
#include "shapes.h"
#include <cmath>

double Area::calculateSquareArea(const shapes::Square& square) {
    return square.getSideLength() * square.getSideLength();
}

double Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::calculateCircleArea(const shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}