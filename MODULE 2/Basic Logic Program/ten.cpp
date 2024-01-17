#include <stdio.h>

int main() {
    double sideA, sideB, sideC; 
    double perimeter; 

    printf("Enter the length of side A: ");
    scanf("%lf", &sideA);

    printf("Enter the length of side B: ");
    scanf("%lf", &sideB);

    printf("Enter the length of side C: ");
    scanf("%lf", &sideC);

    
    perimeter = sideA + sideB + sideC;

    
    printf("Perimeter of the triangle with sides %.2lf, %.2lf, and %.2lf units is: %.2lf units\n", sideA, sideB, sideC, perimeter);

    return 0;
}
