#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
   
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }
    int getYear() {
        return year;
    }

    bool isValidDate() {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;
        
        switch(month) {
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Leap year check
                    return (day <= 29);
                else
                    return (day <= 28);
            case 4:
            case 6:
            case 9:
            case 11:
                return (day <= 30);
            default:
                return (day <= 31);
        }
    }
};

int main() {
   
    Date date(29, 2, 2024);

    if (date.isValidDate()) {
        std::cout << "Date is valid." << std::endl;
    } else {
        std::cout << "Date is not valid." << std::endl;
    }
	return 0;
}
