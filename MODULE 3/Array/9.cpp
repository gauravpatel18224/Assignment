#include <stdio.h>


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
    
    struct Student student1;
    strcpy(student1.name, "John");
    student1.rollNumber = 101;
    student1.marks = 85.5;

    union Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 25;

    
    printf("Structure Example:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n\n", student1.marks);

    printf("Union Example:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
