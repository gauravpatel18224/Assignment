#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    
    printf("Sum of the squares of the first %d natural numbers: %d\n", n, sum);

    return 0;
}
