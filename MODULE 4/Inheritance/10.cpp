#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;
double calculateArea(double radius) {
    return PI * radius * radius;
}
double calculateArea(double length, double breadth) {
    return length * breadth;
}
double calculateArea(double base, double height, char shape) {
    if (shape == 't' || shape == 'T')
        return 0.5 * base * height;
    else {
        std::cerr << "Invalid shape specified!" << std::endl;
        return 0.0;
    }
}

int main() {
    double radius, length, breadth, base, height;
    char shape;

    std::cout << "Enter the shape (c for circle, r for rectangle, t for triangle): ";
    std::cin >> shape;

    if (shape == 'c' || shape == 'C') {
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        std::cout << "Area of the circle: " << calculateArea(radius) << std::endl;
    } else if (shape == 'r' || shape == 'R') {
        std::cout << "Enter the length and breadth of the rectangle: ";
        std::cin >> length >> breadth;
        std::cout << "Area of the rectangle: " << calculateArea(length, breadth) << std::endl;
    } else if (shape == 't' || shape == 'T') {
        std::cout << "Enter the base and height of the triangle: ";
        std::cin >> base >> height;
        std::cout << "Area of the triangle: " << calculateArea(base, height, shape) << std::endl;
    } else {
        std::cerr << "Invalid shape specified!" << std::endl;
    }

    return 0;
}
