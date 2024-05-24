#include <iostream>
#include "shapes.h"
#include "area.h"

using namespace std;
int main() {
    int choice;
    while (true) {
        cout << "Choose an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                double sideLength;
                cout << "Enter the side length of the square: ";
                cin >> sideLength;
                shapes::Square square(sideLength);
                double area = Area::calculateSquareArea(square);
                cout << "The area of the square is: " << area << endl;
                break;
            }
            case 2: {
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                shapes::Triangle triangle(base, height);
                double area = Area::calculateTriangleArea(triangle);
                cout << "The area of the triangle is: " << area << endl;
                break;
            }
            case 3: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                shapes::Circle circle(radius);
                double area = Area::calculateCircleArea(circle);
                cout << "The area of the circle is: " << area << endl;
                break;
            }
        }
    }

};