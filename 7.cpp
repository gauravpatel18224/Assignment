#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("Congratulations! You passed.\n");
    } else {
        printf("Sorry, you failed.\n");
    }

    return 0;
}
