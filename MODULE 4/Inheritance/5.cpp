#include <iostream>

class Base {
private:
    int privateMember;
protected:
    int protectedMember;
public:
    int publicMember;

    Base() : privateMember(10), protectedMember(20), publicMember(30) {}

    int getPrivateMember() {
        return privateMember;
    }
};
class Derived : public Base {
public:
   
    int getProtectedMember() {
        return protectedMember;
    }
    int getPublicMember() {
        return publicMember;
    }
};

int main() {
    Derived derivedObj;

    std::cout << "Public member: " << derivedObj.getPublicMember() << std::endl;

    std::cout << "Protected member: " << derivedObj.getProtectedMember() << std::endl;

    return 0;
}
