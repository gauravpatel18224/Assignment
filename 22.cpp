/*22.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include <stdio.h>
#include <math.h>


double calculateCompoundInterest(double principal, double rate, int time) {
   
    double amount = principal * pow(1 + rate / 100, time);


    double compoundInterest = amount - principal;

    return compoundInterest;
}

int main() {
    double principal, rate;
    int time;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%d", &time);

    if (principal < 0 || rate < 0 || time < 0) {
        printf("Invalid input. Please enter positive values for principal, rate, and time.\n");
        return 1; 
    }

    
    double compoundInterest = calculateCompoundInterest(principal, rate, time);

  
    printf("The compound interest is: %.2lf\n", compoundInterest);

    return 0;
}
