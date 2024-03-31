#include <stdio.h>

int main() {
    int numbers[5], evenCount = 0, oddCount = 0;

   
    printf("Enter 5 numbers:\n");
    int i = 0;
    while (i < 5) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

      
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        i++;
    }

 
    printf("\nResults:\n");
    printf("Number of Even numbers: %d\n", evenCount);
    printf("Number of Odd numbers: %d\n", oddCount);

    return 0;
}
