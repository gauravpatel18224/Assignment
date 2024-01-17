#include <stdio.h>

int main() {
    int years, days;


    printf("Enter number of years: ");
    scanf("%d", &years);

  
    days = years * 365;

    printf("Equivalent days: %d\n", days);


    years = days / 365;

  
    printf("Equivalent years: %d\n", years);

    return 0;
}
