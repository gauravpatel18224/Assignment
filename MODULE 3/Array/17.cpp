#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};


union Person {
    char name[50];
    int age;
    float height;
};

int main() {
    printf("Difference between Structure and Union:\n");

   
    struct Student student;
    printf("Size of structure (Student): %lu bytes\n", sizeof(student));

   
    union Person person;
    printf("Size of union (Person): %lu bytes\n", sizeof(person));

    return 0;
}
