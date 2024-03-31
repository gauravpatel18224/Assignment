#include <stdio.h>

int main() {
    int expenses[5];
    int totalExpense = 0;

    for (int i = 0; i < 5; ++i) {
        printf("Enter expense %d: ", i + 1);
        scanf("%d", &expenses[i]);

        totalExpense += expenses[i];
    }

    float averageExpense = (float)totalExpense / 5;
    printf("Average Expense: %.2f\n", averageExpense);

    return 0;
}
