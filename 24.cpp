//24.Accept 5 employees name and salary and count average and total salary
#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    float totalSalary = 0;
    float averageSalary;
    
    
    for (int i = 0; i < 5; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name); 
        
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);

        totalSalary += employees[i].salary;
    }

  
    averageSalary = totalSalary / 5;

   
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}
