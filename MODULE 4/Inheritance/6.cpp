#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base class constructor called" << std::endl;
    }
};
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived class constructor called" << std::endl;
    }
};
class DerivedDerived : public Derived {
public:
    DerivedDerived() {
        std::cout << "DerivedDerived class constructor called" << std::endl;
    }
};

int main() {
    DerivedDerived obj; 
    return 0;
}
