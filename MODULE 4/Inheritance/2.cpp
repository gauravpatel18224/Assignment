#include <iostream>

class Rectangle {
protected:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }
};
class Square : public Rectangle {
public:
  
    Square(double side) : Rectangle(side, side) {}
};

int main() {
   
    Rectangle rectangle(5, 3);
    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;

    Square square(4);

    std::cout << "Area of Square: " << square.calculateArea() << std::endl;

    return 0;
}
