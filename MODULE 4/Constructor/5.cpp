#include <iostream>

class Triangle {
private:
    double side1, side2, side3;

public:
   
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    void triangleType() {
        if (side1 == side2 && side2 == side3) {
            std::cout << "Equilateral triangle" << std::endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            std::cout << "Isosceles triangle" << std::endl;
        } else {
            std::cout << "Scalene triangle" << std::endl;
        }
    }
};

int main() {
   
    Triangle triangle1(3, 4, 5);
    std::cout << "Triangle 1: ";
    triangle1.triangleType();

    Triangle triangle2(5, 5, 5);
    std::cout << "Triangle 2: ";
    triangle2.triangleType();

    Triangle triangle3(5, 6, 7);
    std::cout << "Triangle 3: ";
    triangle3.triangleType();

    return 0;
}
