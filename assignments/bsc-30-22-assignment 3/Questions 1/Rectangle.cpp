// Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle() : length(0), width(0) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float l) {
    length = l;
}

float Rectangle::getLength() const {
    return length;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}