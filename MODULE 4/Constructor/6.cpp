#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
   
    Employee(std::string n, int id, double initialSalary) {
        name = n;
        employeeID = id;
        salary = initialSalary;
    }

    void calculateSalary(double performanceFactor) {
        salary *= performanceFactor;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    std::string getName() {
        return name;
    }

    int getEmployeeID() {
        return employeeID;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
  
    Employee emp("John Doe", 1001, 50000);

    std::cout << "Employee Name: " << emp.getName() << std::endl;
    std::cout << "Employee ID: " << emp.getEmployeeID() << std::endl;
    std::cout << "Initial Salary: $" << emp.getSalary() << std::endl;

    emp.calculateSalary(1.1); 
    std::cout << "New Salary after Performance Appraisal: $" << emp.getSalary() << std::endl;

    emp.setSalary(60000);
    std::cout << "Salary after Salary Adjustment: $" << emp.getSalary() << std::endl;

    return 0;
}
