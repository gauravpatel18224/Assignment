#include <iostream>

int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
double subtract(double a, double b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {
    return a * b;
}
int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
}
double divide(double a, double b) {
    if (b != 0.0)
        return a / b;
    else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0;
    }
}

int main() {
    int intNum1 = 10, intNum2 = 5;
    double doubleNum1 = 10.5, doubleNum2 = 2.5;

    std::cout << "Integer Operations:" << std::endl;
    std::cout << "Addition: " << add(intNum1, intNum2) << std::endl;
    std::cout << "Subtraction: " << subtract(intNum1, intNum2) << std::endl;
    std::cout << "Multiplication: " << multiply(intNum1, intNum2) << std::endl;
    std::cout << "Division: " << divide(intNum1, intNum2) << std::endl;

  
    std::cout << "\nDouble Operations:" << std::endl;
    std::cout << "Addition: " << add(doubleNum1, doubleNum2) << std::endl;
    std::cout << "Subtraction: " << subtract(doubleNum1, doubleNum2) << std::endl;
    std::cout << "Multiplication: " << multiply(doubleNum1, doubleNum2) << std::endl;
    std::cout << "Division: " << divide(doubleNum1, doubleNum2) << std::endl;

    return 0;
}
