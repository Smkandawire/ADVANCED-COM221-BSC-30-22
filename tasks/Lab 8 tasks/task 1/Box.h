#ifndef BOX_H
#define BOX_H

#include <iostream>

class Box {
public:
    Box();
    Box(double length, double breadth, double height);
    ~Box();
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);
    // Overload + operator to add two Box objects
    Box operator+(const Box& b) const;

private:
    double length; // Length of a box
    double breadth; // Breadth of a box
    double height; // Height of a box
};

Box::Box() : length(0), breadth(0), height(0) {}

Box::Box(double length, double breadth, double height) : length(length), breadth(breadth), height(height) {}

Box::~Box() {}

double Box::GetVolume() {
    return length * breadth * height;
}

void Box::SetLength(double len) {
    length = len;
}

void Box::SetBreadth(double bre) {
    breadth = bre;
}

void Box::SetHeight(double hei) {
    height = hei;
}

Box Box::operator+(const Box& b) const {
    double newLength = length + b.length;
    double newBreadth = breadth + b.breadth;
    double newHeight = height + b.height;

    return Box(newLength, newBreadth, newHeight);
}

#endif // BOX_H