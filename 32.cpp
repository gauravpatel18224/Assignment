#include <stdio.h>

int main() {
    int num1, num2, sum;

  
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);


    sum = num1 + num2;

  
    printf("Sum: %d\n", sum);

   
    if (sum > 100) {
        printf("The sum is greater than 100.\n");
    } else {
        printf("The sum is not greater than 100.\n");
    }

    return 0;
}
