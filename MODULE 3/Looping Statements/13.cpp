#include <stdio.h>

int main() {
    int num, factorial = 1;

  
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }


    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
