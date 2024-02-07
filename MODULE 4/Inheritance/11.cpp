#include <iostream>

class Number {
private:
    int num;

public:
  
    Number(int n) : num(n) {}

    friend void swap(Number&, Number&);
};
void swap(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num; 
    num2.num = num1.num - num2.num; 
    num1.num = num1.num - num2.num; 
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    Number n1(num1);
    Number n2(num2);
    swap(n1, n2);
    std::cout << "After swapping: " << std::endl;
    std::cout << "Number 1: " << n1.num << std::endl;
    std::cout << "Number 2: " << n2.num << std::endl;

    return 0;
}
