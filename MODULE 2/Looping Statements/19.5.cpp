#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
       
        for (int space = n - i; space > 0; space--) {
            printf("  ");
        }

       
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
