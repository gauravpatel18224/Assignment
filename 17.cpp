//17.Calculate person’s insurance premium based on salary
#include <stdio.h>


float calculatePremium(float salary) {
    float premium;

        if (salary >= 50000) {
        premium = 0.1 * salary; // 10% of salary for salary >= 50000
    } else if (salary >= 30000) {
        premium = 0.08 * salary; // 8% of salary for salary >= 30000
    } else {
        premium = 0.05 * salary; // 5% of salary for salary < 30000
    }

    return premium;
}

int main() {
    float salary;

    
    printf("Enter your salary: ");
    scanf("%f", &salary);

    
    if (salary < 0) {
        printf("Invalid salary. Please enter a positive value.\n");
        return 1; 
    }

    
    float insurancePremium = calculatePremium(salary);

    
    printf("Your insurance premium is: %.2f\n", insurancePremium);

    return 0;
}
