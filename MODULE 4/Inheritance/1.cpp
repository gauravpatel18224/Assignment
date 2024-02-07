#include <iostream>
#include <string>

class cricketer {
protected:
    std::string name;
    int age;

public:
    // Constructor
    cricketer(std::string n, int a) : name(n), age(a) {}

    // Member function to input data
    void inputData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    // Member function to display data
    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class batsman : public cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
   
    batsman(std::string n, int a) : cricketer(n, a) {}

    void inputData() {
        cricketer::inputData(); 
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }
    void calculateAverageRuns() {
        averageRuns = static_cast<double>(totalRuns) / bestPerformance;
    }
    void displayData() {
        cricketer::displayData(); 
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    
    batsman player("Sachin", 38);

    player.inputData();
    player.calculateAverageRuns();

    player.displayData();

    return 0;
}
