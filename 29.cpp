#include <stdio.h>

int main() {
    int minutes, seconds, hours;

  
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

   
    seconds = minutes * 60;
    hours = minutes / 60;

  
    printf("Equivalent seconds: %d\n", seconds);
    printf("Equivalent hours: %d\n", hours);

    return 0;
}
