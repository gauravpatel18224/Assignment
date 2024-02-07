#include <iostream>


inline int multiply(int a, int b) {
    return a * b;
}
inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num;

  std::cout << "Enter a number: ";
    std::cin >> num;
std::cout << "Multiplication value: " << multiply(num, 3) << std::endl;

   
std::cout << "Cubic value: " << cube(num) << std::endl;

    return 0;
}
