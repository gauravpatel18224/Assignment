#include <stdio.h>

int main() {
    int number, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

   
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);

        
        if (number % 2 == 0) {
            evenCount++;
            sumEven += number;
        } else {
            oddCount++;
            sumOdd += number;
        }
    }

  
    printf("\nResults:\n");
    printf("a. Number of Even numbers: %d\n", evenCount);
    printf("b. Number of Odd numbers: %d\n", oddCount);
    printf("c. Sum of Even numbers: %d\n", sumEven);
    printf("d. Sum of Odd numbers: %d\n", sumOdd);

    return 0;
}
