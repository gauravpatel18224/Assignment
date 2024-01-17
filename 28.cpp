#include <stdio.h>

int main() {
    int years, months, days;

   
    printf("Enter number of years: ");
    scanf("%d", &years);

    
    months = years * 12;
    days = years * 365;

   
    printf("Equivalent months: %d\n", months);
    printf("Equivalent days: %d\n", days);

    return 0;
}
