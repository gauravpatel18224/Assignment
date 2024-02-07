#include <iostream>

class MaxFinder {
private:
    int num1;
    int num2;

public:
    
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    friend int findMax(const MaxFinder&);
};
int findMax(const MaxFinder& mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    MaxFinder maxFinder(num1, num2);
    int maxNumber = findMax(maxFinder);

    std::cout << "Maximum number is: " << maxNumber << std::endl;

    return 0;
}
