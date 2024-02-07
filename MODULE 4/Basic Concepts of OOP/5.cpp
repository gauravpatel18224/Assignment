#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
     Person(std::string n, int a, std::string c) {
        name = n;
        age = a;
        country = c;
    }

    void setName(std::string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(std::string c) {
        country = c;
    }

   
    std::string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    std::string getCountry() {
        return country;
    }
};

int main() {
 
    Person person("gaurav", 22, "INDIA");

   
    std::cout << "Initial values:" << std::endl;
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

 
    person.setName("Alice");
    person.setAge(25);
    person.setCountry("Canada");

    
    std::cout << "\nModified values:" << std::endl;
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}
