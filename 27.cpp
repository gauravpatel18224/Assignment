#include <stdio.h>

int main() {
    int days, months;

 
    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;

   
    printf("Equivalent months: %d\n", months);

    return 0;
}
