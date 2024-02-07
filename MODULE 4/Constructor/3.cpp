#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
  
    Car(std::string c, std::string m, int y) {
        company = c;
        model = m;
        year = y;
    }

   
    std::string getCompany() {
        return company;
    }

    std::string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

   
    void setCompany(std::string c) {
        company = c;
    }

    void setModel(std::string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }
};

int main() {
   
    Car myCar("Toyota", "Camry", 2022);

    
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

  
    myCar.setCompany("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2020);

   
    std::cout << "\nModified values:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0;
}
