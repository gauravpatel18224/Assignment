#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
  
    Person(std::string n, int a) : name(n), age(a) {}

    void readData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }
    void writeData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};
class Student : public Person {
protected:
    float percentage;

public:
    
    Student(std::string n, int a, float p) : Person(n, a), percentage(p) {
    void readData() {
        Person::readData();
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

   
    void writeData() {
        Person::writeData(); 
        std::cout << "Percentage: " << percentage << std::endl;
    }
};
class Teacher : public Person {
protected:
    float salary;

public:
   
    Teacher(std::string n, int a, float s) : Person(n, a), salary(s) {}

    void readData() {
        Person::readData();
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }
    void writeData() {
        Person::writeData(); 
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    
    Student student("gaurav", 20, 85.5);

    student.readData();
    std::cout << "\nStudent Information:\n";
    student.writeData();
    Teacher teacher("Mary", 35, 50000);

    teacher.readData();
    std::cout << "\nTeacher Information:\n";
    teacher.writeData();

    return 0;
}
