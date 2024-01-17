#include <stdio.h>

int main() {
    float billAmount, totalBill;

    
    printf("Enter the bill amount: ");
    scanf("%f", &billAmount);

   
    if (billAmount > 800) {
        totalBill = billAmount + billAmount * 0.18;  // Adding 18% surcharge
        if (totalBill < 256) {
            totalBill = 256; 
        }
    } else {
        totalBill = billAmount;
    }

    printf("Total Bill Amount: %.2f\n", totalBill);

    return 0;
}
