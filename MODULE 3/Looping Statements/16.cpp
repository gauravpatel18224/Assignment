#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        sum += i;
        i++;
    }

   
    printf("Sum of first %d natural numbers = %d\n", num, sum);

    return 0;
}
