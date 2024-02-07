#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int rollNumber;

public:
    
    Person(std::string n, int roll) : name(n), rollNumber(roll) {}

    void displayPersonalInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};
class Marks {
protected:
    int marks[5]; 

public:
    
    Marks(int m1, int m2, int m3, int m4, int m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }
    void displayMarks() {
        std::cout << "Marks:" << std::endl;
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << i + 1 << ": " << marks[i] << std::endl;
        }
    }
};
class StudentMarkSheet : public Person, public Marks {
public:
   
    StudentMarkSheet(std::string n, int roll, int m1, int m2, int m3, int m4, int m5)
        : Person(n, roll), Marks(m1, m2, m3, m4, m5) {}

    void displayMarkSheet() {
        std::cout << "Student Mark Sheet:" << std::endl;
        displayPersonalInfo();
        displayMarks();
    }
};

int main() {
 
    StudentMarkSheet student("gaurav", 101, 80, 75, 85, 90, 95);

    student.displayMarkSheet();

    return 0;
}
