#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print numbers
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
