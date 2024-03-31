#include <stdio.h>

int main() {
    int numbers[5];
    long long factorials[5] = {1, 1, 1, 1, 1}; // Initialize factorials to 1

  
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

 
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= numbers[i]; j++) {
            factorials[i] *= j;
        }
    }

   
    printf("\nFactorials of entered numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Factorial of %d = %lld\n", numbers[i], factorials[i]);
    }

    return 0;
}
