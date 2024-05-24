#include "shapes.h"

namespace shapes {
    Square::Square() : sideLength(0) {}

    Square::Square(double sideLength) : sideLength(sideLength) {}

    double Square::getSideLength() const {
        return sideLength;
    }

    void Square::setSideLength(double sideLength) {
        this->sideLength = sideLength;
    }

    Square::~Square() {}
}