// main.cpp
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rect1;
    float length, width;

    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    rect1.setLength(length);

    cout << "Enter the width of the first rectangle: ";
    cin >> width;
    rect1.setWidth(width);

    cout << "Enter the length of the second rectangle: ";
    cin >> length;

    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    Rectangle rect2(length, width); // create a new rectangle instance using the overloaded constructor

    cout << "The area of the first rectangle is: " << rect1.calculateArea() << endl;
    cout << "The area of the second rectangle is: " << rect2.calculateArea() << endl;

    return 0;
}