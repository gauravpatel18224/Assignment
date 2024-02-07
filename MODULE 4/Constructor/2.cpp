#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

  
    double add() {
        return num1 + num2;
    }

  
    double subtract() {
        return num1 - num2;
    }

   
    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }

    // Function to perform multiplication
    double multiply() {
        return num1 * num2;
    }
};

int main() {

    Calculator calc(10, 5);

    std::cout << "Addition: " << calc.add() << std::endl;

    
    std::cout << "Subtraction: " << calc.subtract() << std::endl;

    std::cout << "Division: " << calc.divide() << std::endl;

   std::cout << "Multiplication: " << calc.multiply() << std::endl;

    return 0;
}
