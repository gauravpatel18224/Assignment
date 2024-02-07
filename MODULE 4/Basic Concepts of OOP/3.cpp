#include <iostream>

class Circle {
private:
    double radius;

public:
   
    Circle(double r) {
        radius = r;
    }

   
    double calculateArea() {
        return 3.14159 * radius * radius; 
    }

    double calculateCircumference() {
        return 2 * 3.14159 * radius; 
    }
};

int main() {
   
    Circle circle(5);

    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;


    std::cout << "Circumference of the circle: " << circle.calculateCircumference() << std::endl;

    return 0;
}
