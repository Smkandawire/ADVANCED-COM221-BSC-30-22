#ifndef AREA_H
#define AREA_H

class Area {
public:
    static double calculateSquareArea(const shapes::Square& square);
    static double calculateTriangleArea(const shapes::Triangle& triangle);
    static double calculateCircleArea(const shapes::Circle& circle);
};

#endif 