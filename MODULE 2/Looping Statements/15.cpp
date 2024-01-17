#include <stdio.h>

int main() {
    int count = 0, sum = 0, num;

    
    printf("Enter 10 numbers:\n");
    while (count < 10) {
        printf("Number %d: ", count + 1);
        scanf("%d", &num);
        sum += num;
        count++;
    }

   
    printf("\nSum of entered numbers = %d\n", sum);

    return 0;
}
