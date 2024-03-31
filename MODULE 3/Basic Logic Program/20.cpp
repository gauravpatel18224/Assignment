//20.Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.
#include <stdio.h>


float calculateRemainingSalary(float monthlySalary) {
   
    float afterInsurance = monthlySalary * (1 - 0.10);

   
    float remainingSalary = afterInsurance * (1 - 0.10);

    return remainingSalary;
}

int main() {
    float monthlySalary;

   
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    
    if (monthlySalary < 0) {
        printf("Invalid monthly salary. Please enter a positive value.\n");
        return 1;
    }


    float remainingSalary = calculateRemainingSalary(monthlySalary);

    printf("Your remaining salary after deductions is: %.2f\n", remainingSalary);

    return 0;
}
