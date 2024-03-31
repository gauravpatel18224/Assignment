#include <stdio.h>

struct Student {
    char name[50];
};

int main() {
    struct Student students[5];

    
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", students[i].name);
    }

  
    printf("\nNames of students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, students[i].name);
    }

    return 0;
}
