#include <iostream>

class Matrix {
private:
    int size;
    int* elements;

public:
   
    Matrix(int s) : size(s) {
        elements = new int[size];
    }
    ~Matrix() {
        delete[] elements;
    }
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            std::cerr << "Error: Matrix sizes must be equal for addition!" << std::endl;
            return *this;
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.elements[i] = elements[i] + other.elements[i];
        }
        return result;
    }
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
    void setElements(int* arr) {
        for (int i = 0; i < size; ++i) {
            elements[i] = arr[i];
        }
    }
};

int main() {
   
    const int size = 5;
    Matrix matrix1(size);
    Matrix matrix2(size);
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {6, 7, 8, 9, 10};

    matrix1.setElements(arr1);
    matrix2.setElements(arr2);

    std::cout << "Matrix 1: ";
    matrix1.display();

    std::cout << "Matrix 2: ";
    matrix2.display();

    Matrix result = matrix1 + matrix2;

    std::cout << "Result of Addition: ";
    result.display();

    return 0;
}
