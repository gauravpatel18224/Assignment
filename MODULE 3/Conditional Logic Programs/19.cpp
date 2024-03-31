#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitConsumed, totalAmount;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter customer name: ");
    scanf("%s", customerName);  // Assuming customer names don't have spaces

    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);

    if (unitConsumed <= 350) {
        totalAmount = unitConsumed * 1.20;
    } else if (unitConsumed <= 600) {
        totalAmount = 350 * 1.20 + (unitConsumed - 350) * 1.50;
    } else if (unitConsumed <= 800) {
        totalAmount = 350 * 1.20 + 250 * 1.50 + (unitConsumed - 600) * 1.80;
    } else {
        totalAmount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unitConsumed - 800) * 2.00;
    }

   
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount to be Paid: %.2f\n", totalAmount);

    return 0;
}
