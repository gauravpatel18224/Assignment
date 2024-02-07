#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
  
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~MyString() {
        delete[] str;
    }
    MyString operator+(const MyString& other) {
        char* result = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(result, str);
        strcat(result, other.str);
        MyString concatString(result);
        delete[] result;
        return concatString;
    }
    void display() {
        std::cout << "String: " << str << std::endl;
    }
};

int main() {
 
    MyString str1("Hello, ");
    MyString str2("World!");
    MyString result = str1 + str2;
    result.display();

    return 0;
}
