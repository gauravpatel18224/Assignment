#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += (float)i / (i + 1);
        } else {
            sum -= (float)i / (i + 1);
        }
    }

  
    printf("Alternating series 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ... %d: %.4f\n", n, sum);

    return 0;
}
