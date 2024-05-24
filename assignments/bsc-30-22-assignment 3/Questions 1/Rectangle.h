// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // default constructor
    ~Rectangle(); // destructor

    void setLength(float l);
    float getLength() const;

    void setWidth(float w);
    float getWidth() const;

    float calculateArea() const;
};

#endif 