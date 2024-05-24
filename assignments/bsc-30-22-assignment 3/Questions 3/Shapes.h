#ifndef SHAPES_H
#define SHAPES_H

namespace shapes {
    class Square {
    private:
        double sideLength;
    public:
        Square();
        Square(double sideLength);
        double getSideLength() const;
        void setSideLength(double sideLength);
        ~Square();
    };

    class Triangle {
    private:
        double base;
        double height;
    public:
        Triangle();
        Triangle(double base, double height);
        double getBase() const;
        void setBase(double base);
        double getHeight() const;
        void setHeight(double height);
        ~Triangle();
    };

    class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double radius);
        double getRadius() const;
        void setRadius(double radius);
        ~Circle();
    };
}

#endif  