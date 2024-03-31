//18.Calculate person’s Annual salary
#include <stdio.h>


float calculateAnnualSalary(float monthlySalary) {
    return 12 * monthlySalary; 
}

int main() {
    float monthlySalary;

    
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    
    if (monthlySalary < 0) {
        printf("Invalid monthly salary. Please enter a positive value.\n");
        return 1; 
    }

    
    float annualSalary = calculateAnnualSalary(monthlySalary);


    printf("Your annual salary is: %.2f\n", annualSalary);

    return 0;
}
