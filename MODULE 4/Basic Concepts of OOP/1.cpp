#include <iostream>
using namespace std;

class Calculator {
public:
   
    float add(float a, float b) {
        return a + b;
    }

   
    float subtract(float a, float b) {
        return a - b;
    }

 
    float multiply(float a, float b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        } else {
            return a / b;
        }
    }
};

int main() {
    Calculator calc; 

    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!";
    }

    return 0;
}
